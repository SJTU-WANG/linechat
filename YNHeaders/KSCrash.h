//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface KSCrash : NSObject
{
    _Bool _introspectMemory;
    _Bool _catchZombies;
    _Bool _addConsoleLogToReport;
    _Bool _printPreviousLog;
    int _deleteBehaviorAfterSendAll;
    int _monitoring;
    int _demangleLanguages;
    int _maxReportCount;
    id <KSCrashReportFilter> _sink;
    NSDictionary *_userInfo;
    double _deadlockWatchdogInterval;
    CDUnknownFunctionPointerType _onCrash;
    NSString *_bundleName;
    NSString *_basePath;
    NSArray *_doNotIntrospectClasses;
    CDUnknownFunctionPointerType _uncaughtExceptionHandler;
    CDUnknownFunctionPointerType _currentSnapshotUserReportedExceptionHandler;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) double activeDurationSinceLastCrash;
@property(readonly, nonatomic) double activeDurationSinceLaunch;
@property(nonatomic) _Bool addConsoleLogToReport; // @synthesize addConsoleLogToReport=_addConsoleLogToReport;
- (id)allReports;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
- (void)applicationWillTerminate;
@property(readonly, nonatomic) double backgroundDurationSinceLastCrash;
@property(readonly, nonatomic) double backgroundDurationSinceLaunch;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(nonatomic) _Bool catchZombies; // @synthesize catchZombies=_catchZombies;
@property(readonly, nonatomic) _Bool crashedLastLaunch;
@property(nonatomic) CDUnknownFunctionPointerType currentSnapshotUserReportedExceptionHandler; // @synthesize currentSnapshotUserReportedExceptionHandler=_currentSnapshotUserReportedExceptionHandler;
@property(nonatomic) double deadlockWatchdogInterval; // @synthesize deadlockWatchdogInterval=_deadlockWatchdogInterval;
- (void)deleteAllReports;
@property(nonatomic) int deleteBehaviorAfterSendAll; // @synthesize deleteBehaviorAfterSendAll=_deleteBehaviorAfterSendAll;
- (void)deleteReportWithID:(id)arg1;
@property(nonatomic) int demangleLanguages; // @synthesize demangleLanguages=_demangleLanguages;
@property(retain, nonatomic) NSArray *doNotIntrospectClasses; // @synthesize doNotIntrospectClasses=_doNotIntrospectClasses;
- (void)doctorReport:(id)arg1;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (_Bool)install;
@property(nonatomic) _Bool introspectMemory; // @synthesize introspectMemory=_introspectMemory;
@property(readonly, nonatomic) int launchesSinceLastCrash;
- (id)loadCrashReportJSONWithID:(long long)arg1;
@property(nonatomic) int maxReportCount; // @synthesize maxReportCount=_maxReportCount;
@property(nonatomic) int monitoring; // @synthesize monitoring=_monitoring;
- (id)nullTerminated:(id)arg1;
@property(nonatomic) CDUnknownFunctionPointerType onCrash; // @synthesize onCrash=_onCrash;
@property(nonatomic) _Bool printPreviousLog; // @synthesize printPreviousLog=_printPreviousLog;
@property(readonly, nonatomic) int reportCount;
- (id)reportIDs;
- (void)reportUserException:(id)arg1 reason:(id)arg2 language:(id)arg3 lineOfCode:(id)arg4 stackTrace:(id)arg5 logAllThreads:(_Bool)arg6 terminateProgram:(_Bool)arg7;
- (id)reportWithID:(id)arg1;
- (id)reportWithIntID:(long long)arg1;
- (void)sendAllReportsWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int sessionsSinceLastCrash;
@property(readonly, nonatomic) int sessionsSinceLaunch;
@property(retain, nonatomic) id <KSCrashReportFilter> sink; // @synthesize sink=_sink;
@property(nonatomic) CDUnknownFunctionPointerType uncaughtExceptionHandler; // @synthesize uncaughtExceptionHandler=_uncaughtExceptionHandler;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSDictionary *systemInfo;

@end

