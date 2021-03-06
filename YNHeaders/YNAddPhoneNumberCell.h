//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface YNAddPhoneNumberCell : UITableViewCell
{
    id <YNAddPhoneNumberCellDelegate> _delegate;
    UIImageView *_addImageView;
    UILabel *_addLabel;
    UIButton *_clickButton;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addImageView; // @synthesize addImageView=_addImageView;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
- (void)clickButtonAction:(id)arg1;
@property(nonatomic) id <YNAddPhoneNumberCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViewConstraints;

@end

