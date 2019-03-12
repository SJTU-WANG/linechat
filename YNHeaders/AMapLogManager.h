//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AMapLogManager : NSObject
{
    NSObject<OS_dispatch_queue> *_logOutputQueue;
    NSMutableDictionary *_colorsMapping;
    _Bool _colorsEnabled;
    unsigned long long _enabledLogType;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)colorStringForLogType:(unsigned long long)arg1;
@property(nonatomic) _Bool colorsEnabled; // @synthesize colorsEnabled=_colorsEnabled;
- (_Bool)enableForLogType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long enabledLogType; // @synthesize enabledLogType=_enabledLogType;
- (id)init;
- (void)log:(id)arg1 logType:(unsigned long long)arg2 file:(const char *)arg3 line:(int)arg4 function:(const char *)arg5 format:(id)arg6;
- (void)setColor:(id)arg1 forType:(unsigned long long)arg2;
- (id)titleForLogType:(unsigned long long)arg1;

@end

