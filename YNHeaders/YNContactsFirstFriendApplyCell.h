//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class M13BadgeView, NSArray, UIImageView, UILabel, UIView;

@interface YNContactsFirstFriendApplyCell : YNTableViewCell
{
    UILabel *_tagLabel;
    UIView *_avatarContainerView;
    UIImageView *_avatarImageView;
    UIImageView *_contactRecommendImage;
    UILabel *_applyDetailLabel;
    UILabel *_nameLabel;
    UIView *_badgeContainerView;
    M13BadgeView *_badgeView;
    NSArray *_conversations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *applyDetailLabel; // @synthesize applyDetailLabel=_applyDetailLabel;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(retain, nonatomic) M13BadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *contactRecommendImage; // @synthesize contactRecommendImage=_contactRecommendImage;
@property(retain, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)removeAvatarContainerViewSubViews;
- (void)setGuidIconConstraintsOfContactTwoWay:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void)setupViewConstraints;

@end

