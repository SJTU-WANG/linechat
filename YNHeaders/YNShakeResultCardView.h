//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIImageView, UILabel;

@interface YNShakeResultCardView : UIView
{
    id <YNShakeResultCardViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIImageView *_genderImageView;
    UILabel *_distanceLabel;
    NSDictionary *_searchedUserInfo;
    struct CGSize _size;
}

- (void).cxx_destruct;
- (void)avatarDidTapped:(id)arg1;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)backgroundDidTapped:(id)arg1;
- (void)configureWithSearchedUserInfo:(id)arg1;
@property(nonatomic) __weak id <YNShakeResultCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
- (id)init;
- (void)initUI;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSDictionary *searchedUserInfo; // @synthesize searchedUserInfo=_searchedUserInfo;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end

