//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView, YNChatChannelListViewModel, YNChatChannelNearbyRoomListViewModel;

@interface YNChatChannelListCell : YNTableViewCell
{
    UIImageView *_categoryImageView;
    UILabel *_categoryTitleLabel;
    UILabel *_recommendLabel;
    UIButton *_pepoleCountButton;
    UILabel *_detailLabel;
    UIView *_lineView;
    YNChatChannelListViewModel *_officialRoomViewModel;
    YNChatChannelNearbyRoomListViewModel *_customRoomViewModel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
@property(retain, nonatomic) UILabel *categoryTitleLabel; // @synthesize categoryTitleLabel=_categoryTitleLabel;
@property(retain, nonatomic) YNChatChannelNearbyRoomListViewModel *customRoomViewModel; // @synthesize customRoomViewModel=_customRoomViewModel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (id)distanceForViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YNChatChannelListViewModel *officialRoomViewModel; // @synthesize officialRoomViewModel=_officialRoomViewModel;
@property(retain, nonatomic) UIButton *pepoleCountButton; // @synthesize pepoleCountButton=_pepoleCountButton;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
- (void)setupViewConstraints;

@end

