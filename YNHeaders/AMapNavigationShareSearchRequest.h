//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapShareSearchBaseRequest.h"

@class AMapGeoPoint;

@interface AMapNavigationShareSearchRequest : AMapShareSearchBaseRequest
{
    long long _strategy;
    AMapGeoPoint *_startCoordinate;
    AMapGeoPoint *_destinationCoordinate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) AMapGeoPoint *destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
- (id)init;
@property(copy, nonatomic) AMapGeoPoint *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
- (id)transferAddress;

@end
