//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

#import "YNChatMediaCellProtocol.h"

@class FLAnimatedImageView, NSString, UIActivityIndicatorView, UIImageView, UILabel, YNAvatarView, YNGIFStatusView;

@interface YNChatStickerMessageCell : YNChatTableViewBaseCell <YNChatMediaCellProtocol>
{
    YNAvatarView *_avatarImageView;
    UILabel *_userNameLabel;
    UIActivityIndicatorView *_downloadIndicator;
    UIImageView *_bubbleBackgroundView;
    FLAnimatedImageView *_chatImageView;
    UIImageView *_gradientView;
    UILabel *_fileSizeLabel;
    YNGIFStatusView *_statusView;
}

- (void).cxx_destruct;
- (void)addTapGestureForView:(id)arg1;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *bubbleBackgroundView; // @synthesize bubbleBackgroundView=_bubbleBackgroundView;
@property(retain, nonatomic) FLAnimatedImageView *chatImageView; // @synthesize chatImageView=_chatImageView;
- (void)configureImageForMessage:(id)arg1;
- (void)configureWithChatMessage:(id)arg1;
- (void)didClickedImageView:(id)arg1;
- (void)didEndShowCell;
- (void)didLongPressedImageView:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *downloadIndicator; // @synthesize downloadIndicator=_downloadIndicator;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) YNGIFStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (void)updateLayout;
- (void)updateProgress:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

