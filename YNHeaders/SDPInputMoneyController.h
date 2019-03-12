//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

@class SDPInputMoneyView, SDPKeyboardScrollView, SDPSelectBankView, UIButton;

@interface SDPInputMoneyController : SDPBaseViewController
{
    unsigned long long _inputType;
    SDPSelectBankView *_selectBankView;
    SDPInputMoneyView *_inputMoneyView;
    UIButton *_nextBtn;
    SDPKeyboardScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) SDPInputMoneyView *inputMoneyView; // @synthesize inputMoneyView=_inputMoneyView;
@property(nonatomic) unsigned long long inputType; // @synthesize inputType=_inputType;
- (void)keyboardWillHide:(id)arg1;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) SDPKeyboardScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SDPSelectBankView *selectBankView; // @synthesize selectBankView=_selectBankView;
- (void)setup;
- (void)viewDidLoad;

@end

