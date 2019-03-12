//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

#import "YNChatMediaCellProtocol.h"
#import "YNVideoStatusViewDelegate.h"

@class NSString, UIImageView, UILabel, YNAvatarView, YNChatMaskImageView, YNVideoStatusView;

@interface YNChatVideoMessageCell : YNChatTableViewBaseCell <YNVideoStatusViewDelegate, YNChatMediaCellProtocol>
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatMaskImageView *_chatImageView;
    UIImageView *_bubbleImageView;
    YNVideoStatusView *_statusView;
    UIImageView *_gradientView;
    UILabel *_videoSizeLabel;
    UILabel *_videoTimeLabel;
    UILabel *_stautsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) YNChatMaskImageView *chatImageView; // @synthesize chatImageView=_chatImageView;
- (void)configureVideoForMessage:(id)arg1;
- (void)configureWithChatMessage:(id)arg1;
- (void)didClickedImageView:(id)arg1;
- (void)didEndShowCell;
- (void)didLongPressedImageView:(id)arg1;
- (void)didUploadProgressChanged:(double)arg1;
- (id)getBubbleImageView;
- (id)getVideoSizeDisplayString;
- (id)getVideoTimeDisplayString;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
- (void)hideUploadPregressView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)playVideo;
- (void)reloadImageFromMessage:(id)arg1;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) YNVideoStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *stautsLabel; // @synthesize stautsLabel=_stautsLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *videoSizeLabel; // @synthesize videoSizeLabel=_videoSizeLabel;
@property(retain, nonatomic) UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
- (void)showHighlighted:(_Bool)arg1;
- (void)updateLayout;
- (void)updateProgress:(double)arg1;
- (void)videoStatusViewTaped:(unsigned long long)arg1;
- (void)willStartShowCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
