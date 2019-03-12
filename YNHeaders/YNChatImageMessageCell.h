//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

#import "YNChatMediaCellProtocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, YNAvatarView, YNChatMaskImageView;

@interface YNChatImageMessageCell : YNChatTableViewBaseCell <YNChatMediaCellProtocol>
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    YNChatMaskImageView *_chatImageView;
    UIImageView *_icloudImageStatusView;
    UIImageView *_bubbleImageView;
    UILabel *_uploadProgressLabel;
    UILabel *_icloudTextLabel;
    UIActivityIndicatorView *_uploadActivityIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) YNChatMaskImageView *chatImageView; // @synthesize chatImageView=_chatImageView;
- (void)configureImageForMessage:(id)arg1;
- (void)configureWithChatMessage:(id)arg1;
- (void)didClickedImageView:(id)arg1;
- (void)didLongPressedImageView:(id)arg1;
- (void)didUploadProgressChanged:(double)arg1;
- (id)getBubbleImageView;
- (void)hideUploadPregressView;
@property(retain, nonatomic) UIImageView *icloudImageStatusView; // @synthesize icloudImageStatusView=_icloudImageStatusView;
@property(retain, nonatomic) UILabel *icloudTextLabel; // @synthesize icloudTextLabel=_icloudTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reloadImageFromMessage:(id)arg1;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *uploadActivityIndicatorView; // @synthesize uploadActivityIndicatorView=_uploadActivityIndicatorView;
@property(retain, nonatomic) UILabel *uploadProgressLabel; // @synthesize uploadProgressLabel=_uploadProgressLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)showHighlighted:(_Bool)arg1;
- (void)updateLayout;
- (void)updateProgress:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
