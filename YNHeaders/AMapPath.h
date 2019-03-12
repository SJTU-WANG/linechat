//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapPath : AMapSearchObject
{
    long long _distance;
    long long _duration;
    NSString *_strategy;
    NSArray *_steps;
    double _tolls;
    long long _tollDistance;
    long long _totalTrafficLights;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (id)init;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(copy, nonatomic) NSString *strategy; // @synthesize strategy=_strategy;
@property(nonatomic) long long tollDistance; // @synthesize tollDistance=_tollDistance;
@property(nonatomic) double tolls; // @synthesize tolls=_tolls;
@property(nonatomic) long long totalTrafficLights; // @synthesize totalTrafficLights=_totalTrafficLights;

@end

