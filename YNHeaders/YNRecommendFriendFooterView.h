//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UILabel;

@interface YNRecommendFriendFooterView : YNTableViewCell
{
    UILabel *_footerLabel;
    UILabel *_footerDetailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *footerDetailLabel; // @synthesize footerDetailLabel=_footerDetailLabel;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFootLabel:(id)arg1 footerDetail:(id)arg2;

@end

