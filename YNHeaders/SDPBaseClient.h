//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDPBaseClient : NSObject
{
}

+ (void)requestWIFILoginPathWithURLString:(id)arg1 parameters:(id)arg2 showErrorMsg:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)requestWIFILoginPathWithURLString:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)requestWIFILoginPathWithURLString:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 errorRetry:(long long)arg5;
+ (id)sharedManager;

@end
