//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "YNRegisterManagerDelegate.h"

@class NSString, UIButton, UIImageView;

@interface YNFirstLoginSignupViewController : YNBaseViewController <YNRegisterManagerDelegate>
{
    UIImageView *_backGroundImageView;
    UIButton *_loginButton;
    UIButton *_signupButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backGroundImageView; // @synthesize backGroundImageView=_backGroundImageView;
- (void)dealloc;
- (void)didFinishedRegisterYNAccount:(_Bool)arg1;
- (id)getLaunchImagePath;
- (void)goToPolicyView:(id)arg1;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
- (void)loginButtonClicked:(id)arg1;
- (void)registerForSimulator;
@property(retain, nonatomic) UIButton *signupButton; // @synthesize signupButton=_signupButton;
- (void)setupViewConstraints;
- (void)signupButtonClicked:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

