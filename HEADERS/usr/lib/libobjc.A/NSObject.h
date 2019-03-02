/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:18:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libobjc.A.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/libobjc.A.dylib-Structs.h>
#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/CAAnimatableValue.h>
#import <libobjc.A.dylib/CARenderValue.h>
#import <libobjc.A.dylib/ROCKRemoteInvocationInterface.h>
#import <libobjc.A.dylib/NSObject.h>
@class NSString;


@protocol NSObject
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1;
-(BOOL)isEqual:(id)arg1;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)autorelease;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1;
-(BOOL)conformsToProtocol:(id)arg1;
-(id)retain;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;

@end


@class NSString, UIDescriptionBuilder, _UITraitStorageList, NSArray, NSAttributedString, UIBezierPath;

@interface NSObject <_DKProtobufConverting, CAAnimatableValue, CARenderValue, ROCKRemoteInvocationInterface, NSObject> {

	Class isa;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * fm_logID; 
@property (nonatomic,retain,readonly) NSString * logID; 
@property (nonatomic,readonly) UIDescriptionBuilder * _ui_descriptionBuilder; 
@property (setter=_setTraitStorageList:,getter=_traitStorageList,retain) _UITraitStorageList * traitStorageList; 
@property (nonatomic,retain) NSArray * accessibilityCustomRotors; 
@property (nonatomic,retain) NSArray * accessibilityElements; 
@property (assign,nonatomic) long long accessibilityContainerType; 
@property (nonatomic,readonly) NSString * accessibilityLocalizedStringKey; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@property (nonatomic,retain) NSArray * accessibilityCustomActions; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedLabel; 
@property (nonatomic,copy) NSString * accessibilityHint; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedHint; 
@property (nonatomic,copy) NSString * accessibilityValue; 
@property (nonatomic,copy) NSAttributedString * accessibilityAttributedValue; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (nonatomic,copy) UIBezierPath * accessibilityPath; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (nonatomic,retain) NSString * accessibilityLanguage; 
@property (assign,nonatomic) BOOL accessibilityElementsHidden; 
@property (assign,nonatomic) BOOL accessibilityViewIsModal; 
@property (assign,nonatomic) BOOL shouldGroupAccessibilityChildren; 
@property (assign,nonatomic) long long accessibilityNavigationStyle; 
@property (nonatomic,copy) NSArray * accessibilityHeaderElements; 
@property (retain,readonly) id autoContentAccessingProxy; 
@property (readonly) Class classForKeyedArchiver; 
@property (assign) void* observationInfo; 
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
+(void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1 ;
+(id)_cplPropertyAttributeMap;
+(void)cplDumpProperties;
+(id)cplAllPropertyNames;
+(Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2 ;
+(BOOL)implementsClassMethod:(SEL)arg1 ;
+(BOOL)implementsInstanceMethod:(SEL)arg1 ;
+(Class)implementingClassForInstanceMethod:(SEL)arg1 ;
+(BOOL)currentContextCanExecuteSelector:(SEL)arg1 ;
+(void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2 ;
+(void)setExecutionContextCheckForAllInstanceMethods:(int)arg1 ;
+(void)setExecutionContextCheckForAllClassMethods:(int)arg1 ;
+(void)setExecutionContextCheck:(int)arg1 forInstanceMethod:(SEL)arg2 ;
+(void)setExecutionContextCheck:(int)arg1 forClassMethod:(SEL)arg2 ;
+(void)_accessibilityCalDetailStringForEvent:(id)arg1 inLine1:(id*)arg2 inLine2:(id*)arg3 inLine3:(id*)arg4 inLine4:(id*)arg5 ;
+(void)_accessibilityCalGetHourDesignatorsForAM:(id*)arg1 andPM:(id*)arg2 ;
+(BOOL)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+(BOOL)_accessibilityCalHourDesignatorsAreBeforeHour;
+(BOOL)_accessibilityCalShow24Hours;
+(id)_accessibilityStringForDayOfWeek:(int)arg1 ;
+(id)_accessibilityStringForDate:(SCD_Struct_NS1)arg1 ;
+(id)bb_objectCache;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)fromPBCodable:(id)arg1 ;
+(id)CKSQLiteClassName;
+(void)mf_clearLocks;
+(void)_installAppearanceSwizzlesForSetter:(id)arg1 ;
+(BOOL)__accessibilityGuidedAccessStateEnabled;
+(long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1 ;
+(void)__accessibilityRequestGuidedAccessSession:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)_webkit_invokeOnMainThread;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)CA_CAMLPropertyForKey:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)CA_encodesPropertyConditionally:(unsigned)arg1 type:(int)arg2 ;
+(id)bs_dataFromObject:(id)arg1 ;
+(id)bs_objectFromData:(id)arg1 ;
+(id)bs_decodedFromData:(id)arg1 ;
+(id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2 ;
+(id)bs_secureDataFromObject:(id)arg1 ;
+(id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2 ;
+(id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2 ;
+(id)bs_secureDecodedFromData:(id)arg1 ;
+(id)replacementObjectForPortCoder:(id)arg1 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 ;
+(BOOL)implementsSelector:(SEL)arg1 ;
+(BOOL)instancesImplementSelector:(SEL)arg1 ;
+(void)load;
+(void)setVersion:(long long)arg1 ;
+(long long)version;
+(Class)classForKeyedUnarchiver;
+(id)classFallbacksForKeyedArchiver;
+(BOOL)_shouldAddObservationForwardersForKey:(id)arg1 ;
+(void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
+(id)_keysForValuesAffectingValueForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)__allocWithZone_OA:(NSZone*)arg1 ;
+(id)_copyDescription;
+(id)init;
+(void)dealloc;
+(void)load;
+(id)description;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)SFSQLiteClassName;
+(BOOL)isAncestorOfObject:(id)arg1 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(BOOL)isFault;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(Class)class;
+(BOOL)isKindOfClass:(Class)arg1 ;
+(id)mutableCopy;
+(id)alloc;
+(id)init;
+(void)dealloc;
+(BOOL)isEqual:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(oneway void)release;
+(BOOL)respondsToSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(void)load;
+(void)initialize;
+(id)autorelease;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(BOOL)isProxy;
+(BOOL)isMemberOfClass:(Class)arg1 ;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(id)retain;
+(unsigned long long)retainCount;
+(NSZone*)zone;
+(unsigned long long)hash;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(id)copy;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)new;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(BOOL)allowsWeakReference;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)_isDeallocating;
+(BOOL)_tryRetain;
+(void)forwardInvocation:(id)arg1 ;
+(BOOL)retainWeakReference;
-(id)returnNewFromSelector:(SEL)arg1 andObj:(id)arg2 ;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)_pl_prettyDescription;
-(id)pl_briefDescription;
-(BOOL)cplIsEqual:(id)arg1 ;
-(unsigned long long)cplHash;
-(void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(/*^block*/id)arg3 ;
-(id)cplFullDescription;
-(void)cplEncodePropertiesWithCoder:(id)arg1 ;
-(void)cplDecodePropertiesFromCoder:(id)arg1 ;
-(void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(/*^block*/id)arg2 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(BOOL)cplIsEqual:(id)arg1 withEqualityBlock:(/*^block*/id)arg2 ;
-(BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(/*^block*/id)arg3 ;
-(BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id*)arg3 withEqualityBlock:(/*^block*/id)arg4 ;
-(id)cplDeepCopy;
-(void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(/*^block*/id)arg3 ;
-(id)storedClassNameForCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(void)setAssociatedObject:(id)arg1 forKey:(id)arg2 ;
-(id)associatedObjectForKey:(id)arg1 ;
-(void)PF_mainThreadReleaseWrapper:(/*function pointer*/void*)arg1 ;
-(id)className;
-(id)multicaster:(id)arg1 queueForSelector:(SEL)arg2 ;
-(BOOL)currentContextCanExecuteSelector:(SEL)arg1 ;
-(void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2 ;
-(id)bb_objectCache;
-(BOOL)_isMKClusterAnnotation;
-(BOOL)_mapkit_isInternalAnnotationView;
-(BOOL)_mapkit_isInternalAnnotation;
-(void)cn_updateDictionaryForKey:(id)arg1 withChanges:(id)arg2 ;
-(void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)MPMediaLibraryDataProviderSystemML3CoercedString;
-(id)MP_shortDescription;
-(void)__crossedTimeMarkerNotification:(id)arg1 ;
-(void)registerForTimeMarkerNotificationsIfNecessaryForPlayer:(id)arg1 ;
-(void)unregisterForTimeMarkerNotifications;
-(void)da_addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(void)da_performSelectorThatDoesntAffectRetainCount:(SEL)arg1 withObject:(id)arg2 ;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(BOOL)ml_matchesValue:(id)arg1 usingComparison:(int)arg2 ;
-(id)toPBCodable;
-(id)delayedProxy:(double)arg1 ;
-(id)mainThreadProxy;
-(id)blockingMainThreadProxy;
-(void)postNotificationWithDescription:(id)arg1 ;
-(BOOL)okToNotifyFromThisThread;
-(void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)allowSafePerformSelector;
-(void)disallowSafePerformSelector;
-(void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(SEL)_intents_setterForPropertyWithName:(id)arg1 ;
-(id)_intents_indexingRepresentation;
-(id)_intents_readableDescriptionForLanguage:(id)arg1 ;
-(id)_intents_localizedCopyForLanguage:(id)arg1 ;
-(id)CalClassName;
-(void)performBlockOnMainThreadSynchronously:(/*^block*/id)arg1 ;
-(BOOL)isNull;
-(id)CKStatusReport;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKDescription;
-(id)CKPropertiesDescription;
-(id)hashedDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)CKPropertiesDescriptionStringFromProperties:(id)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(id)__im_afterDelay:(double)arg1 ;
-(id)__im_afterDelay:(double)arg1 modes:(id)arg2 ;
-(id)__im_onThread:(id)arg1 ;
-(id)__im_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2 ;
-(id)__im_onMainThreadIfNecessary;
-(id)__im_onDetachedThread;
-(id)__im_getInvocation:(id*)arg1 ;
-(id)__im_onMainThread;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(BOOL)arg4 ;
-(BOOL)isNull;
-(id)mf_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)mf_strictLockOrdering;
-(id)mf_exclusiveLocks;
-(id)_mf_lockOrderingForType:(int)arg1 ;
-(void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2 ;
-(BOOL)_mf_ntsIsLocked;
-(void)_mf_checkToAllowOrderingWithLock:(id)arg1 ;
-(void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1 ;
-(void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1 ;
-(void)_mf_checkToAllowLock:(id)arg1 ;
-(BOOL)mf_tryLockWithPriority;
-(BOOL)mf_tryLock;
-(id)mf_lockOrdering;
-(void)mf_lockWithPriority;
-(void)mf_lock;
-(void)mf_unlock;
-(BOOL)__canBecomeCNZombie;
-(void)__saveCNZombieRRStacks;
-(void)__gatherCNZombieRRStack;
-(BOOL)__becomeACNZombie;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)_ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)nullToNil;
-(NSString *)fm_logID;
-(id)fm_nullToNil;
-(NSString *)logID;
-(void)_fm_addNotificationObserverProxy:(id)arg1 ;
-(void)_fm_removeNotificationObserverProxy:(id)arg1 ;
-(id)fm_associatedObjectForDescriptor:(const SCD_Struct_NS3*)arg1 ;
-(void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const SCD_Struct_NS3*)arg2 ;
-(id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)fm_removeNotificationBlockObserver:(id)arg1 ;
-(const char*)utf8ValueSafe:(int*)arg1 ;
-(BOOL)boolValueSafe;
-(BOOL)boolValueSafe:(int*)arg1 ;
-(long long)int64ValueSafe;
-(long long)int64ValueSafe:(int*)arg1 ;
-(double)doubleValueSafe;
-(double)doubleValueSafe:(int*)arg1 ;
-(id)stringValueSafe;
-(const char*)utf8ValueSafe;
-(id)stringValueSafe:(int*)arg1 ;
-(id)className;
-(UIDescriptionBuilder *)_ui_descriptionBuilder;
-(id)__ivarDescriptionForClass:(Class)arg1 ;
-(id)__propertyDescriptionForClass:(Class)arg1 ;
-(id)__methodDescriptionForClass:(Class)arg1 ;
-(id)_ivarDescription;
-(id)_propertyDescription;
-(id)_methodDescription;
-(id)_shortMethodDescription;
-(void)_applyTraitStorageRecordsForTraitCollection:(id)arg1 ;
-(void)_setTraitStorageList:(id)arg1 ;
-(id)_traitStorageList;
-(id)_uikit_valueForTraitCollection:(id)arg1 ;
-(BOOL)_uikit_variesByTraitCollections;
-(void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(void)awakeFromNib;
-(void)prepareForInterfaceBuilder;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)__ui_performAsyncSelector:(SEL)arg1 type:(long long)arg2 sender:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id*)arg2 ;
-(void)setAccessibilityCustomRotors:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomRotors;
-(id)storedAccessibilityContainerType;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(long long)accessibilityContainerType;
-(void)setAccessibilityContainerType:(long long)arg1 ;
-(void)setAccessibilityDragSourceDescriptors:(id)arg1 ;
-(id)accessibilityDragSourceDescriptors;
-(void)setAccessibilityDropPointDescriptors:(id)arg1 ;
-(id)accessibilityDropPointDescriptors;
-(NSString *)accessibilityLocalizedStringKey;
-(NSString *)accessibilityIdentifier;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)accessibilityIdentification;
-(void)accessibilitySetIdentification:(id)arg1 ;
-(void)_accessibilityFinalize;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomActions;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityElementIsFocused;
-(id)accessibilityAssistiveTechnologyFocusedIdentifiers;
-(id)_internalAccessibilityAttributedLabel;
-(id)_internalAccessibilityAttributedValue;
-(id)_internalAccessibilityAttributedHint;
-(CGRect)accessibilityFrame;
-(id)storedAccessibilityViewIsModal;
-(id)storedAccessibilityElementsHidden;
-(id)storedShouldGroupAccessibilityChildren;
-(id)storedAccessibilityNavigationStyle;
-(void)_internalSetAccessibilityAttributedLabel:(id)arg1 ;
-(void)_internalSetAccessibilityAttributedValue:(id)arg1 ;
-(void)_internalSetAccessibilityAttributedHint:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSString *)accessibilityValue;
-(NSAttributedString *)accessibilityAttributedValue;
-(NSString *)accessibilityHint;
-(NSAttributedString *)accessibilityAttributedHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(NSString *)accessibilityLanguage;
-(UIBezierPath *)accessibilityPath;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(BOOL)shouldGroupAccessibilityChildren;
-(long long)accessibilityNavigationStyle;
-(id)storedAccessibilityTraits;
-(id)storedIsAccessibilityElement;
-(id)storedAccessibilityFrame;
-(id)storedAccessibilityActivationPoint;
-(NSArray *)accessibilityHeaderElements;
-(void)setAccessibilityElementsHidden:(BOOL)arg1 ;
-(void)setAccessibilityViewIsModal:(BOOL)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityAttributedValue:(NSAttributedString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityAttributedHint:(NSAttributedString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)setAccessibilityLanguage:(NSString *)arg1 ;
-(void)setShouldGroupAccessibilityChildren:(BOOL)arg1 ;
-(void)setAccessibilityNavigationStyle:(long long)arg1 ;
-(void)setAccessibilityHeaderElements:(NSArray *)arg1 ;
-(id)_webkit_invokeOnMainThread;
-(void)releaseOnMainThread;
-(id)_web_description;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(Object*)CA_copyRenderValue;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(void)CA_prepareRenderValue;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(id)ams_generateDescriptionWithSubObjects:(id)arg1 ;
-(id)pep_onThread:(id)arg1 ;
-(id)pep_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2 ;
-(id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2 ;
-(id)pep_onDetachedThread;
-(id)pep_onOperationQueue:(id)arg1 ;
-(id)pep_onMainThreadIfNecessary;
-(id)pep_afterDelay:(double)arg1 ;
-(id)pep_getInvocation:(id*)arg1 ;
-(id)pep_onMainThread;
-(BOOL)un_safeBoolValue;
-(id)bs_encoded;
-(BOOL)bs_isPlistableType;
-(id)bs_secureEncoded;
-(void)remoteInvocation:(id)arg1 sessionManager:(id)arg2 invocationHandler:(/*^block*/id)arg3 ;
-(BOOL)_isToManyChangeInformation;
-(BOOL)_overrideUseFastBlockObservers;
-(void)_receiveBox:(id)arg1 ;
-(void)_destroyObserverList;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
-(id)addChainedObservers:(id)arg1 ;
-(id)addObservationTransformer:(/*^block*/id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(void)finishObserving;
-(void)receiveObservedValue:(id)arg1 ;
-(void)receiveObservedError:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(Class)classForPortCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2 ;
-(void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4 ;
-(void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 ;
-(void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(id)autoContentAccessingProxy;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2 ;
-(void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 maybeNewValuesDict:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)_implicitObservationInfo;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)_changeValueForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void*)observationInfo;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 forProperty:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_isKVOA;
-(BOOL)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)replacementObjectForArchiver:(id)arg1 ;
-(Class)classForArchiver;
-(unsigned long long)_cfTypeID;
-(BOOL)isNSDate__;
-(BOOL)isNSSet__;
-(BOOL)isNSObject__;
-(BOOL)isNSValue__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSArray__;
-(BOOL)isNSString__;
-(BOOL)isNSNumber__;
-(BOOL)isNSData__;
-(void)__dealloc_zombie;
-(id)__retain_OA;
-(oneway void)__release_OA;
-(id)__autorelease_OA;
-(BOOL)___tryRetain_OA;
-(id)_copyDescription;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(BOOL)isFault;
-(void)finalize;
-(Class)class;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)mutableCopy;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)autorelease;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)isProxy;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copy;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(BOOL)allowsWeakReference;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)retainWeakReference;
@end
