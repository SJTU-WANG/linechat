//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YNSmallImageViewTableViewCell : YNTableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIView *_bottomViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *bottomViews; // @synthesize bottomViews=_bottomViews;
- (void)configureWithFriend:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;

@end
