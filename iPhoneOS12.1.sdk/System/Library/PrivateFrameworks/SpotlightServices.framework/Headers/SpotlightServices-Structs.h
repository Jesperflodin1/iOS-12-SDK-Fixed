/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct local_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	__CFDictionary mapping;
	unsigned long long numPRSRankingBundleFeatures;
	unsigned long long PRSRankingBundleFeatureOrder;
	float score_vector;
	unsigned long long mapSize;
} local_resultset_id_values_mapping;

typedef struct parsec_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	unsigned long long numFeatures;
	__CFDictionary mapping;
	float score_vector;
	unsigned long long mapSize;
} parsec_resultset_id_values_mapping;

typedef struct json_writer* json_writerRef;

typedef struct _MDPlistContainer* MDPlistContainerRef;

typedef struct {
	unsigned embeddedReference;
	unsigned char type;
} SCD_Struct_SS5;

typedef struct {
	char* containerBytes;
	SCD_Struct_SS5 reference;
} SCD_Struct_SS6;

typedef struct {
	char* field1;
	SCD_Struct_SS5 field2;
} SCD_Struct_SS7;

typedef struct ranking_index_score_t {
	unsigned long long lsb;
	unsigned long long msb;
} ranking_index_score_t;

typedef struct PRSL2FeatureScoreSmallCache {
	unsigned short features[32];
	float scores[32];
	unsigned short count;
} PRSL2FeatureScoreSmallCache;

typedef struct __CFSet* CFSetRef;

