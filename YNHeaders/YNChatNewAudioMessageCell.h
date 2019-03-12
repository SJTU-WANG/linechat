//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatTableViewBaseCell.h"

#import "YNChatMediaCellProtocol.h"

@class NSString, UIImageView, UILabel, UIPanGestureRecognizer, UIView, YNAvatarView, YNSlider;

@interface YNChatNewAudioMessageCell : YNChatTableViewBaseCell <YNChatMediaCellProtocol>
{
    long long _direction;
    struct CGPoint _panGestureBegainPoint;
    double _sliderBlockBeginValue;
    UIView *_playerContainerView;
    UIPanGestureRecognizer *_sliderPanGesture;
    YNAvatarView *_avatarImageView;
    UIImageView *_bubbleImageView;
    UILabel *_userNameLabel;
    UIImageView *_playerImageView;
    YNSlider *_controlSilder;
    UILabel *_audioTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *audioTimeLabel; // @synthesize audioTimeLabel=_audioTimeLabel;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
- (_Bool)checkContinueDealAudio;
- (void)configureCellForRecordingStatus;
- (void)configureWithChatMessage:(id)arg1;
@property(retain, nonatomic) YNSlider *controlSilder; // @synthesize controlSilder=_controlSilder;
- (void)dealloc;
- (void)delayRecoveryPlayerStatusAndProcess;
- (long long)determinePanDirectionIfNeeded:(struct CGPoint)arg1;
- (void)didClickedAudioPlayerBtn:(id)arg1;
- (void)didEndShowCell;
- (void)downloadingAnimation;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)getSliderBlockRealPosition:(struct CGPoint)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)myAudioSource;
- (void)onSliderPan:(id)arg1;
- (void)performBubbleBackgroundColor;
@property(retain, nonatomic) UIImageView *playerImageView; // @synthesize playerImageView=_playerImageView;
- (void)prepareForReuse;
- (void)recordingAnimation;
- (void)removeCellAnimations;
- (void)setChatSource:(id)arg1;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
- (_Bool)shouldShowDownLoadAnimate;
- (void)showHighlighted:(_Bool)arg1;
- (void)sliderTouchUp:(id)arg1;
- (void)sliderValueChanged:(id)arg1 forEvent:(id)arg2;
- (void)startAnimateCellForDownloading;
- (void)startRecordingAnimation;
- (void)updateAudioConfig;
- (void)updateAudioTimeLabel:(double)arg1;
- (void)updateBubbleColor;
- (void)updateChatMessageActiveStatus:(id)arg1;
- (void)updateLayout;
- (void)updatePlayerStatus;
- (void)updateProgress:(double)arg1;
- (void)willStartShowCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
