//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface SDPPortalMiddleCollectionViewCell : UICollectionViewCell
{
    UIImageView *_ivFunction;
    UIImageView *_ivCorner;
    UILabel *_labelFunction;
    UILabel *_labelSubTitle;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configUIWithImage1:(id)arg1 image2:(id)arg2 text1:(id)arg3 text2:(id)arg4;
- (void)configUIWithModel:(id)arg1;
@property(nonatomic) __weak UIImageView *ivCorner; // @synthesize ivCorner=_ivCorner;
@property(nonatomic) __weak UIImageView *ivFunction; // @synthesize ivFunction=_ivFunction;
@property(nonatomic) __weak UILabel *labelFunction; // @synthesize labelFunction=_labelFunction;
@property(nonatomic) __weak UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
- (void)setSelected:(_Bool)arg1;

@end

