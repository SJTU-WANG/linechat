//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRESTRequestReformer.h"

@class AMapAuthData, NSString;

@interface AMapPostDataRequestReformer : AMapRESTRequestReformer
{
    NSString *_key;
    AMapAuthData *_authData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMapAuthData *authData; // @synthesize authData=_authData;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)method;
- (id)parameters;
- (id)postData;
- (id)url;

@end

