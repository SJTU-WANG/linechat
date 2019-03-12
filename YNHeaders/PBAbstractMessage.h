//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessage.h"

@class NSString;

@interface PBAbstractMessage : NSObject <PBMessage>
{
}

- (id)builder;
- (id)data;
- (id)defaultInstance;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (id)init;
- (_Bool)isInitialized;
- (int)serializedSize;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
- (id)unknownFields;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
