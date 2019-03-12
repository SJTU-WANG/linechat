//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PBEnumOptions : PBExtendableMessage <GeneratedMessageProtocol>
{
    unsigned int hasAllowAlias_:1;
    unsigned int hasDeprecated_:1;
    unsigned int allowAlias_:1;
    unsigned int deprecated_:1;
    NSMutableArray *uninterpretedOptionArray;
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
@property _Bool allowAlias;
- (id)builder;
- (id)defaultInstance;
@property _Bool deprecated;
- (_Bool)hasAllowAlias;
- (_Bool)hasDeprecated;
@property(readonly) unsigned long long hash;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInitialized;
- (int)serializedSize;
- (void)setHasAllowAlias:(_Bool)arg1;
- (void)setHasDeprecated:(_Bool)arg1;
@property(retain) NSMutableArray *uninterpretedOptionArray; // @synthesize uninterpretedOptionArray;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
@property(readonly) NSArray *uninterpretedOption; // @dynamic uninterpretedOption;
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

