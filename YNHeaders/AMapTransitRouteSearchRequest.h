//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRouteSearchBaseRequest.h"

@class NSString;

@interface AMapTransitRouteSearchRequest : AMapRouteSearchBaseRequest
{
    _Bool _nightflag;
    _Bool _requireExtension;
    long long _strategy;
    NSString *_city;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (id)init;
@property(nonatomic) _Bool nightflag; // @synthesize nightflag=_nightflag;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;

@end

