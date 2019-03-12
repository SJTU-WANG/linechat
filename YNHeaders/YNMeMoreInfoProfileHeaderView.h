//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UIImageView, UILabel;

@interface YNMeMoreInfoProfileHeaderView : UITableViewHeaderFooterView
{
    id <YNMeMoreInfoProfileHeaderViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_signatureLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)avatarTapAction:(id)arg1;
- (void)configureHeaderWithProfile:(id)arg1;
@property(nonatomic) __weak id <YNMeMoreInfoProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithReuseIdentifier:(id)arg1;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
- (void)signatureButtonAction:(id)arg1;

@end

