//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface YNFileMessageIconView : UIView
{
    UIImage *_iconImage;
    NSString *_iconName;
    UIImageView *_imageView;
    UILabel *_iconLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 withIconNameFontSize:(long long)arg2 withCornerRadius:(double)arg3 withIconLabelEdgeInsets:(struct UIEdgeInsets)arg4;

@end

