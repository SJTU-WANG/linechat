//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class OCMInvocationMatcher, OCMockObject;

@interface OCMRecorder : NSProxy
{
    OCMockObject *mockObject;
    OCMInvocationMatcher *invocationMatcher;
}

- (id)classMethod;
- (void)dealloc;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)ignoringNonObjectArgs;
- (id)init;
- (id)initWithMockObject:(id)arg1;
- (id)invocationMatcher;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setMockObject:(id)arg1;

@end

