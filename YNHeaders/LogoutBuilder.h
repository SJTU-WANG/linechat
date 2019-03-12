//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class Logout;

@interface LogoutBuilder : PBGeneratedMessageBuilder
{
    Logout *resultLogout;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearMid;
- (id)clearSessionId;
- (id)clone;
- (id)defaultInstance;
- (_Bool)hasMid;
- (_Bool)hasSessionId;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mid;
@property(retain) Logout *resultLogout; // @synthesize resultLogout;
- (id)sessionId;
- (id)setMid:(id)arg1;
- (id)setSessionId:(id)arg1;

@end

