//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNPersonListViewController.h"

#import "YNChatRoomCreateFriendsPickerViewControllerDelegate.h"

@class NSArray, NSString, YNChatRoom;

@interface YNAllMemberViewController : YNPersonListViewController <YNChatRoomCreateFriendsPickerViewControllerDelegate>
{
    _Bool _isDisappear;
    YNChatRoom *_chatRoom;
    NSArray *_membersArray;
}

- (void).cxx_destruct;
- (_Bool)canEditRows;
@property(retain, nonatomic) YNChatRoom *chatRoom; // @synthesize chatRoom=_chatRoom;
- (void)commitEditingStyleForObject:(id)arg1;
- (void)didClickedCancelInPicker:(id)arg1;
- (void)didFinishedPicker:(id)arg1 withFriends:(id)arg2 withRequstId:(id)arg3;
- (void)didSelectCellWithObject:(id)arg1;
- (_Bool)filterObject:(id)arg1 withSearchString:(id)arg2;
- (id)init;
- (void)initDataSource;
- (void)initWithNavigationItem;
@property(retain, nonatomic) NSArray *membersArray; // @synthesize membersArray=_membersArray;
- (void)navRightItemClick:(id)arg1;
- (id)prepareDataSource;
- (void)removeMembersFromGroup:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
