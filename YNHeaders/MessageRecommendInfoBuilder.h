//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class MessageRecommendInfo;

@interface MessageRecommendInfoBuilder : PBGeneratedMessageBuilder
{
    MessageRecommendInfo *resultRecommendInfo;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clone;
- (id)defaultInstance;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
@property(retain) MessageRecommendInfo *resultRecommendInfo; // @synthesize resultRecommendInfo;

@end

