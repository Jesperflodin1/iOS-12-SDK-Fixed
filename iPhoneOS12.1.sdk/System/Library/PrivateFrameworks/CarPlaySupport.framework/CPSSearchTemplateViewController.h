//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchContainerViewController.h>

#import <CarPlaySupport/CPListTemplateDelegate-Protocol.h>
#import <CarPlaySupport/CPSBaseTemplateViewController-Protocol.h>
#import <CarPlaySupport/CPSearchTemplateProviding-Protocol.h>
#import <CarPlaySupport/UISearchBarDelegate-Protocol.h>
#import <CarPlaySupport/UISearchControllerDelegate-Protocol.h>
#import <CarPlaySupport/UISearchResultsUpdating-Protocol.h>

@class CPSearchTemplate, CPTemplate, NSString;
@protocol CPSTemplateViewControllerDelegate, CPSearchClientTemplateDelegate, CPTemplateDelegate;

@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding>
{
    _Bool _didPop;
    _Bool _didDisappear;
    id <CPSTemplateViewControllerDelegate> _viewControllerDelegate;
    CPTemplate *_associatedTemplate;
    id <CPTemplateDelegate> _templateDelegate;
}

@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(nonatomic) _Bool didPop; // @synthesize didPop=_didPop;
@property(retain, nonatomic) id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(retain, nonatomic) CPTemplate *associatedTemplate; // @synthesize associatedTemplate=_associatedTemplate;
@property(nonatomic) __weak id <CPSTemplateViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
- (void).cxx_destruct;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cps_viewControllerWasPopped;
@property(readonly, nonatomic) __weak id <CPSearchClientTemplateDelegate> searchTemplateDelegate;
@property(readonly, nonatomic) CPSearchTemplate *searchTemplate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_cleanup;
- (id)initWithSearchController:(id)arg1 searchTemplate:(id)arg2 templateDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

