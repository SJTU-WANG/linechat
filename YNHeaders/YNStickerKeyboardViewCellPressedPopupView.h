//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLAnimatedImageView, UIImageView, YNEmotionKeyboardKeyItem;

@interface YNStickerKeyboardViewCellPressedPopupView : UIView
{
    YNEmotionKeyboardKeyItem *_keyItem;
    double _cellCenterX;
    UIImageView *_backgroudImageView;
    FLAnimatedImageView *_previewImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroudImageView; // @synthesize backgroudImageView=_backgroudImageView;
@property(nonatomic) double cellCenterX; // @synthesize cellCenterX=_cellCenterX;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YNEmotionKeyboardKeyItem *keyItem; // @synthesize keyItem=_keyItem;
- (void)layoutSubviews;
@property(retain, nonatomic) FLAnimatedImageView *previewImageView; // @synthesize previewImageView=_previewImageView;

@end

