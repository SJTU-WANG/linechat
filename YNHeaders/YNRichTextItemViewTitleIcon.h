//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNRichTextBaseItemView.h"

@class UIImageView, UILabel, UIView;

@interface YNRichTextItemViewTitleIcon : YNRichTextBaseItemView
{
    UIView *_lineView;
    UILabel *_titleView;
    UIImageView *_imageView;
    UIImageView *_adImageView;
}

+ (double)viewHeight:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)setItem:(id)arg1;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
- (void)setupViewConstraints;
- (double)viewHeight;

@end

