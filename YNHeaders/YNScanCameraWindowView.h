//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface YNScanCameraWindowView : UIView
{
    UIImageView *_leftTopImageView;
    UIImageView *_leftBottomImageView;
    UIImageView *_rightTopImageView;
    UIImageView *_rightBottomImageView;
    UIView *_leftLineView;
    UIView *_topLineView;
    UIView *_rightLineView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *leftBottomImageView; // @synthesize leftBottomImageView=_leftBottomImageView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UIImageView *leftTopImageView; // @synthesize leftTopImageView=_leftTopImageView;
@property(retain, nonatomic) UIImageView *rightBottomImageView; // @synthesize rightBottomImageView=_rightBottomImageView;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIImageView *rightTopImageView; // @synthesize rightTopImageView=_rightTopImageView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
- (void)setupViewConstraints;

@end

