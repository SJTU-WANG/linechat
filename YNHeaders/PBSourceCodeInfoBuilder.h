//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBSourceCodeInfo;

@interface PBSourceCodeInfoBuilder : PBGeneratedMessageBuilder
{
    PBSourceCodeInfo *resultSourceCodeInfo;
}

- (void).cxx_destruct;
- (id)addLocation:(id)arg1;
- (id)build;
- (id)buildPartial;
- (id)clear;
- (id)clearLocation;
- (id)clone;
- (id)defaultInstance;
- (id)init;
- (id)internalGetResult;
- (id)location;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
@property(retain) PBSourceCodeInfo *resultSourceCodeInfo; // @synthesize resultSourceCodeInfo;
- (id)setLocationArray:(id)arg1;

@end

