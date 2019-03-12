//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray;

@interface AMapWalking : AMapSearchObject
{
    AMapGeoPoint *_origin;
    AMapGeoPoint *_destination;
    long long _distance;
    long long _duration;
    NSArray *_steps;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
@property(copy, nonatomic) AMapGeoPoint *destination; // @synthesize destination=_destination;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) AMapGeoPoint *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;

@end
