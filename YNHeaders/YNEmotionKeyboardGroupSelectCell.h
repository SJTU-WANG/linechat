//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UIView;

@interface YNEmotionKeyboardGroupSelectCell : UICollectionViewCell
{
    UIImageView *_emotionImageView;
    UIImageView *_selectedView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *emotionImageView; // @synthesize emotionImageView=_emotionImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) _Bool selected;
- (void)setupViewConstraints;

@end

