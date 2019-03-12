//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YNCustomAlertView : UIView
{
    UIView *_containerView;
    UILabel *_alertLabel;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    UIView *_actionTopLineView;
    UIView *_cancelTopLineView;
}

+ (id)alertViewWithTitle:(id)arg1 withActionButtonTitle:(id)arg2 withCancelButtonTitle:(id)arg3 addTarget:(id)arg4 action:(SEL)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *actionTopLineView; // @synthesize actionTopLineView=_actionTopLineView;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *cancelTopLineView; // @synthesize cancelTopLineView=_cancelTopLineView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)okButtonClicked:(id)arg1;
- (void)show;

@end
