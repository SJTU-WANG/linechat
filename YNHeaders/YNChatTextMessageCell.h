//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

#import "YNChatTextMessageBubbleViewDelegate.h"

@class NSString, UILabel, YNAvatarView, YNChatTextMessageBubbleView;

@interface YNChatTextMessageCell : YNChatTableViewBaseCell <YNChatTextMessageBubbleViewDelegate>
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatTextMessageBubbleView *_bubbleView;
}

- (void).cxx_destruct;
- (void)addLongPressGestureForView:(id)arg1;
- (void)addTapTwoGestureForView:(id)arg1;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) YNChatTextMessageBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)configureWithChatMessage:(id)arg1;
- (void)didInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)showHighlighted:(_Bool)arg1;
- (void)textBubbleView:(id)arg1 didClickedLink:(id)arg2;
- (void)textBubbleView:(id)arg1 didLongPressedLink:(id)arg2;
- (void)textChatCellLongPressed:(id)arg1;
- (void)textDoublePress:(id)arg1;
- (void)updateLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
