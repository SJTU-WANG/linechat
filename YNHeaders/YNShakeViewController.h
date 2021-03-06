//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "CLLocationManagerDelegate.h"
#import "YNDefaultMediaContainerViewControllerDelegate.h"
#import "YNShakeResultCardViewDelegate.h"

@class CLLocationManager, CMMotionManager, NSString, UIImageView, UILabel, YNBaseNavWithIconTitleView, YNDefaultMediaContainerViewController, YNShakeResultCardView, YNShakeSearchingView;

@interface YNShakeViewController : YNBaseViewController <CLLocationManagerDelegate, YNShakeResultCardViewDelegate, YNDefaultMediaContainerViewControllerDelegate>
{
    CLLocationManager *_locationManager;
    CMMotionManager *_motionManager;
    _Bool _viewDidLoaded;
    _Bool _readyToShake;
    _Bool _shaking;
    _Bool _searching;
    _Bool _locateFinished;
    int _waitingTime;
    YNBaseNavWithIconTitleView *_titleView;
    UIImageView *_shakeUpImageView;
    UIImageView *_shakeDownImageView;
    UIImageView *_shakeUpLine;
    UIImageView *_shakeDownLine;
    UIImageView *_shakeBackgroundView;
    YNShakeSearchingView *_searchingView;
    YNShakeResultCardView *_resultCardView;
    unsigned long long _lastErrorType;
    UILabel *_errorMsgLabel;
    double _centerY;
    double _lastShakeTime;
    double _lastRequestTime;
    YNDefaultMediaContainerViewController *_singleImgageDisplayVC;
}

- (void).cxx_destruct;
- (void)cancelPreviousActions;
- (void)cardViewDidAvatarTapped:(id)arg1 withUserInfo:(id)arg2;
- (void)cardViewDidTapped:(id)arg1 withDistanceInfo:(id)arg2;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
- (void)checkIfUsedBefore;
- (void)checkLocationServiceEnable;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didTapedDefaultMediaContainerView:(id)arg1;
- (void)didTimeout;
@property(retain, nonatomic) UILabel *errorMsgLabel; // @synthesize errorMsgLabel=_errorMsgLabel;
- (void)getShakeUserFailed;
- (void)getShakeUserSuccessed:(id)arg1;
- (void)hideResultCardView;
- (void)initNaviBarItem;
- (void)initShakeViews;
@property(nonatomic) unsigned long long lastErrorType; // @synthesize lastErrorType=_lastErrorType;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) double lastShakeTime; // @synthesize lastShakeTime=_lastShakeTime;
- (void)locateDidSuccessed:(id)arg1;
@property(nonatomic) _Bool locateFinished; // @synthesize locateFinished=_locateFinished;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(nonatomic) _Bool readyToShake; // @synthesize readyToShake=_readyToShake;
@property(retain, nonatomic) YNShakeResultCardView *resultCardView; // @synthesize resultCardView=_resultCardView;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) YNShakeSearchingView *searchingView; // @synthesize searchingView=_searchingView;
- (void)setIdleTimerEnable;
@property(retain, nonatomic) UIImageView *shakeBackgroundView; // @synthesize shakeBackgroundView=_shakeBackgroundView;
@property(retain, nonatomic) UIImageView *shakeDownImageView; // @synthesize shakeDownImageView=_shakeDownImageView;
@property(retain, nonatomic) UIImageView *shakeDownLine; // @synthesize shakeDownLine=_shakeDownLine;
@property(retain, nonatomic) UIImageView *shakeUpImageView; // @synthesize shakeUpImageView=_shakeUpImageView;
@property(retain, nonatomic) UIImageView *shakeUpLine; // @synthesize shakeUpLine=_shakeUpLine;
@property(nonatomic) _Bool shaking; // @synthesize shaking=_shaking;
@property(retain, nonatomic) YNDefaultMediaContainerViewController *singleImgageDisplayVC; // @synthesize singleImgageDisplayVC=_singleImgageDisplayVC;
- (void)setTimeout;
@property(retain, nonatomic) YNBaseNavWithIconTitleView *titleView; // @synthesize titleView=_titleView;
- (void)setUpViewConstraints;
@property(nonatomic) _Bool viewDidLoaded; // @synthesize viewDidLoaded=_viewDidLoaded;
@property(nonatomic) int waitingTime; // @synthesize waitingTime=_waitingTime;
- (void)shake;
- (void)shakeAnimation;
- (void)shakeSettings:(id)arg1;
- (void)showFirstUsageNote;
- (void)showResultCardView;
- (void)startAccelerometer;
- (void)startGetShakeUser;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

