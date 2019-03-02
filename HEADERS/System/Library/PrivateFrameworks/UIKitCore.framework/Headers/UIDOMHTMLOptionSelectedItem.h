/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)node;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(BOOL)isGroup;
-(void)unselect;
-(id)initWithHTMLOptionNode:(id)arg1 ;
-(DOMHTMLOptionElement *)_node;
@end
