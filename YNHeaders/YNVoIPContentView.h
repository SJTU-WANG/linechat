//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIButton, UIImageView, UILabel, YNVoipRtcVideoView;

@interface YNVoIPContentView : UIView
{
    _Bool _isSwitch;
    _Bool _isHandsOff;
    _Bool _isFullLocalView;
    _Bool _isMute;
    _Bool _isUnstable;
    id <YNVoIPContentViewDelegate> _delegate;
    id <YNVoipContentViewForVCDelegate> _vcDelegate;
    UIView *_localVideoView;
    YNVoipRtcVideoView *_rtcVideoView;
    UIImageView *_imvTempMinimize;
    NSTimer *_autoHidePipTimer;
    NSTimer *_autoHideInVideoContentTimer;
    UILabel *_unstableConnectionLb;
    UIButton *_minimizeButton;
    UIImageView *_avatarImv;
    UILabel *_usernameLb;
    UILabel *_markedWords;
    UILabel *_threeDots;
    NSTimer *_animateDotsTimer;
    UIImageView *_fullAvatarImv;
    UIView *_fullBgView;
    UIImageView *_bottomBgImv;
    UIImageView *_topBgImv;
    UIButton *_bottomLeftButton;
    UILabel *_bottomLeftLb;
    UIButton *_bottomMiddleButton;
    UILabel *_bottomMiddleLb;
    UIButton *_bottomRightButton;
    UILabel *_bottomRightLb;
    UILabel *_voipTalkTimeLb;
    UIButton *_switchToVoiceButton;
    UILabel *_switchToVoiceLb;
    struct CGRect _floatingFrame;
}

- (void).cxx_destruct;
- (void)accept;
- (void)animateDots;
@property(retain, nonatomic) NSTimer *animateDotsTimer; // @synthesize animateDotsTimer=_animateDotsTimer;
- (void)animateTextSizeToBig;
- (void)animateTextSizeToSmall;
- (void)animateTextSizeWithRatio:(double)arg1;
- (void)autoHideInVideoContent;
@property(retain, nonatomic) NSTimer *autoHideInVideoContentTimer; // @synthesize autoHideInVideoContentTimer=_autoHideInVideoContentTimer;
- (void)autoHidePip;
@property(retain, nonatomic) NSTimer *autoHidePipTimer; // @synthesize autoHidePipTimer=_autoHidePipTimer;
@property(retain, nonatomic) UIImageView *avatarImv; // @synthesize avatarImv=_avatarImv;
@property(retain, nonatomic) UIImageView *bottomBgImv; // @synthesize bottomBgImv=_bottomBgImv;
@property(retain, nonatomic) UIButton *bottomLeftButton; // @synthesize bottomLeftButton=_bottomLeftButton;
@property(retain, nonatomic) UILabel *bottomLeftLb; // @synthesize bottomLeftLb=_bottomLeftLb;
@property(retain, nonatomic) UIButton *bottomMiddleButton; // @synthesize bottomMiddleButton=_bottomMiddleButton;
@property(retain, nonatomic) UILabel *bottomMiddleLb; // @synthesize bottomMiddleLb=_bottomMiddleLb;
@property(retain, nonatomic) UIButton *bottomRightButton; // @synthesize bottomRightButton=_bottomRightButton;
@property(retain, nonatomic) UILabel *bottomRightLb; // @synthesize bottomRightLb=_bottomRightLb;
@property(nonatomic) __weak id <YNVoIPContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyAfterDismiss;
@property(nonatomic) struct CGRect floatingFrame; // @synthesize floatingFrame=_floatingFrame;
@property(retain, nonatomic) UIImageView *fullAvatarImv; // @synthesize fullAvatarImv=_fullAvatarImv;
@property(retain, nonatomic) UIView *fullBgView; // @synthesize fullBgView=_fullBgView;
- (void)handsOff;
- (void)hangup;
- (void)hideAll;
- (void)hideInVideoBtns;
@property(retain, nonatomic) UIImageView *imvTempMinimize; // @synthesize imvTempMinimize=_imvTempMinimize;
- (void)inVideo;
- (void)inVoice;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateTimers;
@property(nonatomic) _Bool isFullLocalView; // @synthesize isFullLocalView=_isFullLocalView;
@property(nonatomic) _Bool isHandsOff; // @synthesize isHandsOff=_isHandsOff;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) _Bool isSwitch; // @synthesize isSwitch=_isSwitch;
@property(nonatomic) _Bool isUnstable; // @synthesize isUnstable=_isUnstable;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *localVideoView; // @synthesize localVideoView=_localVideoView;
@property(retain, nonatomic) UILabel *markedWords; // @synthesize markedWords=_markedWords;
- (void)minimize;
@property(retain, nonatomic) UIButton *minimizeButton; // @synthesize minimizeButton=_minimizeButton;
- (void)mute;
- (void)removeButtonTarget;
- (void)resetUserInfos;
- (void)resetVideoViews;
@property(retain, nonatomic) YNVoipRtcVideoView *rtcVideoView; // @synthesize rtcVideoView=_rtcVideoView;
- (void)setButtonInteraction:(_Bool)arg1;
- (void)setInVideoBtnsAlpha:(double)arg1;
- (void)setInVideoBtnsHidden:(_Bool)arg1;
@property(retain, nonatomic) UIButton *switchToVoiceButton; // @synthesize switchToVoiceButton=_switchToVoiceButton;
@property(retain, nonatomic) UILabel *switchToVoiceLb; // @synthesize switchToVoiceLb=_switchToVoiceLb;
@property(retain, nonatomic) UILabel *threeDots; // @synthesize threeDots=_threeDots;
@property(retain, nonatomic) UIImageView *topBgImv; // @synthesize topBgImv=_topBgImv;
@property(retain, nonatomic) UILabel *unstableConnectionLb; // @synthesize unstableConnectionLb=_unstableConnectionLb;
@property(retain, nonatomic) UILabel *usernameLb; // @synthesize usernameLb=_usernameLb;
@property(nonatomic) __weak id <YNVoipContentViewForVCDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(retain, nonatomic) UILabel *voipTalkTimeLb; // @synthesize voipTalkTimeLb=_voipTalkTimeLb;
- (void)setupAutoHideInVideoContentTimer;
- (void)showContent;
- (void)showFloatingView;
- (void)showFullscreenView;
- (void)showInVideoBtns;
- (void)startAnimateDots;
- (void)startPreview;
- (void)stopAnimateDots;
- (void)switchCamera;
- (void)switchToVoice:(_Bool)arg1;
- (void)switchToVoiceAndAccept;
- (void)updateContent:(_Bool)arg1;
- (void)updateMarkedWordsLb:(id)arg1;
- (void)updateSpeakerImage:(_Bool)arg1;
- (void)updateTimeLb:(id)arg1;
- (void)updateUnstableConnectionLb:(_Bool)arg1;
- (void)videoCalled;
- (void)videoCalling;
- (void)voiceCalled;
- (void)voiceCalling;

@end
