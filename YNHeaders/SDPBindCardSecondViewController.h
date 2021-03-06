//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

#import "SDPInputCardInfoViewDelegate.h"
#import "SDPSelectBoxViewDelegate.h"
#import "SPIDCardNumInputKeyBoardViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, SDPDatePickerView, SDPIDCardNumInputKeyBoardView, SDPInputCardInfoView, SDPKeyboardScrollView, SDPSelectBoxView, UILabel;

@interface SDPBindCardSecondViewController : SDPBaseViewController <UITextFieldDelegate, SDPInputCardInfoViewDelegate, SDPSelectBoxViewDelegate, SPIDCardNumInputKeyBoardViewDelegate>
{
    _Bool isAgreedUserAgreement;
    _Bool expiryDateCellHasValue;
    _Bool securityCodeCellHasValue;
    _Bool personNameCellHasValue;
    _Bool IDNumberCellHasValue;
    _Bool phoneNumberCellHasValue;
    NSMutableDictionary *operateBindGatherDic;
    _Bool _isPushView;
    NSDictionary *_cardInfoDic;
    NSDictionary *_parametersDic;
    long long _bankCardType;
    unsigned long long _bindCardType;
    long long _bindCardSourceType;
    CDUnknownBlockType _bindCardSuccessBlock;
    CDUnknownBlockType _setPayPwdSuccessBlock;
    CDUnknownBlockType _setPayPwdCancelBlock;
    CDUnknownBlockType _complianceCancelBlock;
    SDPKeyboardScrollView *_backScrollView;
    UILabel *_alertBankCardLabel;
    SDPInputCardInfoView *_bankCardTypeInputView;
    UILabel *_alertHeadBankInfoLabel;
    SDPInputCardInfoView *_expiryDateInputView;
    SDPDatePickerView *_datePickerView;
    SDPInputCardInfoView *_securityCodeInputView;
    SDPInputCardInfoView *_personNameInputInputView;
    SDPInputCardInfoView *_IDNumberInputView;
    SDPIDCardNumInputKeyBoardView *_idCardNumInputKeyBoardView;
    SDPInputCardInfoView *_phoneNumberInputView;
    UILabel *_alertFootBankInfoLabel;
    SDPSelectBoxView *_selectBoxView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SDPInputCardInfoView *IDNumberInputView; // @synthesize IDNumberInputView=_IDNumberInputView;
@property(retain, nonatomic) UILabel *alertBankCardLabel; // @synthesize alertBankCardLabel=_alertBankCardLabel;
@property(retain, nonatomic) UILabel *alertFootBankInfoLabel; // @synthesize alertFootBankInfoLabel=_alertFootBankInfoLabel;
@property(retain, nonatomic) UILabel *alertHeadBankInfoLabel; // @synthesize alertHeadBankInfoLabel=_alertHeadBankInfoLabel;
@property(retain, nonatomic) SDPKeyboardScrollView *backScrollView; // @synthesize backScrollView=_backScrollView;
@property(nonatomic) long long bankCardType; // @synthesize bankCardType=_bankCardType;
@property(retain, nonatomic) SDPInputCardInfoView *bankCardTypeInputView; // @synthesize bankCardTypeInputView=_bankCardTypeInputView;
@property(nonatomic) long long bindCardSourceType; // @synthesize bindCardSourceType=_bindCardSourceType;
@property(copy, nonatomic) CDUnknownBlockType bindCardSuccessBlock; // @synthesize bindCardSuccessBlock=_bindCardSuccessBlock;
@property(nonatomic) unsigned long long bindCardType; // @synthesize bindCardType=_bindCardType;
@property(copy, nonatomic) NSDictionary *cardInfoDic; // @synthesize cardInfoDic=_cardInfoDic;
- (void)changeNextBtnState;
@property(copy, nonatomic) CDUnknownBlockType complianceCancelBlock; // @synthesize complianceCancelBlock=_complianceCancelBlock;
@property(retain, nonatomic) SDPDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
- (void)didReceiveMemoryWarning;
- (void)didTapLeftBarButtonItem;
@property(retain, nonatomic) SDPInputCardInfoView *expiryDateInputView; // @synthesize expiryDateInputView=_expiryDateInputView;
- (void)handleOperateBindInfoWithClickName:(id)arg1 inputDic:(id)arg2 resultMessage:(id)arg3 needEndGather:(_Bool)arg4;
- (void)handleOperateBindNextStepInputInfoWithBankName:(id)arg1 resultMessage:(id)arg2 needEndGather:(_Bool)arg3;
@property(retain, nonatomic) SDPIDCardNumInputKeyBoardView *idCardNumInputKeyBoardView; // @synthesize idCardNumInputKeyBoardView=_idCardNumInputKeyBoardView;
- (void)idCardNumInputKeyBoardViewButtonClicked:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
@property(nonatomic) _Bool isPushView; // @synthesize isPushView=_isPushView;
- (void)loadView;
- (void)onClickNextButton;
- (void)onClickProtocolButton;
- (void)onClickRightButton:(id)arg1;
- (void)onClickSelectBoxButton:(id)arg1;
@property(copy, nonatomic) NSDictionary *parametersDic; // @synthesize parametersDic=_parametersDic;
@property(retain, nonatomic) SDPInputCardInfoView *personNameInputInputView; // @synthesize personNameInputInputView=_personNameInputInputView;
@property(retain, nonatomic) SDPInputCardInfoView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
- (void)postBankCardInfo:(id)arg1;
@property(retain, nonatomic) SDPInputCardInfoView *securityCodeInputView; // @synthesize securityCodeInputView=_securityCodeInputView;
@property(retain, nonatomic) SDPSelectBoxView *selectBoxView; // @synthesize selectBoxView=_selectBoxView;
@property(copy, nonatomic) CDUnknownBlockType setPayPwdCancelBlock; // @synthesize setPayPwdCancelBlock=_setPayPwdCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType setPayPwdSuccessBlock; // @synthesize setPayPwdSuccessBlock=_setPayPwdSuccessBlock;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)valueChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

