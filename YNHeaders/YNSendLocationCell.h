//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIImageView, UILabel, YNSendLocation;

@interface YNSendLocationCell : YNTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_addressLabel;
    UIImageView *_selectedImageView;
    YNSendLocation *_locationModel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) YNSendLocation *locationModel; // @synthesize locationModel=_locationModel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void)setupViewConstraints;

@end
