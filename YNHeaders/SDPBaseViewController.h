//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SDPMBProgressHUD;

@interface SDPBaseViewController : UIViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    _Bool isFindPayPwdPushView;
    _Bool isBindCardPushView;
    unsigned long long bindCardPushViewType;
    _Bool _isFromAppJump;
    CDUnknownBlockType _loginDidFinish;
    SDPMBProgressHUD *_progressHUD;
    CDUnknownBlockType _confirmBtnActionBlock;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)bindCardBackAlertViewConfiremButtonClickedWithAlertView:(id)arg1 buttonIndex:(long long)arg2;
- (void)calculateProgressWithDuration:(double)arg1;
- (_Bool)checkTokenEffectiveness;
@property(copy, nonatomic) CDUnknownBlockType confirmBtnActionBlock; // @synthesize confirmBtnActionBlock=_confirmBtnActionBlock;
- (void)creatCustomViewAlert:(id)arg1;
- (void)dealloc;
- (void)didTapLeftBarButtonItem;
- (void)didTapRightBarButtonItem;
- (void)dismissKeyBoard;
- (void)findPayPwdBckAlertViewConfiremButtonClickedWithAlertView:(id)arg1 buttonIndex:(long long)arg2;
- (id)getNewBankNumWitOldBankNum:(id)arg1;
- (void)goBackFindPayPwdRootViewControllerWithIsPushView:(_Bool)arg1 message:(id)arg2;
- (void)goBackToBindCardProtalWithIsPushView:(_Bool)arg1 bindCardType:(unsigned long long)arg2 titleMessage:(id)arg3 infoMessage:(id)arg4 buttonLeftName:(id)arg5 buttonRightName:(id)arg6;
- (void)handleBindCardCancelEvent;
- (void)handleComplianceCancelBlockWithNewCardPayType:(unsigned long long)arg1;
- (void)handleLoginAlert;
- (void)handleRiskAlertWithIsNewCardPay:(_Bool)arg1 title:(id)arg2 confirmTitle:(id)arg3 confirmBtnActionBlock:(CDUnknownBlockType)arg4;
- (void)handleRiskCancelButtonAction;
- (void)handleRiskWithModel:(id)arg1 isNewCardPay:(_Bool)arg2 bindCardType:(unsigned long long)arg3 complianceCancelBlock:(CDUnknownBlockType)arg4;
- (void)handleSetPayPwdCancelEvent;
- (void)hideLeftBarButtonItem;
- (void)hideLoadingHUD;
- (void)hideRightBarButtonItem;
@property(nonatomic) _Bool isFromAppJump; // @synthesize isFromAppJump=_isFromAppJump;
- (_Bool)loadData;
@property(copy, nonatomic) CDUnknownBlockType loginDidFinish; // @synthesize loginDidFinish=_loginDidFinish;
- (void)popBindCardProtalViewControllerWithIsPushView:(_Bool)arg1 bindCardType:(unsigned long long)arg2;
- (void)popFindPayProtalViewControllerWithIsPushView:(_Bool)arg1;
- (_Bool)prefersNavigationBarHidden;
@property(retain, nonatomic) SDPMBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
- (void)setLeftBarButtonItemWithBackIcon;
- (void)setLeftBarButtonItemWithImage:(id)arg1;
- (id)setLeftBarButtonItemWithTitle:(id)arg1;
- (void)setRightBarButtonItemWithImage:(id)arg1;
- (id)setRightBarButtonItemWithTitle:(id)arg1;
- (void)showAlertControllerWithTitle:(id)arg1 message:(id)arg2;
- (void)showBarLoadingHUDWithDuration:(double)arg1 Title:(id)arg2 detailTitle:(id)arg3;
- (void)showLoadingHUD;
- (void)showLoadingHUDWithDuration:(double)arg1 Title:(id)arg2 detailTitle:(id)arg3;
- (void)showLoadingHUDWithTitle:(id)arg1 detailTitle:(id)arg2;
- (void)showToastWithMessage:(id)arg1;
- (void)showToastWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userLogin:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)wifiLoginSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

