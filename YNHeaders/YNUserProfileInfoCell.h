//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, YNChatRoomMember, YNFriend;

@interface YNUserProfileInfoCell : UITableViewCell
{
    _Bool _fromFriendApply;
    id <YNUserProfileInfoCellDelegate> _delegate;
    UIImageView *_avatarImageView;
    UIImageView *_userSexIconImageView;
    UILabel *_nameLabel;
    UILabel *_realNickNameLabel;
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UIButton *_changeTagNameButton;
    YNFriend *_myFrined;
    YNChatRoomMember *_chatRoomMember;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *changeTagNameButton; // @synthesize changeTagNameButton=_changeTagNameButton;
- (void)changeTagNameButtonClick:(id)arg1;
@property(retain, nonatomic) YNChatRoomMember *chatRoomMember; // @synthesize chatRoomMember=_chatRoomMember;
@property(nonatomic) __weak id <YNUserProfileInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(nonatomic) _Bool fromFriendApply; // @synthesize fromFriendApply=_fromFriendApply;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) YNFriend *myFrined; // @synthesize myFrined=_myFrined;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *realNickNameLabel; // @synthesize realNickNameLabel=_realNickNameLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UIImageView *userSexIconImageView; // @synthesize userSexIconImageView=_userSexIconImageView;
- (void)setupViewConstraints;
- (void)useProfileHeaderHandleAvatarTap:(id)arg1;
- (void)userUid:(id)arg1 nickName:(id)arg2 location:(id)arg3;

@end
