//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBEnumDescriptorProto;

@interface PBEnumDescriptorProtoBuilder : PBGeneratedMessageBuilder
{
    PBEnumDescriptorProto *resultEnumDescriptorProto;
}

- (void).cxx_destruct;
- (id)addValue:(id)arg1;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearName;
- (id)clearOptions;
- (id)clearValue;
- (id)clone;
- (id)defaultInstance;
- (_Bool)hasName;
- (_Bool)hasOptions;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeOptions:(id)arg1;
- (id)name;
- (id)options;
@property(retain) PBEnumDescriptorProto *resultEnumDescriptorProto; // @synthesize resultEnumDescriptorProto;
- (id)setName:(id)arg1;
- (id)setOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;
- (id)setValueArray:(id)arg1;
- (id)value;
- (id)valueAtIndex:(unsigned long long)arg1;

@end
