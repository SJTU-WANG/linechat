//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface OCMInvocationMatcher : NSObject
{
    NSInvocation *recordedInvocation;
    _Bool recordedAsClassMethod;
    _Bool ignoreNonObjectArgs;
}

- (void)dealloc;
- (id)description;
- (_Bool)matchesInvocation:(id)arg1;
- (_Bool)matchesSelector:(SEL)arg1;
- (_Bool)recordedAsClassMethod;
- (id)recordedInvocation;
- (void)setIgnoreNonObjectArgs:(_Bool)arg1;
- (void)setInvocation:(id)arg1;
- (void)setRecordedAsClassMethod:(_Bool)arg1;

@end

