//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YNMomentFeedCursor : NSObject
{
    NSString *_uid;
    long long _maxId;
    long long _minId;
    long long _maxTimestamp;
    long long _minTimestamp;
    long long _maxVersion;
    long long _minVersion;
    long long _latestTimestamp;
    long long _latestVersion;
    long long _earlierVersion;
}

- (void).cxx_destruct;
@property long long earlierVersion; // @synthesize earlierVersion=_earlierVersion;
@property long long latestTimestamp; // @synthesize latestTimestamp=_latestTimestamp;
@property long long latestVersion; // @synthesize latestVersion=_latestVersion;
@property long long maxId; // @synthesize maxId=_maxId;
@property long long maxTimestamp; // @synthesize maxTimestamp=_maxTimestamp;
@property long long maxVersion; // @synthesize maxVersion=_maxVersion;
@property long long minId; // @synthesize minId=_minId;
@property long long minTimestamp; // @synthesize minTimestamp=_minTimestamp;
@property long long minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end

