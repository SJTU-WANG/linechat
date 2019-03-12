//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface YNShowPhoneNumberCell : UITableViewCell
{
    UILabel *_phoneLabel;
    id <YNShowPhoneNumberCellDelegate> _delegate;
}

+ (id)cellIdentifier;
+ (float)heightForFirendModel:(id)arg1;
- (void).cxx_destruct;
- (void)clearPhoneNumberButtons;
@property(nonatomic) __weak id <YNShowPhoneNumberCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
- (void)phoneNumberBtnClick:(id)arg1;
- (void)setFirendModel:(id)arg1;

@end
