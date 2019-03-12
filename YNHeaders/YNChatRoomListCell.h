//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UILabel, YNAvatarView;

@interface YNChatRoomListCell : YNTableViewCell
{
    YNAvatarView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_roomMemberCountLabel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)configureWithChatRoom:(id)arg1;
- (void)configureWithChatRoom:(id)arg1 withIndexString:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *roomMemberCountLabel; // @synthesize roomMemberCountLabel=_roomMemberCountLabel;
- (void)setupViewConstraints;

@end

