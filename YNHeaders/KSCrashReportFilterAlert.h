//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSCrashReportFilter.h"

@class NSString;

@interface KSCrashReportFilterAlert : NSObject <KSCrashReportFilter>
{
    NSString *_title;
    NSString *_message;
    NSString *_yesAnswer;
    NSString *_noAnswer;
}

+ (id)filterWithTitle:(id)arg1 message:(id)arg2 yesAnswer:(id)arg3 noAnswer:(id)arg4;
- (void).cxx_destruct;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 yesAnswer:(id)arg3 noAnswer:(id)arg4;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *noAnswer; // @synthesize noAnswer=_noAnswer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *yesAnswer; // @synthesize yesAnswer=_yesAnswer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

