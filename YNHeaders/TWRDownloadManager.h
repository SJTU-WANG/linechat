//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSMutableDictionary, NSString, NSURLSession;

@interface TWRDownloadManager : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _backgroundTransferCompletionHandler;
    NSURLSession *_session;
    NSURLSession *_backgroundSession;
    NSMutableDictionary *_downloads;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(copy, nonatomic) CDUnknownBlockType backgroundTransferCompletionHandler; // @synthesize backgroundTransferCompletionHandler=_backgroundTransferCompletionHandler;
- (id)cachesDirectoryUrlPath;
- (void)cancelAllDownloads;
- (void)cancelDownloadForUrl:(id)arg1;
- (void)cleanTmpDirectory;
- (id)currentDownloads;
- (_Bool)deleteFileForUrl:(id)arg1;
- (_Bool)deleteFileForUrl:(id)arg1 inDirectory:(id)arg2;
- (_Bool)deleteFileWithName:(id)arg1;
- (_Bool)deleteFileWithName:(id)arg1 inDirectory:(id)arg2;
- (void)downloadFileForURL:(id)arg1 inDirectoryNamed:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 enableBackgroundMode:(_Bool)arg5;
- (void)downloadFileForURL:(id)arg1 inDirectoryNamed:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 remainingTime:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5 enableBackgroundMode:(_Bool)arg6;
- (void)downloadFileForURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 enableBackgroundMode:(_Bool)arg4;
- (void)downloadFileForURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 remainingTime:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 enableBackgroundMode:(_Bool)arg5;
- (void)downloadFileForURL:(id)arg1 withName:(id)arg2 inDirectoryNamed:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5 enableBackgroundMode:(_Bool)arg6;
- (void)downloadFileForURL:(id)arg1 withName:(id)arg2 inDirectoryNamed:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 remainingTime:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 enableBackgroundMode:(_Bool)arg7;
@property(retain, nonatomic) NSMutableDictionary *downloads; // @synthesize downloads=_downloads;
- (_Bool)fileDownloadCompletedForUrl:(id)arg1;
- (_Bool)fileExistsForUrl:(id)arg1;
- (_Bool)fileExistsForUrl:(id)arg1 inDirectory:(id)arg2;
- (_Bool)fileExistsWithName:(id)arg1;
- (_Bool)fileExistsWithName:(id)arg1 inDirectory:(id)arg2;
- (id)init;
- (_Bool)isFileDownloadingForUrl:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (_Bool)isFileDownloadingForUrl:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)localPathForFile:(id)arg1;
- (id)localPathForFile:(id)arg1 inDirectory:(id)arg2;
- (id)mySessionIdentifier;
- (double)remainingTimeForDownload:(id)arg1 bytesTransferred:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

