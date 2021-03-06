//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

@class UILabel, YNAvatarView, YNChatFriendCardBubbleView;

@interface YNChatFriendCardMessageCell : YNChatTableViewBaseCell
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatFriendCardBubbleView *_bubbleImageView;
    UILabel *_cardTitleLabel;
    UILabel *_lineLabel;
    YNAvatarView *_cardAvatarImageView;
    UILabel *_cardNameLabel;
    UILabel *_zhangXinIDLabel;
}

+ (struct CGSize)getFriendCardCellbobbleSize;
- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) YNChatFriendCardBubbleView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) YNAvatarView *cardAvatarImageView; // @synthesize cardAvatarImageView=_cardAvatarImageView;
@property(retain, nonatomic) UILabel *cardNameLabel; // @synthesize cardNameLabel=_cardNameLabel;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
- (void)configureWithChatMessage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *zhangXinIDLabel; // @synthesize zhangXinIDLabel=_zhangXinIDLabel;
- (void)showHighlighted:(_Bool)arg1;
- (void)updateLayout;

@end

