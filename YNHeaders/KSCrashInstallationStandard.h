//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSCrashInstallation.h"

@class NSURL;

@interface KSCrashInstallationStandard : KSCrashInstallation
{
    NSURL *_url;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)sink;

@end

