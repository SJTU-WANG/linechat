//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YNVolumeAlertView : UIView
{
    UIImageView *_imageView;
    UILabel *_alertLable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *alertLable; // @synthesize alertLable=_alertLable;
- (void)hiddenAnimation;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupViewConstraints;
- (void)showAnimation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

