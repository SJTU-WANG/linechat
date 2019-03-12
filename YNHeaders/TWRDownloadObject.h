//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURLSessionDownloadTask;

@interface TWRDownloadObject : NSObject
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _remainingTimeBlock;
    NSURLSessionDownloadTask *_downloadTask;
    NSString *_fileName;
    NSString *_directoryName;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *directoryName; // @synthesize directoryName=_directoryName;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)initWithDownloadTask:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 remainingTime:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType remainingTimeBlock; // @synthesize remainingTimeBlock=_remainingTimeBlock;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

@end

