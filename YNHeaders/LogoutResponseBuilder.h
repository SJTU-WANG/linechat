//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class LogoutResponse;

@interface LogoutResponseBuilder : PBGeneratedMessageBuilder
{
    LogoutResponse *resultLogoutResponse;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearCode;
- (id)clearMid;
- (id)clone;
- (id)code;
- (id)defaultInstance;
- (_Bool)hasCode;
- (_Bool)hasMid;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mid;
@property(retain) LogoutResponse *resultLogoutResponse; // @synthesize resultLogoutResponse;
- (id)setCode:(id)arg1;
- (id)setMid:(id)arg1;

@end

