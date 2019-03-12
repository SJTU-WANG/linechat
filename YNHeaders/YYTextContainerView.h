//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, YYTextDebugOption, YYTextLayout;

@interface YYTextContainerView : UIView
{
    _Bool _attachmentChanged;
    NSMutableArray *_attachmentViews;
    NSMutableArray *_attachmentLayers;
    UIView *_hostView;
    YYTextDebugOption *_debugOption;
    long long _textVerticalAlignment;
    YYTextLayout *_layout;
    double _contentsFadeDuration;
}

- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic) double contentsFadeDuration; // @synthesize contentsFadeDuration=_contentsFadeDuration;
@property(copy, nonatomic) YYTextDebugOption *debugOption; // @synthesize debugOption=_debugOption;
- (void)drawRect:(struct CGRect)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YYTextLayout *layout; // @synthesize layout=_layout;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLayout:(id)arg1 withFadeDuration:(double)arg2;
@property(nonatomic) long long textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;

@end

