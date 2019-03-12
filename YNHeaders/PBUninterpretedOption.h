//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface PBUninterpretedOption : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasDoubleValue_:1;
    unsigned int hasNegativeIntValue_:1;
    unsigned int hasPositiveIntValue_:1;
    unsigned int hasIdentifierValue_:1;
    unsigned int hasAggregateValue_:1;
    unsigned int hasStringValue_:1;
    double doubleValue;
    long long negativeIntValue;
    unsigned long long positiveIntValue;
    NSString *identifierValue;
    NSString *aggregateValue;
    NSData *stringValue;
    NSMutableArray *nameArray;
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
@property(retain) NSString *aggregateValue; // @synthesize aggregateValue;
- (id)builder;
- (id)defaultInstance;
@property double doubleValue; // @synthesize doubleValue;
- (_Bool)hasAggregateValue;
- (_Bool)hasDoubleValue;
- (_Bool)hasIdentifierValue;
- (_Bool)hasNegativeIntValue;
- (_Bool)hasPositiveIntValue;
- (_Bool)hasStringValue;
@property(readonly) unsigned long long hash;
@property(retain) NSString *identifierValue; // @synthesize identifierValue;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInitialized;
@property(readonly) NSArray *name; // @dynamic name;
@property(retain) NSMutableArray *nameArray; // @synthesize nameArray;
- (id)nameAtIndex:(unsigned long long)arg1;
@property long long negativeIntValue; // @synthesize negativeIntValue;
@property unsigned long long positiveIntValue; // @synthesize positiveIntValue;
- (int)serializedSize;
- (void)setHasAggregateValue:(_Bool)arg1;
- (void)setHasDoubleValue:(_Bool)arg1;
- (void)setHasIdentifierValue:(_Bool)arg1;
- (void)setHasNegativeIntValue:(_Bool)arg1;
- (void)setHasPositiveIntValue:(_Bool)arg1;
- (void)setHasStringValue:(_Bool)arg1;
@property(retain) NSData *stringValue; // @synthesize stringValue;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

