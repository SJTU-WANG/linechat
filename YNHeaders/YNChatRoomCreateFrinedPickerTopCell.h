//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIView, YNAvatarView;

@interface YNChatRoomCreateFrinedPickerTopCell : UICollectionViewCell
{
    YNAvatarView *_avatarImageView;
    UIView *_selectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
- (void)setHighlighted:(_Bool)arg1;
- (void)setupViewConstraints;

@end

