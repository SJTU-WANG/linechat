//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OCMInvocationMatcher.h"

@class NSMutableArray;

@interface OCMInvocationStub : OCMInvocationMatcher
{
    NSMutableArray *invocationActions;
}

- (void)addInvocationAction:(id)arg1;
- (void)dealloc;
- (void)handleInvocation:(id)arg1;
- (id)init;
- (id)invocationActions;

@end
