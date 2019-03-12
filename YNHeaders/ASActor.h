//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString;

@interface ASActor : NSObject
{
    _Bool _requiresAuthorization;
    _Bool _cancelled;
    NSString *_path;
    NSString *_requestQueueName;
    NSDictionary *_storedOptions;
    double _cancelTimeout;
    id _cancelToken;
    NSMutableArray *_multipleCancelTokens;
}

+ (id)genericPath;
+ (void)registerActorClass:(Class)arg1;
+ (id)requestBuilderForGenericPath:(id)arg1 path:(id)arg2;
- (void).cxx_destruct;
- (void)addCancelToken:(id)arg1;
- (void)cancel;
@property(nonatomic) double cancelTimeout; // @synthesize cancelTimeout=_cancelTimeout;
@property(retain, nonatomic) id cancelToken; // @synthesize cancelToken=_cancelToken;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)dealloc;
- (void)execute:(id)arg1;
- (void)handleRequestProblem;
- (id)initWithPath:(id)arg1;
@property(retain, nonatomic) NSMutableArray *multipleCancelTokens; // @synthesize multipleCancelTokens=_multipleCancelTokens;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)prepare:(id)arg1;
@property(retain, nonatomic) NSString *requestQueueName; // @synthesize requestQueueName=_requestQueueName;
@property(nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(retain, nonatomic) NSDictionary *storedOptions; // @synthesize storedOptions=_storedOptions;
- (void)watcherJoined:(id)arg1 options:(id)arg2 waitingInActorQueue:(_Bool)arg3;

@end
