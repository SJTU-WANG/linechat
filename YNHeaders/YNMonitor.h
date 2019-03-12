//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSThread;

@interface YNMonitor : NSObject
{
    struct __CFRunLoopObserver *_observer;
    _Bool _hasStartMainThread;
    NSThread *_loopMonitorThread;
    unsigned long long _smallLagOccurTimes;
    unsigned long long _lastCheckingTime;
    unsigned long long _lagRecoredCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _currentRunloopState;
}

- (void).cxx_destruct;
- (void)checkAndUpdateRecordLimit;
- (_Bool)checkMaxRecordsLimit;
- (void)checkRunLoopMonitorThread;
@property(nonatomic) unsigned long long currentRunloopState; // @synthesize currentRunloopState=_currentRunloopState;
- (id)init;
- (void)recordLogForLagOccurs:(id)arg1;
- (void)registerObserver;
- (void)runloopMonitorMain;
- (void)startMonitorMainThread;
- (void)startMonitoring;
- (void)stopMonitorMainThread;
- (void)stopMonitoring;
- (void)unregisterObserver;

@end

