//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, YNChatRoom, YNFriend, YNRecentChatPickerViewController;

@protocol YNRecentChatPickerViewControllerDelegate <NSObject>

@optional
- (void)didCancelForward:(YNRecentChatPickerViewController *)arg1 withAllMessageRevoked:(_Bool)arg2;
- (void)didFinishForward:(YNRecentChatPickerViewController *)arg1 toTargets:(NSArray *)arg2;
- (void)didSelectFriend:(YNFriend *)arg1 withChatRoom:(YNChatRoom *)arg2;
@end

