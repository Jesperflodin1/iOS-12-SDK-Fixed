//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageAccumulationNode.h>

@protocol NUMutablePurgeableBufferImage;

@interface NUBufferImageAccumulationNode : NUImageAccumulationNode
{
}

@property(readonly, nonatomic) id <NUMutablePurgeableBufferImage> bufferImage;
- (id)_newImage;

@end
