//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface AMapNetworkManager : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)defaultManager;
+ (id)sendSynchronousRequestWithReformer:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)startOperation:(id)arg1;
- (id)startOperationWithRequestReformer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

