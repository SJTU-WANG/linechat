//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class AuthResponse;

@interface AuthResponseBuilder : PBGeneratedMessageBuilder
{
    AuthResponse *resultAuthResponse;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearCode;
- (id)clearMid;
- (id)clearMsg;
- (id)clearSessionId;
- (id)clearTimestamp;
- (id)clone;
- (id)code;
- (id)defaultInstance;
- (_Bool)hasCode;
- (_Bool)hasMid;
- (_Bool)hasMsg;
- (_Bool)hasSessionId;
- (_Bool)hasTimestamp;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mid;
- (id)msg;
@property(retain) AuthResponse *resultAuthResponse; // @synthesize resultAuthResponse;
- (id)sessionId;
- (id)setCode:(id)arg1;
- (id)setMid:(id)arg1;
- (id)setMsg:(id)arg1;
- (id)setSessionId:(id)arg1;
- (id)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end

