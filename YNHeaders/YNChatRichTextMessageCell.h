//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

@class UILabel, YNAvatarView, YNChatRichTextBubbleView;

@interface YNChatRichTextMessageCell : YNChatTableViewBaseCell
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatRichTextBubbleView *_bubbleView;
}

- (void).cxx_destruct;
- (void)addTapGestureForView:(id)arg1;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) YNChatRichTextBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)configureWithChatMessage:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)showHighlighted:(_Bool)arg1 view:(id)arg2;
- (void)updateLayout;

@end

