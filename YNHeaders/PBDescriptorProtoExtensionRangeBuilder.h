//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBDescriptorProtoExtensionRange;

@interface PBDescriptorProtoExtensionRangeBuilder : PBGeneratedMessageBuilder
{
    PBDescriptorProtoExtensionRange *resultExtensionRange;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearEnd;
- (id)clearStart;
- (id)clone;
- (id)defaultInstance;
- (int)end;
- (_Bool)hasEnd;
- (_Bool)hasStart;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
@property(retain) PBDescriptorProtoExtensionRange *resultExtensionRange; // @synthesize resultExtensionRange;
- (id)setEnd:(int)arg1;
- (id)setStart:(int)arg1;
- (int)start;

@end
