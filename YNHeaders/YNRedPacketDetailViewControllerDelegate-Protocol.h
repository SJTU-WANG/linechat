//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNOpenRedPacketResult, YNRedPacketDetailViewController, YNRedPacketDetailViewModel;

@protocol YNRedPacketDetailViewControllerDelegate <NSObject>
- (void)redPacketCardViewDetailButtonClicked:(YNRedPacketDetailViewController *)arg1 withDetailModel:(YNRedPacketDetailViewModel *)arg2;
- (void)redPacketCardViewOpenButtonClicked:(YNRedPacketDetailViewController *)arg1 withResult:(YNOpenRedPacketResult *)arg2;
@end

