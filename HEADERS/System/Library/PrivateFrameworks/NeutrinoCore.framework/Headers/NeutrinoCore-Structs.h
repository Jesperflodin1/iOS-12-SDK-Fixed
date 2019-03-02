/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_NU1;

typedef struct {
	SCD_Struct_NU1 field1;
	SCD_Struct_NU1 field2;
} SCD_Struct_NU2;

typedef struct _NSZone* NSZoneRef;

typedef struct CC_MD5state_st {
	unsigned A;
	unsigned B;
	unsigned C;
	unsigned D;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	int num;
} CC_MD5state_st;

typedef struct {
	long long width;
	long long height;
} SCD_Struct_NU5;

typedef struct {
	SCD_Struct_NU5 origin;
	SCD_Struct_NU5 size;
} SCD_Struct_NU6;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_NU7;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	double min;
	double max;
} SCD_Struct_NU9;

typedef struct {
	float r;
	float g;
	float b;
	float a;
} SCD_Struct_NU10;

typedef struct {
	SCD_Struct_NU10 r;
	SCD_Struct_NU10 g;
	SCD_Struct_NU10 b;
	SCD_Struct_NU10 a;
} SCD_Struct_NU11;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	SCD_Struct_NU7 start;
	SCD_Struct_NU7 duration;
} SCD_Struct_NU13;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > >;

typedef struct map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > {
	tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > __tree_;
} map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > >;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_NU19;

typedef const struct CGImageMetadata* CGImageMetadataRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct OpaqueJSClass* OpaqueJSClassRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	double sum;
	double min;
	double max;
	double mean;
	double geomean;
	double median;
	double variance;
	double stddev;
	double stderr;
	double ci95;
	double cv;
	double mad;
} SCD_Struct_NU24;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct DataSet {
	vector<double, std::__1::allocator<double> > _values;
} DataSet;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_NU28;

typedef struct _compressed_pair<NU::Histogram<long, double> *, std::__1::default_delete<NU::Histogram<long, double> > > {
	Histogram<long, double> __value_;
} compressed_pair<NU::Histogram<long, double> *, std::__1::default_delete<NU::Histogram<long, double> > >;

typedef struct unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > > {
	compressed_pair<NU::Histogram<long, double> *, std::__1::default_delete<NU::Histogram<long, double> > > __ptr_;
} unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > >;

typedef struct CGColor* CGColorRef;

typedef struct {
	float x;
	float y;
} SCD_Struct_NU32;

typedef struct {
	float a;
	float b;
	float _unused1;
	float c;
	float d;
	float _unused2;
	float tx;
	float ty;
	float _unused3;
} SCD_Struct_NU33;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_NU34;

typedef union {
	int intValue;
	float floatValue;
	SCD_Struct_NU32 vec2Value;
	SCD_Struct_NU10 vec4Value;
	SCD_Struct_NU33 mat3Value;
	SCD_Struct_NU34 mat4Value;
} SCD_Union_NU35;

typedef struct CGImage* CGImageRef;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;
