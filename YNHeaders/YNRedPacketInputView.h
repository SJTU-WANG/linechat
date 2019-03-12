//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UILabel, UITextField;

@interface YNRedPacketInputView : UIView <UITextFieldDelegate>
{
    unsigned long long _type;
    id <YNRedPacketInputViewDelegate> _delegate;
    UIImageView *_imvTipIcon;
    UILabel *_lbTip;
    UITextField *_tfInputText;
    UILabel *_lbUnit;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YNRedPacketInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imvTipIcon; // @synthesize imvTipIcon=_imvTipIcon;
- (id)initWithInputType:(unsigned long long)arg1;
- (id)inputText;
@property(retain, nonatomic) UILabel *lbTip; // @synthesize lbTip=_lbTip;
@property(retain, nonatomic) UILabel *lbUnit; // @synthesize lbUnit=_lbUnit;
- (long long)numberOfRedPacket;
- (id)redPacketAmount;
- (void)resignResponder;
- (void)setInputText:(id)arg1;
@property(retain, nonatomic) UITextField *tfInputText; // @synthesize tfInputText=_tfInputText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)showNormalStyle;
- (void)showWarningStyle;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)valueChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

