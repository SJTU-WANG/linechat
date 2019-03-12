//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessageBuilder.h"

@class PBFileOptions;

@interface PBFileOptionsBuilder : PBExtendableMessageBuilder
{
    PBFileOptions *resultFileOptions;
}

- (void).cxx_destruct;
- (id)addUninterpretedOption:(id)arg1;
- (id)build;
- (id)buildPartial;
- (_Bool)ccGenericServices;
- (id)clear;
- (id)clearCcGenericServices;
- (id)clearDeprecated;
- (id)clearGoPackage;
- (id)clearJavaGenerateEqualsAndHash;
- (id)clearJavaGenericServices;
- (id)clearJavaMultipleFiles;
- (id)clearJavaOuterClassname;
- (id)clearJavaPackage;
- (id)clearJavaStringCheckUtf8;
- (id)clearOptimizeFor;
- (id)clearPyGenericServices;
- (id)clearUninterpretedOption;
- (id)clone;
- (id)defaultInstance;
- (_Bool)deprecated;
- (id)goPackage;
- (_Bool)hasCcGenericServices;
- (_Bool)hasDeprecated;
- (_Bool)hasGoPackage;
- (_Bool)hasJavaGenerateEqualsAndHash;
- (_Bool)hasJavaGenericServices;
- (_Bool)hasJavaMultipleFiles;
- (_Bool)hasJavaOuterClassname;
- (_Bool)hasJavaPackage;
- (_Bool)hasJavaStringCheckUtf8;
- (_Bool)hasOptimizeFor;
- (_Bool)hasPyGenericServices;
- (id)init;
- (id)internalGetResult;
- (_Bool)javaGenerateEqualsAndHash;
- (_Bool)javaGenericServices;
- (_Bool)javaMultipleFiles;
- (id)javaOuterClassname;
- (id)javaPackage;
- (_Bool)javaStringCheckUtf8;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)optimizeFor;
- (_Bool)pyGenericServices;
@property(retain) PBFileOptions *resultFileOptions; // @synthesize resultFileOptions;
- (id)setCcGenericServices:(_Bool)arg1;
- (id)setDeprecated:(_Bool)arg1;
- (id)setGoPackage:(id)arg1;
- (id)setJavaGenerateEqualsAndHash:(_Bool)arg1;
- (id)setJavaGenericServices:(_Bool)arg1;
- (id)setJavaMultipleFiles:(_Bool)arg1;
- (id)setJavaOuterClassname:(id)arg1;
- (id)setJavaPackage:(id)arg1;
- (id)setJavaStringCheckUtf8:(_Bool)arg1;
- (id)setOptimizeFor:(int)arg1;
- (id)setPyGenericServices:(_Bool)arg1;
- (id)setUninterpretedOptionArray:(id)arg1;
- (id)uninterpretedOption;
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;

@end
