//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OCObserverMockObject : NSObject
{
    _Bool expectationOrderMatters;
    NSMutableArray *recorders;
    NSMutableArray *centers;
}

- (void)autoRemoveFromCenter:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)expect;
- (void)handleNotification:(id)arg1;
- (id)init;
- (id)notificationWithName:(id)arg1 object:(id)arg2;
- (id)retain;
- (void)setExpectationOrderMatters:(_Bool)arg1;
- (void)verify;
- (void)verifyAtLocation:(id)arg1;

@end
