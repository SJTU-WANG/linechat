//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "ZMVAVPlayerDelegate.h"

@class NSString, NSTimer, NSURL, PHFetchResult, UIButton, UIImage, ZMVAVPlayer, ZMVMBProgressHUD, ZMVMovieTranscoder, ZMVTimeChooseView;

@interface ZMVClipViewController : UIViewController <UIGestureRecognizerDelegate, ZMVAVPlayerDelegate>
{
    _Bool _isCalling;
    NSURL *_videoUrl;
    CDUnknownBlockType _cutDoneBlock;
    ZMVAVPlayer *_playerView;
    id <ZMVClipViewControllerDelegate> _delegate;
    ZMVMBProgressHUD *_HUD;
    ZMVMovieTranscoder *_transcoder;
    ZMVTimeChooseView *_chooseView;
    double _startTime;
    double _endTime;
    NSTimer *_timer;
    double _playTime;
    UIImage *_image;
    UIButton *_cutBtn;
    UIButton *_backBtn;
    PHFetchResult *_collectonResuts;
}

- (void).cxx_destruct;
- (void)ForegroundNotify;
@property(retain, nonatomic) ZMVMBProgressHUD *HUD; // @synthesize HUD=_HUD;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void)backgroundNotify;
- (void)cancelOrDoneCutAction;
@property(retain, nonatomic) ZMVTimeChooseView *chooseView; // @synthesize chooseView=_chooseView;
@property(retain, nonatomic) PHFetchResult *collectonResuts; // @synthesize collectonResuts=_collectonResuts;
@property(retain, nonatomic) UIButton *cutBtn; // @synthesize cutBtn=_cutBtn;
@property(copy, nonatomic) CDUnknownBlockType cutDoneBlock; // @synthesize cutDoneBlock=_cutDoneBlock;
- (void)cutVideoAction;
- (void)dealloc;
@property(nonatomic) __weak id <ZMVClipViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithCalling:(_Bool)arg1;
@property(nonatomic) _Bool isCalling; // @synthesize isCalling=_isCalling;
- (void)jumpToTime:(double)arg1;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) ZMVAVPlayer *playerView; // @synthesize playerView=_playerView;
- (void)preViewAction;
- (_Bool)prefersStatusBarHidden;
- (void)removeNotification;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) ZMVMovieTranscoder *transcoder; // @synthesize transcoder=_transcoder;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
- (void)setVideoViewWithUrl:(id)arg1;
- (void)setupUI;
- (void)timerAction;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
