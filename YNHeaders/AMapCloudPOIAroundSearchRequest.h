//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapCloudSearchBaseRequest.h"

@class AMapGeoPoint, NSString;

@interface AMapCloudPOIAroundSearchRequest : AMapCloudSearchBaseRequest
{
    AMapGeoPoint *_center;
    long long _radius;
    NSString *_keywords;
}

- (void).cxx_destruct;
@property(copy, nonatomic) AMapGeoPoint *center; // @synthesize center=_center;
- (id)description;
- (id)init;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) long long radius; // @synthesize radius=_radius;

@end

