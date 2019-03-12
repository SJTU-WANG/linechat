//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

@class UIImageView, UILabel, YNChatVoipMessageBubbleView;

@interface YNChatVoipMessageCell : YNChatTableViewBaseCell
{
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatVoipMessageBubbleView *_bubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) YNChatVoipMessageBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)didClickedBubbleView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)showHighlighted:(_Bool)arg1;
- (void)updateLayout;

@end

