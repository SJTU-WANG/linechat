//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNFindFriendTableViewCell.h"

@class UIImageView, UIView;

@interface YNEnterMomentTableViewCell : YNFindFriendTableViewCell
{
    UIImageView *_failedImageView;
    UIImageView *_userImageView;
    UIView *_userImageRedDotView;
}

+ (id)cellWithIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFailedImageViewHidden:(_Bool)arg1;
@property(retain, nonatomic) UIView *userImageRedDotView; // @synthesize userImageRedDotView=_userImageRedDotView;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void)setUserUrl:(id)arg1;
- (void)setupMomentViewConstraints;

@end

