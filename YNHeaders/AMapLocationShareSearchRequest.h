//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapShareSearchBaseRequest.h"

@class AMapGeoPoint, NSString;

@interface AMapLocationShareSearchRequest : AMapShareSearchBaseRequest
{
    AMapGeoPoint *_location;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)transferAddress;

@end

