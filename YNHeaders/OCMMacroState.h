//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OCMRecorder;

@interface OCMMacroState : NSObject
{
    OCMRecorder *recorder;
}

+ (void)beginExpectMacro;
+ (void)beginStubMacro;
+ (void)beginVerifyMacroAtLocation:(id)arg1;
+ (id)endExpectMacro;
+ (id)endStubMacro;
+ (void)endVerifyMacro;
+ (id)globalState;
- (void)dealloc;
- (id)initWithRecorder:(id)arg1;
- (id)recorder;
- (void)switchToClassMethod;

@end

