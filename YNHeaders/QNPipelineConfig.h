//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QNPipelineConfig : NSObject
{
    unsigned int _timeoutInterval;
    NSString *_host;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)init;
- (id)initWithHost:(id)arg1;
@property unsigned int timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;

@end

