//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, YNChatRoom, YNChatRoomCreateFriendsPickerViewController;

@protocol YNChatRoomCreateFriendsPickerViewControllerDelegate <NSObject>

@optional
- (void)didClickedCancelInPicker:(YNChatRoomCreateFriendsPickerViewController *)arg1;
- (void)didFinishedPicker:(YNChatRoomCreateFriendsPickerViewController *)arg1 withChatRoom:(YNChatRoom *)arg2;
- (void)didFinishedPicker:(YNChatRoomCreateFriendsPickerViewController *)arg1 withFriends:(NSArray *)arg2 withRequstId:(NSString *)arg3;
@end
