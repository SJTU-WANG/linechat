//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray, NSDictionary, NSString;

@interface AMapCloudPOI : AMapSearchObject
{
    long long _uid;
    NSString *_name;
    AMapGeoPoint *_location;
    NSString *_address;
    NSDictionary *_customFields;
    NSString *_createTime;
    NSString *_updateTime;
    long long _distance;
    NSArray *_images;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void)ajo_ignoredSetValue:(id)arg1 forUndefinedMappingKey:(id)arg2;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSDictionary *customFields; // @synthesize customFields=_customFields;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)init;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;

@end

