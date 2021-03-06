//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNScrollContainerViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, YNTagInputView;

@interface YNLoginWithStoredInfoViewController : YNScrollContainerViewController <UITextFieldDelegate>
{
    UIImageView *_avatarImageView;
    YNTagInputView *_passwordTextField;
    UILabel *_phoneNumberLabel;
    UIButton *_loginButton;
    UIButton *_loginWithAnotherAccountButton;
    UIButton *_moreButton;
}

- (void).cxx_destruct;
- (void)accountNotExist;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)configureWithUserInfo;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)forgotBtnClick:(id)arg1;
- (void)forgotPassword;
- (void)handleSignButtonClicked:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)init;
- (void)inputWrongPassword;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
- (void)loginButtonClicked:(id)arg1;
@property(retain, nonatomic) UIButton *loginWithAnotherAccountButton; // @synthesize loginWithAnotherAccountButton=_loginWithAnotherAccountButton;
- (void)loginWithAnotherAccountClicked:(id)arg1;
- (void)loginWithZhangxinIDClicked:(id)arg1;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
- (void)moreButtonClicked:(id)arg1;
@property(retain, nonatomic) YNTagInputView *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
- (void)presentLoginWithCodeController;
- (void)registerKeyboardNotification;
- (void)setupViewConstraints;
- (void)showLoginSwitchAlertView;
- (void)showMainView;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tooManyOperations;
- (void)unRegisterKeyboardNotification;
- (void)updateButtonStatus;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

