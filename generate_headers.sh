#!/bin/sh

rm -fr iOS


mkdir -p iOS/Frameworks
mkdir -p iOS/Applications
mkdir -p iOS/PrivateFrameworks
mkdir -p iOS/AccessibilityBundles
mkdir -p iOS/usr/lib


visitFrameworkOrApp() {
	FRAMEWORK="$1"
	ARCH="$2"
	BASEPATH="$3"
	
	if [[ -f "$FRAMEWORK" ]]; then
		FRAMEWORK_BASENAME="${${$(basename "$FRAMEWORK")%.*}##lib}"
	else
		FRAMEWORK_BASENAME="$(basename "$FRAMEWORK")"
	fi
		
	echo -e "\033[1;34mProcessing $FRAMEWORK\033[0m"
	./class-dump --arch "$ARCH" -H -o "$BASEPATH/$FRAMEWORK_BASENAME" "$FRAMEWORK"
		
	if [[ -d "$FRAMEWORK/Frameworks" ]]; then
		for INNER_FRAMEWORK in "${FRAMEWORK}"/Frameworks/* ; do
			visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Frameworks
		done		
	fi

	if [[ -d "$FRAMEWORK/Support" ]]; then
		for INNER_FRAMEWORK in "${FRAMEWORK}"/Support/* ; do
			visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Support
		done		
	fi

}

iOS() {
	# iOS

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/Frameworks/
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/PrivateFrameworks/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/usr/lib/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/usr/lib/
	done

	for APPLICATION in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/Applications/* ; do
		visitFrameworkOrApp "$APPLICATION" x86_64 iOS/Applications/
	done

	for BUNDLE in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/* ; do
		visitFrameworkOrApp "$BUNDLE" x86_64 iOS/AccessibilityBundles
	done
}

iOS