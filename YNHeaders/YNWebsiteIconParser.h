//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSMutableData, NSString, NSURLSessionDataTask;

@interface YNWebsiteIconParser : NSObject <NSURLSessionDelegate>
{
    NSMutableData *_responseData;
    NSURLSessionDataTask *_dataTask;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (void)dealloc;
- (_Bool)isResponseValid:(id)arg1;
- (id)parserIconUrlFromHTML:(id)arg1 url:(id)arg2;
- (void)parserIconUrlFromHTML:(id)arg1 url:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)parserIconUrlFromWebsite:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

