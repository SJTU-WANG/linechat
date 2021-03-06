//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogFormatter.h"

@class DDLoggingContextSet, NSString;

@interface DDContextWhitelistFilterLogFormatter : NSObject <DDLogFormatter>
{
    DDLoggingContextSet *contextSet;
}

- (void).cxx_destruct;
- (void)addToWhitelist:(int)arg1;
- (id)formatLogMessage:(id)arg1;
- (id)init;
- (_Bool)isOnWhitelist:(int)arg1;
- (void)removeFromWhitelist:(int)arg1;
- (id)whitelist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

