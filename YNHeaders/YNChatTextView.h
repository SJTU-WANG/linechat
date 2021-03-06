//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "NSTextStorageDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UILongPressGestureRecognizer;

@interface YNChatTextView : UITextView <UIGestureRecognizerDelegate, UITextViewDelegate, NSTextStorageDelegate>
{
    id <YNChatTextViewDelegate> _myDelegate;
    UILongPressGestureRecognizer *_myLongGesture;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)configureForChatView;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <YNChatTextViewDelegate> myDelegate; // @synthesize myDelegate=_myDelegate;
@property(nonatomic) __weak UILongPressGestureRecognizer *myLongGesture; // @synthesize myLongGesture=_myLongGesture;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

