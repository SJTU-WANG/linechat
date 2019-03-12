//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSString, NSURL;

@interface DPLDeepLink : NSObject <NSCopying, NSMutableCopying>
{
    NSURL *_URL;
    NSDictionary *_queryParameters;
    NSDictionary *_routeParameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSDictionary *appLinkData;
@property(readonly, nonatomic) NSURL *callbackURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *extras;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDeepLink:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(readonly, copy, nonatomic) NSString *referrerAppName;
@property(readonly, copy, nonatomic) NSURL *referrerTargetURL;
@property(readonly, copy, nonatomic) NSURL *referrerURL;
@property(readonly, copy, nonatomic) NSDictionary *routeParameters; // @synthesize routeParameters=_routeParameters;
- (void)setRouteParameters:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *targetURL;
@property(readonly, copy, nonatomic) NSString *userAgent;
@property(readonly, copy, nonatomic) NSString *version;

@end
