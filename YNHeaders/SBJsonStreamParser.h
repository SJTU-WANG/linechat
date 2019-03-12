//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SBJsonStreamParserState, SBJsonTokeniser;

@interface SBJsonStreamParser : NSObject
{
    _Bool supportMultipleDocuments;
    id <SBJsonStreamParserDelegate> delegate;
    SBJsonTokeniser *tokeniser;
    NSMutableArray *stateStack;
    SBJsonStreamParserState *state;
    unsigned long long maxDepth;
    NSString *error;
}

- (void)dealloc;
@property id <SBJsonStreamParserDelegate> delegate; // @synthesize delegate;
@property(copy) NSString *error; // @synthesize error;
- (void)handleArrayStart;
- (void)handleObjectStart;
- (id)init;
@property unsigned long long maxDepth; // @synthesize maxDepth;
- (void)maxDepthError;
- (int)parse:(id)arg1;
@property(nonatomic) SBJsonStreamParserState *state; // @synthesize state;
@property _Bool supportMultipleDocuments; // @synthesize supportMultipleDocuments;
@property(readonly, retain, nonatomic) NSMutableArray *stateStack; // @synthesize stateStack;
- (id)tokenName:(int)arg1;

@end
