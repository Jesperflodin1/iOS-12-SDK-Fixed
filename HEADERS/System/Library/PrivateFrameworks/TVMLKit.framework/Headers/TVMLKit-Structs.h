/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPath* CGPathRef;

typedef struct __CFString* CFStringRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct TVCornerRadii {
	double topLeft;
	double topRight;
	double bottomLeft;
	double bottomRight;
} TVCornerRadii;

typedef struct CGContext* CGContextRef;

typedef struct _NSZone* NSZoneRef;

typedef struct TVRowMetrics {
	long long rowType;
	double rowHeight;
	CGSize rowPadding;
	CGSize rowInset;
	CGSize rowInsetAlt;
	CGSize rowMargin;
} TVRowMetrics;

typedef struct CGImage* CGImageRef;

typedef struct {
	/*function pointer*/void* ;
	UIEdgeInsets insetValue;
	d) doubleValue;
	BOOL isValueSet;
} SCD_Struct_TV9;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	UIEdgeInsets field3;
	double) field4;
	BOOL field5;
} SCD_Struct_TV10;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct TVCellMetrics {
	CGSize cellSize;
	UIEdgeInsets cellPadding;
	UIEdgeInsets cellInset;
	UIEdgeInsets cellInsetAlt;
	UIEdgeInsets cellMargin;
} TVCellMetrics;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct {
	BOOL respondsToBackroundImageProxy;
	BOOL respondsToBackgroundImageRequiresBlur;
	BOOL respondsToBackdropNeeded;
	BOOL respondsToImageProxySize;
	BOOL respondsToBlurEffectStyle;
	BOOL respondsToPurgeBgImages;
	BOOL respondsToConfigureBgImageBackdropImage;
} SCD_Struct_TV16;

typedef struct __SecTask* SecTaskRef;
