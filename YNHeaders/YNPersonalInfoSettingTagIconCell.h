//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIImageView, UILabel;

@interface YNPersonalInfoSettingTagIconCell : YNTableViewCell
{
    UIImageView *_myImageView;
    UILabel *_tagLabel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIImageView *myImageView; // @synthesize myImageView=_myImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void)setupViewConstraints;

@end
