//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class MASConstraint, UILabel;

@interface YNCompleteProfileCell : YNTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    MASConstraint *_infoLabelLConstraint;
}

+ (double)heightForSignature:(id)arg1 withTitle:(id)arg2;
+ (struct CGRect)whatupLabelBounds;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain) MASConstraint *infoLabelLConstraint; // @synthesize infoLabelLConstraint=_infoLabelLConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setAccessoryType:(long long)arg1;
- (void)setTitle:(id)arg1 detail:(id)arg2 required:(_Bool)arg3;
- (void)setTitle:(id)arg1 detail:(id)arg2 requiredFieldText:(id)arg3;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setUpViewConstraints;

@end

