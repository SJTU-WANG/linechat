//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIButton, UIImageView, UILabel, YNChatRoomMember;

@interface YNChatRoomSelectMemberCell : YNTableViewCell
{
    _Bool _isMySelected;
    _Bool _isExclued;
    UIImageView *_checkBoxImageView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    UIButton *_infoButton;
    YNChatRoomMember *_member;
    id <YNChatRoomSelectMemberCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *checkBoxImageView; // @synthesize checkBoxImageView=_checkBoxImageView;
- (void)configureWithMember:(id)arg1;
@property(nonatomic) id <YNChatRoomSelectMemberCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (void)infoButtonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isExclued; // @synthesize isExclued=_isExclued;
@property(nonatomic) _Bool isMySelected; // @synthesize isMySelected=_isMySelected;
@property(retain, nonatomic) YNChatRoomMember *member; // @synthesize member=_member;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
- (void)setupViewConstraints;

@end

