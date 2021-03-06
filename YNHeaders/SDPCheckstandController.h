//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

#import "SDPPayCheckstandViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, SDPOrderInfo, SDPPayMethodModel;

@interface SDPCheckstandController : SDPBaseViewController <SDPPayCheckstandViewDelegate, UIAlertViewDelegate>
{
    _Bool _isDiscount;
    SDPOrderInfo *_orderInfo;
    CDUnknownBlockType _completion;
    NSString *_cashierType;
    NSDictionary *_amountDic;
    NSMutableArray *_methodArray;
    SDPPayMethodModel *_defaultMethodModel;
    NSString *_requestPayTime;
    NSString *_resposeMessage;
    NSString *_payPasswordErrorMessage;
    NSString *_cashierStartLoadingTime;
    CDUnknownBlockType _confirmBtnAcion;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSDictionary *amountDic; // @synthesize amountDic=_amountDic;
@property(copy, nonatomic) NSString *cashierStartLoadingTime; // @synthesize cashierStartLoadingTime=_cashierStartLoadingTime;
@property(copy, nonatomic) NSString *cashierType; // @synthesize cashierType=_cashierType;
- (void)closeOrderRequest;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType confirmBtnAcion; // @synthesize confirmBtnAcion=_confirmBtnAcion;
@property(retain, nonatomic) SDPPayMethodModel *defaultMethodModel; // @synthesize defaultMethodModel=_defaultMethodModel;
- (void)doQueryInfosRequest;
- (void)doQueryPaymentToolCacheRequest;
- (void)findBackPayPwd;
- (void)gotoBindCardFirstStepViewControllerWithPayPwd:(id)arg1;
- (void)gotoCheckPaymentPasswordWithTiket:(id)arg1;
- (void)handleCancelPayAndReturnMerchantsResultWithCashierType:(id)arg1 startLoadingTime:(id)arg2;
- (void)handleCheckstandAlert:(id)arg1 confirmTitle:(id)arg2 confirmBtnAction:(CDUnknownBlockType)arg3;
- (void)handleEndPayAndReturnMerchantsResult:(id)arg1;
- (void)handlePayErrorCode_CANCEL;
- (void)handlePayErrorCode_FAILWithMessage:(id)arg1;
- (void)handlePayPwdErrorWithCode:(id)arg1 message:(id)arg2;
- (void)handleRiskWithModel:(id)arg1;
- (void)handleWifiPayReceiveOrderRequestWithPassword:(id)arg1 payMethodModel:(id)arg2 paymentType:(id)arg3;
@property(nonatomic) _Bool isDiscount; // @synthesize isDiscount=_isDiscount;
@property(retain, nonatomic) NSMutableArray *methodArray; // @synthesize methodArray=_methodArray;
- (void)onCloseRightButtonWithPassword:(id)arg1;
@property(retain, nonatomic) SDPOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void)payPasswordEncryptionFailurewithCode:(id)arg1 message:(id)arg2 payMethodModel:(id)arg3;
@property(copy, nonatomic) NSString *payPasswordErrorMessage; // @synthesize payPasswordErrorMessage=_payPasswordErrorMessage;
- (void)paySuccess:(id)arg1 payMethodModel:(id)arg2;
- (_Bool)prefersNavigationBarHidden;
- (void)pushFindPayPwdBindCardFirstViewController;
- (void)pushFindPayPwdCardListViewController;
- (void)pushPaySucessViewCOntroller;
- (void)pushSetPayPwdProcess;
- (void)queryPaymentToolCache;
- (void)realNameStateNotNull;
@property(copy, nonatomic) NSString *requestPayTime; // @synthesize requestPayTime=_requestPayTime;
@property(copy, nonatomic) NSString *resposeMessage; // @synthesize resposeMessage=_resposeMessage;
- (void)showAlertSetPayPwdView;
- (void)showErrorInfoAndReturnMerchantsWithResposeCode:(id)arg1 resposeMessage:(id)arg2 needGather:(_Bool)arg3;
- (void)showInputPayPwdView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

