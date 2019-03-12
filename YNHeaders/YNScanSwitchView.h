//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface YNScanSwitchView : UIView
{
    UIButton *_scanQRCodeButton;
    UIButton *_scanBookButton;
    UIButton *_scanStreetButton;
    UIButton *_scanWordButton;
    long long _scanningStyle;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetButtonState;
@property(retain, nonatomic) UIButton *scanBookButton; // @synthesize scanBookButton=_scanBookButton;
@property(retain, nonatomic) UIButton *scanQRCodeButton; // @synthesize scanQRCodeButton=_scanQRCodeButton;
@property(retain, nonatomic) UIButton *scanStreetButton; // @synthesize scanStreetButton=_scanStreetButton;
@property(retain, nonatomic) UIButton *scanWordButton; // @synthesize scanWordButton=_scanWordButton;
@property(nonatomic) long long scanningStyle; // @synthesize scanningStyle=_scanningStyle;

@end
