//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

#import "UITextViewDelegate.h"

@class NSString, SDPKeyboardScrollView, UIButton, UILabel, UITextView;

@interface SDPFeedBackViewController : SDPBaseViewController <UITextViewDelegate>
{
    _Bool _isFeedBackEmpty;
    id <SDPFeedBackViewControllerDelegate> _delegate;
    SDPKeyboardScrollView *_svBg;
    UITextView *_tvInput;
    UILabel *_labelPlaceHolder;
    UILabel *_labelPhone;
    UIButton *_btnCommit;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *btnCommit; // @synthesize btnCommit=_btnCommit;
@property(nonatomic) __weak id <SDPFeedBackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didBtnCommitTapped:(id)arg1;
- (void)doInsertFeedBackRequest;
@property(nonatomic) _Bool isFeedBackEmpty; // @synthesize isFeedBackEmpty=_isFeedBackEmpty;
- (void)keyboardWillHide:(id)arg1;
@property(nonatomic) __weak UILabel *labelPhone; // @synthesize labelPhone=_labelPhone;
@property(nonatomic) __weak UILabel *labelPlaceHolder; // @synthesize labelPlaceHolder=_labelPlaceHolder;
- (void)setCommitBtnState;
@property(nonatomic) __weak SDPKeyboardScrollView *svBg; // @synthesize svBg=_svBg;
@property(nonatomic) __weak UITextView *tvInput; // @synthesize tvInput=_tvInput;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

