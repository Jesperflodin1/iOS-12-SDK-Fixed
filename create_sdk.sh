#!/bin/sh


#mkdir -p ~/theos/sdks/iPhoneOS12.1.sdk/System/Library/PrivateFrameworks/

iOSVersion="$1"
dyldCache="$2"

generateSymbols() {
	echo "\033[1;34mGenerating symbols\033[0m"
	rm -rf tempTBD
	jtool2 -l $dyldCache | cut -c 25- | tail +2 | grep / | awk '{print $1; }' | while read line
	do 
		line="$line"
	 	dir="$(dirname "$line")" 
	 	name="$(basename "$line")" 
	 	outfile="${name%*.dylib}.tbd"
	 	echo "\033[1;34mProcessing $line\033[0m"

	 	mkdir -p tempTBD/"$dir"
	 	jtool2 --tbd "$dyldCache":$name > tempTBD/"$dir"/"$outfile"
	done
}


extractDyldCache() {
	rm -rf dyldCache
	mkdir dyldCache
	echo "\033[1;34mProcessing $dyldCache\033[0m"
	./dsc_extractor "$dyldCache" dyldCache
}
createSDK() {
	sdkPath="$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS"$iOSVersion".sdk

	echo "\033[1;34mTrying to copy SDK from Xcode for iOS $iOSVersion\033[0m"
	rm -rf iPhoneOS"$iOSVersion".sdk
	mkdir iPhoneOS"$iOSVersion".sdk
	cp -R "$sdkPath"/* iPhoneOS"$iOSVersion".sdk/

	echo "\033[1;34mAdding Private Frameworks to SDK for iOS $iOSVersion\033[0m"
	#extractDyldCache "$dyldCache"
	generateSymbols

	cp -R tempTBD/* iPhoneOS"$iOSVersion".sdk/
	rm -rf tempTBD

	echo "\033[1;34mAdding dumped headers to SDK for iOS $iOSVersion\033[0m"
	cp -R Headers/* iPhoneOS"$iOSVersion".sdk/
}

#generateSymbols
createSDK