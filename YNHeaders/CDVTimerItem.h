//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CDVTimerItem : NSObject
{
    NSString *_name;
    NSDate *_started;
    NSDate *_ended;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *ended; // @synthesize ended=_ended;
- (void)log;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDate *started; // @synthesize started=_started;

@end

