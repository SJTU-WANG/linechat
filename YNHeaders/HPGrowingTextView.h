//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class HPTextViewInternal, NSObject<HPGrowingTextViewDelegate>, NSString, UIColor, UIFont, UITextView;

@interface HPGrowingTextView : UIView <UITextViewDelegate>
{
    HPTextViewInternal *internalTextView;
    int minHeight;
    int maxHeight;
    int maxNumberOfLines;
    int minNumberOfLines;
    _Bool animateHeightChange;
    double animationDuration;
    NSObject<HPGrowingTextViewDelegate> *delegate;
    long long textAlignment;
    struct _NSRange selectedRange;
    _Bool editable;
    unsigned long long dataDetectorTypes;
    long long returnKeyType;
    long long keyboardType;
    struct UIEdgeInsets contentInset;
    UIFont *font;
    UIColor *textColor;
}

- (void).cxx_destruct;
@property _Bool animateHeightChange; // @synthesize animateHeightChange;
@property double animationDuration; // @synthesize animationDuration;
- (id)backgroundColor;
- (_Bool)becomeFirstResponder;
- (void)commonInitialiser;
- (void)commonInitialiser:(id)arg1;
@property struct UIEdgeInsets contentInset;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes;
@property NSObject<HPGrowingTextViewDelegate> *delegate; // @synthesize delegate;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(retain, nonatomic) UIFont *font; // @synthesize font;
- (void)growDidStop;
- (_Bool)hasText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@property(retain, nonatomic) UITextView *internalTextView; // @synthesize internalTextView;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable;
- (_Bool)isFirstResponder;
@property(nonatomic) _Bool isScrollable;
@property(nonatomic) long long keyboardType;
- (void)layoutSubviews;
@property(nonatomic) int maxHeight; // @synthesize maxHeight;
@property int maxNumberOfLines;
- (double)measureHeight;
@property(nonatomic) int minHeight; // @synthesize minHeight;
@property int minNumberOfLines;
@property(retain, nonatomic) NSString *placeholder; // @dynamic placeholder;
@property(retain, nonatomic) UIColor *placeholderColor; // @dynamic placeholderColor;
- (void)refreshHeight;
- (void)resetScrollPositionForIOS7;
- (_Bool)resignFirstResponder;
- (void)resizeTextView:(long long)arg1;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

