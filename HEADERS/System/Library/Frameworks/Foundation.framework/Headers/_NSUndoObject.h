/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSUndoObject : NSObject {

	_NSUndoObject* next;
	_NSUndoObject* previous;
	id _target;

}
-(BOOL)isEndMark;
-(BOOL)isBeginMark;
-(id)init;
-(id)target;
-(void)invoke;
-(id)initWithTarget:(id)arg1 ;
@end

