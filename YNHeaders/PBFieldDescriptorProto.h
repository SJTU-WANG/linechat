//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, PBFieldOptions;

@interface PBFieldDescriptorProto : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasNumber_:1;
    unsigned int hasOneofIndex_:1;
    unsigned int hasName_:1;
    unsigned int hasTypeName_:1;
    unsigned int hasExtendee_:1;
    unsigned int hasDefaultValue_:1;
    unsigned int hasOptions_:1;
    unsigned int hasLabel_:1;
    unsigned int hasType_:1;
    int number;
    int oneofIndex;
    NSString *name;
    NSString *typeName;
    NSString *extendee;
    NSString *defaultValue;
    PBFieldOptions *options;
    int label;
    int type;
}

+ (id)builder;
+ (id)builderWithPrototype:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void).cxx_destruct;
- (id)builder;
- (id)defaultInstance;
@property(retain) NSString *defaultValue; // @synthesize defaultValue;
@property(retain) NSString *extendee; // @synthesize extendee;
- (_Bool)hasDefaultValue;
- (_Bool)hasExtendee;
- (_Bool)hasLabel;
- (_Bool)hasName;
- (_Bool)hasNumber;
- (_Bool)hasOneofIndex;
- (_Bool)hasOptions;
- (_Bool)hasType;
- (_Bool)hasTypeName;
@property(readonly) unsigned long long hash;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInitialized;
@property int label; // @synthesize label;
@property(retain) NSString *name; // @synthesize name;
@property int number; // @synthesize number;
@property int oneofIndex; // @synthesize oneofIndex;
@property(retain) PBFieldOptions *options; // @synthesize options;
- (int)serializedSize;
- (void)setHasDefaultValue:(_Bool)arg1;
- (void)setHasExtendee:(_Bool)arg1;
- (void)setHasLabel:(_Bool)arg1;
- (void)setHasName:(_Bool)arg1;
- (void)setHasNumber:(_Bool)arg1;
- (void)setHasOneofIndex:(_Bool)arg1;
- (void)setHasOptions:(_Bool)arg1;
- (void)setHasType:(_Bool)arg1;
- (void)setHasTypeName:(_Bool)arg1;
@property int type; // @synthesize type;
@property(retain) NSString *typeName; // @synthesize typeName;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

