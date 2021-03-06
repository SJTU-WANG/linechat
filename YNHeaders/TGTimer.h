//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface TGTimer : NSObject
{
    _Bool _repeat;
    double _timeoutDate;
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)dealloc;
- (void)fireAndInvalidate;
- (id)initWithTimeout:(double)arg1 repeat:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)invalidate;
- (_Bool)isScheduled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (double)remainingTime;
@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
- (void)resetTimeout:(double)arg1;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)start;

@end

