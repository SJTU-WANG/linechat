//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapTip : AMapSearchObject
{
    NSString *_uid;
    NSString *_name;
    NSString *_adcode;
    NSString *_district;
    NSString *_address;
    AMapGeoPoint *_location;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
- (id)init;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end
