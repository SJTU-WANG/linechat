//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSTimer, YNLogReadWriterManager;

@interface YNLogUploadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_readWriteLogQueue;
    NSObject<OS_dispatch_queue> *_uploadLogQueue;
    NSObject<OS_dispatch_semaphore> *_uploadLogFileSemaphore;
    NSMutableDictionary *_uploadingLogDict;
    NSMutableDictionary *_writerDict;
    YNLogReadWriterManager *_userLogWriterManager;
    YNLogReadWriterManager *_backgroundLogWriterManager;
    YNLogReadWriterManager *_backgroundFailLogWriterManager;
    YNLogReadWriterManager *_crashLogWriterManager;
    YNLogReadWriterManager *_userRealTimeLogWriterManager;
    _Bool _isAppActive;
    NSTimer *_uploadLogTimer;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)checkNetworkStatusAndSendAllLogFile;
- (void)checkNetworkStatusAndSendAllLogFile:(_Bool)arg1;
- (id)getWriterManagerByCategory:(unsigned long long)arg1;
- (id)init;
- (void)networkStatusDidChange:(id)arg1;
- (void)sendAllLogInFile;
- (void)sendLogFileWithLogFilePath:(id)arg1 withCategory:(id)arg2;
- (void)sendLogToServerForLogString:(id)arg1 withCategory:(unsigned long long)arg2;
@property(retain, nonatomic) NSTimer *uploadLogTimer; // @synthesize uploadLogTimer=_uploadLogTimer;
- (void)startUploadLogTimer;
- (void)writeLogToFileForLogString:(id)arg1 withCategory:(unsigned long long)arg2;

@end
