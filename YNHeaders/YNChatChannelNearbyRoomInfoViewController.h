//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatRoomInfoViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "YNBaseSwitchTableViewCellDelegate.h"
#import "YNChatRoomNameSettingViewControllerDelegate.h"

@class NSString, UIImage;

@interface YNChatChannelNearbyRoomInfoViewController : YNChatRoomInfoViewController <YNBaseSwitchTableViewCellDelegate, YNChatRoomNameSettingViewControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _isSettingName;
    UIImage *_imgThumbnail;
}

- (void).cxx_destruct;
- (void)chatCenter:(id)arg1 roomMembersDidUpdate:(id)arg2 forRoom:(id)arg3;
- (void)chatInfoMembersCellDidTapItem:(id)arg1;
- (void)deleteChatRoomButtonClicked:(id)arg1;
- (void)didCancelChangeChatRoomName:(id)arg1;
- (void)didFinishedChangeChatRoomName:(id)arg1 chatRoomName:(id)arg2;
- (id)getDisplayOwnerName:(id)arg1;
- (id)getRoomOwnerWithOwnerUid:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
@property(retain, nonatomic) UIImage *imgThumbnail; // @synthesize imgThumbnail=_imgThumbnail;
- (void)initDataSource;
- (void)initNaviBarItem;
@property(nonatomic) _Bool isSettingName; // @synthesize isSettingName=_isSettingName;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)refreshListWithMembers:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

