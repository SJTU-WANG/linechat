//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNMomentAPI : NSObject
{
}

+ (void)deleteCommentWithFeed:(id)arg1 type:(int)arg2 replyId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)deleteFeedWithFeedId:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchFeedTimelineWithUid:(id)arg1 action:(unsigned long long)arg2 type:(unsigned long long)arg3 version:(long long)arg4 timestamp:(long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)fetchFeedWithUid:(id)arg1 feedId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getImgListWithUid:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postCommentWithType:(int)arg1 toFeed:(id)arg2 targetComment:(id)arg3 content:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)postCoverWithCoverInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postFeed:(id)arg1 requestId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

