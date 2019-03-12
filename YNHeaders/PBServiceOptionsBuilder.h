//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessageBuilder.h"

@class PBServiceOptions;

@interface PBServiceOptionsBuilder : PBExtendableMessageBuilder
{
    PBServiceOptions *resultServiceOptions;
}

- (void).cxx_destruct;
- (id)addUninterpretedOption:(id)arg1;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearDeprecated;
- (id)clearUninterpretedOption;
- (id)clone;
- (id)defaultInstance;
- (_Bool)deprecated;
- (_Bool)hasDeprecated;
- (id)init;
- (id)internalGetResult;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
@property(retain) PBServiceOptions *resultServiceOptions; // @synthesize resultServiceOptions;
- (id)setDeprecated:(_Bool)arg1;
- (id)setUninterpretedOptionArray:(id)arg1;
- (id)uninterpretedOption;
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;

@end

