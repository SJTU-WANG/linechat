//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YNMomentFeed, YNMomentManager;

@protocol YNMomentManagerDelegate <NSObject>

@optional
- (void)feedDidCompletePostPrepare:(YNMomentFeed *)arg1;
- (void)feedDidSendFailed:(YNMomentFeed *)arg1;
- (void)feedDidSendSuccess:(YNMomentFeed *)arg1;
- (void)feedDidStartResend:(YNMomentFeed *)arg1;
- (void)managerDidBeginDownloadResourceFromCloud:(YNMomentManager *)arg1;
- (void)managerDidDownloadResourceFromCloudFailed:(YNMomentManager *)arg1;
- (void)notifyLikeCommentModify:(NSString *)arg1;
- (void)notifyLocalFailedFeedCountChanged;
- (void)notifyNewFeedArrived;
@end
