//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIActivityIndicatorView, UIImageView, UIView, YNEmotionKeyboardKeyItem;

@interface YNEmotionKeyboardKeyCell : UICollectionViewCell
{
    UIView *_selectedView;
    UIImageView *_emotionImageView;
    YNEmotionKeyboardKeyItem *_keyItem;
    UIActivityIndicatorView *_loadingIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *emotionImageView; // @synthesize emotionImageView=_emotionImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YNEmotionKeyboardKeyItem *keyItem; // @synthesize keyItem=_keyItem;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
- (void)setSelected:(_Bool)arg1;
- (void)setupViewConstraints;
- (void)updateViewConstraintsByEmtionSize:(struct CGSize)arg1;

@end

