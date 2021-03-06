//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class NSLayoutConstraint, UILabel, UIView, YNAvatarView;

@interface YNPersonListViewItemCell : YNTableViewCell
{
    YNAvatarView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    UIView *_topLine;
    UIView *_bottomLine;
    NSLayoutConstraint *_remarkLabelHeightConstraint;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) YNAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void)configureWithItemModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) NSLayoutConstraint *remarkLabelHeightConstraint; // @synthesize remarkLabelHeightConstraint=_remarkLabelHeightConstraint;
- (void)setLayoutConstraints;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;

@end

