//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, YNChatMessage;

@interface YNPhotoListCollectionViewCell : UICollectionViewCell
{
    UIImageView *_photoImageView;
    YNChatMessage *_chatMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void)setupViewConstraints;

@end
