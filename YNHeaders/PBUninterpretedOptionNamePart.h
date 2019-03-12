//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface PBUninterpretedOptionNamePart : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasIsExtension_:1;
    unsigned int hasNamePart_:1;
    unsigned int isExtension_:1;
    NSString *namePart;
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
- (_Bool)hasIsExtension;
- (_Bool)hasNamePart;
@property(readonly) unsigned long long hash;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property _Bool isExtension;
- (_Bool)isInitialized;
@property(retain) NSString *namePart; // @synthesize namePart;
- (int)serializedSize;
- (void)setHasIsExtension:(_Bool)arg1;
- (void)setHasNamePart:(_Bool)arg1;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

