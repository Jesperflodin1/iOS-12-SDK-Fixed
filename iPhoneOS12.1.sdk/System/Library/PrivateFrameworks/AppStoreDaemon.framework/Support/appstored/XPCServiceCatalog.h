//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XPCServiceCatalog : NSObject
{
    CDUnknownBlockType _CrossfireServiceProvider;
    CDUnknownBlockType _diagnosticSericeProvider;
    CDUnknownBlockType _IAPHistoryServiceProvider;
    CDUnknownBlockType _libraryServiceProvider;
    CDUnknownBlockType _PersonalizationServiceProvider;
    CDUnknownBlockType _PurchaseHistoryServiceProvider;
    CDUnknownBlockType _PurchaseServiceProvider;
    CDUnknownBlockType _UpdatesServiceProvider;
    struct _ASDServiceEntitlement _CrossfireServerEntitlement;
    struct _ASDServiceEntitlement _diagnosticServiceEntitlement;
    struct _ASDServiceEntitlement _IAPHistoryServiceEntitlement;
    struct _ASDServiceEntitlement _libraryServiceEntitlement;
    struct _ASDServiceEntitlement _PersonalizationServerEntitlement;
    struct _ASDServiceEntitlement _PurchaseHistoryServiceEntitlement;
    struct _ASDServiceEntitlement _PurchaseServiceEntitlement;
    struct _ASDServiceEntitlement _UpdatesServiceEntitlement;
}

@property(copy) CDUnknownBlockType UpdatesServiceProvider; // @synthesize UpdatesServiceProvider=_UpdatesServiceProvider;
@property struct _ASDServiceEntitlement UpdatesServiceEntitlement; // @synthesize UpdatesServiceEntitlement=_UpdatesServiceEntitlement;
@property(copy) CDUnknownBlockType PurchaseServiceProvider; // @synthesize PurchaseServiceProvider=_PurchaseServiceProvider;
@property struct _ASDServiceEntitlement PurchaseServiceEntitlement; // @synthesize PurchaseServiceEntitlement=_PurchaseServiceEntitlement;
@property(copy) CDUnknownBlockType PurchaseHistoryServiceProvider; // @synthesize PurchaseHistoryServiceProvider=_PurchaseHistoryServiceProvider;
@property struct _ASDServiceEntitlement PurchaseHistoryServiceEntitlement; // @synthesize PurchaseHistoryServiceEntitlement=_PurchaseHistoryServiceEntitlement;
@property(copy) CDUnknownBlockType PersonalizationServiceProvider; // @synthesize PersonalizationServiceProvider=_PersonalizationServiceProvider;
@property struct _ASDServiceEntitlement PersonalizationServerEntitlement; // @synthesize PersonalizationServerEntitlement=_PersonalizationServerEntitlement;
@property(copy) CDUnknownBlockType libraryServiceProvider; // @synthesize libraryServiceProvider=_libraryServiceProvider;
@property struct _ASDServiceEntitlement libraryServiceEntitlement; // @synthesize libraryServiceEntitlement=_libraryServiceEntitlement;
@property(copy) CDUnknownBlockType IAPHistoryServiceProvider; // @synthesize IAPHistoryServiceProvider=_IAPHistoryServiceProvider;
@property struct _ASDServiceEntitlement IAPHistoryServiceEntitlement; // @synthesize IAPHistoryServiceEntitlement=_IAPHistoryServiceEntitlement;
@property(copy) CDUnknownBlockType diagnosticSericeProvider; // @synthesize diagnosticSericeProvider=_diagnosticSericeProvider;
@property struct _ASDServiceEntitlement diagnosticServiceEntitlement; // @synthesize diagnosticServiceEntitlement=_diagnosticServiceEntitlement;
@property(copy) CDUnknownBlockType CrossfireServiceProvider; // @synthesize CrossfireServiceProvider=_CrossfireServiceProvider;
@property struct _ASDServiceEntitlement CrossfireServerEntitlement; // @synthesize CrossfireServerEntitlement=_CrossfireServerEntitlement;
- (void).cxx_destruct;

@end
