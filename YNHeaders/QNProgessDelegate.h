//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSString, NSURLSessionUploadTask;

@interface QNProgessDelegate : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _progressBlock;
    NSURLSessionUploadTask *_task;
    CDUnknownBlockType _cancelBlock;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (id)initWithProgress:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSURLSessionUploadTask *task; // @synthesize task=_task;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

