//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBEnumValueDescriptorProto;

@interface PBEnumValueDescriptorProtoBuilder : PBGeneratedMessageBuilder
{
    PBEnumValueDescriptorProto *resultEnumValueDescriptorProto;
}

- (void).cxx_destruct;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearName;
- (id)clearNumber;
- (id)clearOptions;
- (id)clone;
- (id)defaultInstance;
- (_Bool)hasName;
- (_Bool)hasNumber;
- (_Bool)hasOptions;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeOptions:(id)arg1;
- (id)name;
- (int)number;
- (id)options;
@property(retain) PBEnumValueDescriptorProto *resultEnumValueDescriptorProto; // @synthesize resultEnumValueDescriptorProto;
- (id)setName:(id)arg1;
- (id)setNumber:(int)arg1;
- (id)setOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;

@end
