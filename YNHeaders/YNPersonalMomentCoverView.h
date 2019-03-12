//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface YNPersonalMomentCoverView : UIView
{
    _Bool _showSignature;
    NSString *_coverUrl;
    UIImage *_placeholderImage;
    id <YNPersonalMomentCoverViewDelegate> _delegate;
    UIView *_darkBgView;
    UIImageView *_coverImv;
    UILabel *_noCoverTipLb;
    UIView *_avatarView;
    UIImageView *_avatarImv;
    UILabel *_nicknameLabel;
    UILabel *_signatureLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImv; // @synthesize avatarImv=_avatarImv;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *coverImv; // @synthesize coverImv=_coverImv;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) UIView *darkBgView; // @synthesize darkBgView=_darkBgView;
@property(nonatomic) __weak id <YNPersonalMomentCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)goToUserProfileController;
- (id)initWithFriend:(id)arg1 isTimeLine:(_Bool)arg2;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UILabel *noCoverTipLb; // @synthesize noCoverTipLb=_noCoverTipLb;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool showSignature; // @synthesize showSignature=_showSignature;
@property(retain, nonatomic) UILabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
- (void)showChangeCoverAction;
- (void)tapCoverBlankPart;

@end
