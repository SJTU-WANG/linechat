//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBDescriptorProto;

@interface PBDescriptorProtoBuilder : PBGeneratedMessageBuilder
{
    PBDescriptorProto *resultDescriptorProto;
}

- (void).cxx_destruct;
- (id)addEnumType:(id)arg1;
- (id)addExtension:(id)arg1;
- (id)addExtensionRange:(id)arg1;
- (id)addField:(id)arg1;
- (id)addNestedType:(id)arg1;
- (id)addOneofDecl:(id)arg1;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearEnumType;
- (id)clearExtension;
- (id)clearExtensionRange;
- (id)clearField;
- (id)clearName;
- (id)clearNestedType;
- (id)clearOneofDecl;
- (id)clearOptions;
- (id)clone;
- (id)defaultInstance;
- (id)enumType;
- (id)enumTypeAtIndex:(unsigned long long)arg1;
- (id)extension;
- (id)extensionAtIndex:(unsigned long long)arg1;
- (id)extensionRange;
- (id)extensionRangeAtIndex:(unsigned long long)arg1;
- (id)field;
- (id)fieldAtIndex:(unsigned long long)arg1;
- (_Bool)hasName;
- (_Bool)hasOptions;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeOptions:(id)arg1;
- (id)name;
- (id)nestedType;
- (id)nestedTypeAtIndex:(unsigned long long)arg1;
- (id)oneofDecl;
- (id)oneofDeclAtIndex:(unsigned long long)arg1;
- (id)options;
@property(retain) PBDescriptorProto *resultDescriptorProto; // @synthesize resultDescriptorProto;
- (id)setEnumTypeArray:(id)arg1;
- (id)setExtensionArray:(id)arg1;
- (id)setExtensionRangeArray:(id)arg1;
- (id)setFieldArray:(id)arg1;
- (id)setName:(id)arg1;
- (id)setNestedTypeArray:(id)arg1;
- (id)setOneofDeclArray:(id)arg1;
- (id)setOptions:(id)arg1;
- (id)setOptionsBuilder:(id)arg1;

@end
