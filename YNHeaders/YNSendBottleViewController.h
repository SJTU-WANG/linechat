//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITextViewDelegate.h"
#import "YNAudioManagerDelegate.h"
#import "YNSendBottleBarDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView, UIView, YNBottleRequestParameter, YNSendBottleBar, YNThrowBottleToSeaView;

@interface YNSendBottleViewController : YNBaseViewController <YNSendBottleBarDelegate, YNAudioManagerDelegate, UITextViewDelegate>
{
    _Bool _isReadySendText;
    _Bool _isBottleThrowing;
    _Bool _isRecodeVoiceTouched;
    id <YNSendBottleViewControllerDelegate> _delegate;
    YNBottleRequestParameter *_requestParameter;
    UIView *_backgroudView;
    UIButton *_maskBackgroudView;
    YNSendBottleBar *_sendBottleBar;
    UIView *_voiceContainerView;
    UIImageView *_guideBubbleView;
    UILabel *_guideLabel;
    UIImageView *_voiceBubbleView;
    UIImageView *_volumeView;
    UILabel *_voiceAlertLabel;
    UIImageView *_textContainerView;
    UITextView *_textView;
    YNThrowBottleToSeaView *_throwBottleView;
    unsigned long long _viewStatus;
}

- (void).cxx_destruct;
- (void)audioManager:(id)arg1 didRecordTime:(long long)arg2;
- (void)audioManager:(id)arg1 didRecordTooLongAudio:(long long)arg2;
- (void)audioManager:(id)arg1 didVolumeChanged:(double)arg2;
- (void)audioManagerAudioSessionBeginInterruption:(id)arg1;
- (void)audioManagerAudioSessionEndInterruption:(id)arg1;
- (void)audioManagerDidStartRecording:(id)arg1;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
- (void)changeSendBottleViewStatus:(unsigned long long)arg1;
- (void)createMessageForViewStatus:(unsigned long long)arg1 withFilePath:(id)arg2 withDuration:(double)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <YNSendBottleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawView;
- (void)finishInputBottleContent:(unsigned long long)arg1;
@property(retain, nonatomic) UIImageView *guideBubbleView; // @synthesize guideBubbleView=_guideBubbleView;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
- (id)init;
@property(retain, nonatomic) UIButton *maskBackgroudView; // @synthesize maskBackgroudView=_maskBackgroudView;
- (void)maskViewTaped:(id)arg1;
@property(retain, nonatomic) YNBottleRequestParameter *requestParameter; // @synthesize requestParameter=_requestParameter;
@property(retain, nonatomic) YNSendBottleBar *sendBottleBar; // @synthesize sendBottleBar=_sendBottleBar;
- (_Bool)sendBottleBarCanChangedType:(unsigned long long)arg1;
- (void)sendBottleBarChangedType:(unsigned long long)arg1;
- (void)sendBottleBarTouchDown:(unsigned long long)arg1;
- (void)sendBottleBarTouchUp:(unsigned long long)arg1;
- (void)sendBottleRequestForMessage:(id)arg1;
- (void)sendBottleViewControllerNotTimes;
- (void)sendBottleViewControllerSendFailForErrorMessage:(id)arg1;
@property(retain, nonatomic) UIImageView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) YNThrowBottleToSeaView *throwBottleView; // @synthesize throwBottleView=_throwBottleView;
@property unsigned long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(retain, nonatomic) UILabel *voiceAlertLabel; // @synthesize voiceAlertLabel=_voiceAlertLabel;
@property(retain, nonatomic) UIImageView *voiceBubbleView; // @synthesize voiceBubbleView=_voiceBubbleView;
@property(retain, nonatomic) UIView *voiceContainerView; // @synthesize voiceContainerView=_voiceContainerView;
@property(retain, nonatomic) UIImageView *volumeView; // @synthesize volumeView=_volumeView;
- (void)showRecordPermissionUnableAlert;
- (void)startPageCurlAnimation:(CDUnknownBlockType)arg1;
- (void)stopRecordAudioWithBlock:(CDUnknownBlockType)arg1;
- (void)textTooShortAlertViewClicked:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)throwBottleViewControllerEndUsed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willShowOrHideKeyboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
