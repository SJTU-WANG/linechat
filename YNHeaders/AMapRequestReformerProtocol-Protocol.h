//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURL;

@protocol AMapRequestReformerProtocol <NSObject>
- (NSDictionary *)HTTPHeaders;
- (NSString *)method;
- (NSData *)postData;
- (long long)timeout;
- (NSURL *)url;
@end

