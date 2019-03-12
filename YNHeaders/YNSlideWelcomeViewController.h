//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "YNNetworkDislabelViewDelegate.h"

@class NSString, YNNetworkDislabelView;

@interface YNSlideWelcomeViewController : YNBaseViewController <YNNetworkDislabelViewDelegate>
{
    _Bool _isShowRefreshRetryBtn;
    id <YNSlideWelcomeViewControllerDelegate> _delegate;
    long long _resultCode;
    NSString *_vSceneId;
    YNNetworkDislabelView *_networkDislabelView;
}

- (void).cxx_destruct;
- (void)back;
- (void)checkAndRequestToVerify;
@property(nonatomic) __weak id <YNSlideWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowRefreshRetryBtn; // @synthesize isShowRefreshRetryBtn=_isShowRefreshRetryBtn;
@property(retain, nonatomic) YNNetworkDislabelView *networkDislabelView; // @synthesize networkDislabelView=_networkDislabelView;
- (void)networkDislabelViewClicked;
- (void)requestToVerify:(id)arg1;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *vSceneId; // @synthesize vSceneId=_vSceneId;
- (void)showTips:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
