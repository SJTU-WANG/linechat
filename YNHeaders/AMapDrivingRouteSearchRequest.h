//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRouteSearchBaseRequest.h"

@class NSArray, NSString;

@interface AMapDrivingRouteSearchRequest : AMapRouteSearchBaseRequest
{
    _Bool _requireExtension;
    long long _strategy;
    NSArray *_waypoints;
    NSArray *_avoidpolygons;
    NSString *_avoidroad;
    NSString *_originId;
    NSString *_destinationId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *avoidpolygons; // @synthesize avoidpolygons=_avoidpolygons;
@property(copy, nonatomic) NSString *avoidroad; // @synthesize avoidroad=_avoidroad;
@property(copy, nonatomic) NSString *destinationId; // @synthesize destinationId=_destinationId;
- (id)init;
@property(copy, nonatomic) NSString *originId; // @synthesize originId=_originId;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(copy, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (id)stringFromAvoidPolygons;
- (id)stringFromWayPoints;

@end
