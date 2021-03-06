//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MessageMedia : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasThumbUrl_:1;
    unsigned int hasUrl_:1;
    unsigned int hasName_:1;
    unsigned int hasMediaId_:1;
    unsigned int hasExtension_:1;
    unsigned int hasMimeType_:1;
    unsigned int hasPlayLength_:1;
    unsigned int hasSize_:1;
    NSString *thumbUrl;
    NSString *url;
    NSString *name;
    NSString *mediaId;
    NSString *extension;
    NSString *mimeType;
    unsigned int playLength;
    unsigned int size;
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
@property(retain) NSString *extension; // @synthesize extension;
- (_Bool)hasExtension;
- (_Bool)hasMediaId;
- (_Bool)hasMimeType;
- (_Bool)hasName;
- (_Bool)hasPlayLength;
- (_Bool)hasSize;
- (_Bool)hasThumbUrl;
- (_Bool)hasUrl;
@property(readonly) unsigned long long hash;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInitialized;
@property(retain) NSString *mediaId; // @synthesize mediaId;
@property(retain) NSString *mimeType; // @synthesize mimeType;
@property(retain) NSString *name; // @synthesize name;
@property unsigned int playLength; // @synthesize playLength;
- (int)serializedSize;
- (void)setHasExtension:(_Bool)arg1;
- (void)setHasMediaId:(_Bool)arg1;
- (void)setHasMimeType:(_Bool)arg1;
- (void)setHasName:(_Bool)arg1;
- (void)setHasPlayLength:(_Bool)arg1;
- (void)setHasSize:(_Bool)arg1;
- (void)setHasThumbUrl:(_Bool)arg1;
- (void)setHasUrl:(_Bool)arg1;
@property unsigned int size; // @synthesize size;
@property(retain) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain) NSString *url; // @synthesize url;
- (void)storeInDictionary:(id)arg1;
- (id)toBuilder;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (void)writeToCodedOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

