//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGIconLocation : NSObject
{
    long long _page;
    long long _idx;
    long long _folderPage;
}

@property(nonatomic) long long folderPage; // @synthesize folderPage=_folderPage;
@property(nonatomic) long long idx; // @synthesize idx=_idx;
@property(nonatomic) long long page; // @synthesize page=_page;
- (id)initWithPage:(long long)arg1 pageIndex:(long long)arg2 folderPage:(long long)arg3;

@end

