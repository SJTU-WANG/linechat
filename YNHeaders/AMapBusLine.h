//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapBusStop, AMapGeoPoint, AMapGeoPolygon, NSArray, NSString;

@interface AMapBusLine : AMapSearchObject
{
    NSString *_uid;
    NSString *_type;
    NSString *_name;
    NSString *_polyline;
    NSString *_citycode;
    NSString *_startStop;
    NSString *_endStop;
    AMapGeoPoint *_location;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_company;
    double _distance;
    double _basicPrice;
    double _totalPrice;
    AMapGeoPolygon *_bounds;
    NSArray *_busStops;
    AMapBusStop *_departureStop;
    AMapBusStop *_arrivalStop;
    NSArray *_viaBusStops;
    long long _duration;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
@property(retain, nonatomic) AMapBusStop *arrivalStop; // @synthesize arrivalStop=_arrivalStop;
@property(nonatomic) double basicPrice; // @synthesize basicPrice=_basicPrice;
@property(copy, nonatomic) AMapGeoPolygon *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSArray *busStops; // @synthesize busStops=_busStops;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) AMapBusStop *departureStop; // @synthesize departureStop=_departureStop;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *endStop; // @synthesize endStop=_endStop;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
- (id)init;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *polyline; // @synthesize polyline=_polyline;
@property(copy, nonatomic) NSString *startStop; // @synthesize startStop=_startStop;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double totalPrice; // @synthesize totalPrice=_totalPrice;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSArray *viaBusStops; // @synthesize viaBusStops=_viaBusStops;

@end

