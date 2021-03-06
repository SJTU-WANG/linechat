//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class Message;

@interface MessageBuilder : PBGeneratedMessageBuilder
{
    Message *resultMessage;
}

- (void).cxx_destruct;
- (id)body;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearBody;
- (id)clearCreateTime;
- (id)clearExType;
- (id)clearExtension;
- (id)clearFlag;
- (id)clearFrom;
- (id)clearMedia;
- (id)clearMid;
- (id)clearRecommendInfo;
- (id)clearStatus;
- (id)clearStatusNotify;
- (id)clearSubType;
- (id)clearSyncKey;
- (id)clearTo;
- (id)clearType;
- (id)clearVersion;
- (id)clone;
- (unsigned long long)createTime;
- (id)defaultInstance;
- (unsigned int)exType;
- (id)extension;
- (unsigned int)flag;
- (id)from;
- (_Bool)hasBody;
- (_Bool)hasCreateTime;
- (_Bool)hasExType;
- (_Bool)hasExtension;
- (_Bool)hasFlag;
- (_Bool)hasFrom;
- (_Bool)hasMedia;
- (_Bool)hasMid;
- (_Bool)hasRecommendInfo;
- (_Bool)hasStatus;
- (_Bool)hasStatusNotify;
- (_Bool)hasSubType;
- (_Bool)hasSyncKey;
- (_Bool)hasTo;
- (_Bool)hasType;
- (_Bool)hasVersion;
- (id)init;
- (id)internalGetResult;
- (id)media;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeMedia:(id)arg1;
- (id)mergeRecommendInfo:(id)arg1;
- (id)mergeStatusNotify:(id)arg1;
- (id)mid;
- (id)recommendInfo;
@property(retain) Message *resultMessage; // @synthesize resultMessage;
- (id)setBody:(id)arg1;
- (id)setCreateTime:(unsigned long long)arg1;
- (id)setExType:(unsigned int)arg1;
- (id)setExtension:(id)arg1;
- (id)setFlag:(unsigned int)arg1;
- (id)setFrom:(id)arg1;
- (id)setMedia:(id)arg1;
- (id)setMediaBuilder:(id)arg1;
- (id)setMid:(id)arg1;
- (id)setRecommendInfo:(id)arg1;
- (id)setRecommendInfoBuilder:(id)arg1;
- (id)setStatus:(unsigned int)arg1;
- (id)setStatusNotify:(id)arg1;
- (id)setStatusNotifyBuilder:(id)arg1;
- (id)setSubType:(unsigned int)arg1;
- (id)setSyncKey:(id)arg1;
- (id)setTo:(id)arg1;
- (id)setType:(unsigned int)arg1;
- (id)setVersion:(unsigned long long)arg1;
- (unsigned int)status;
- (id)statusNotify;
- (unsigned int)subType;
- (id)syncKey;
- (id)to;
- (unsigned int)type;
- (unsigned long long)version;

@end

