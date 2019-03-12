//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YNRedPacketDetailViewModel;

@interface YNRedPacketDetailHeaderView : UIView
{
    UIImageView *_redPacketTopView;
    UIImageView *_avatarBackgroudImageView;
    UIImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIImageView *_luckyImageView;
    UILabel *_detailLabel;
    UILabel *_moneyLabel;
    UILabel *_unitLabel;
    UIButton *_luckyDetailButton;
    YNRedPacketDetailViewModel *_redPacketDetailModel;
}

+ (double)heightForRedPacketDetailModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarBackgroudImageView; // @synthesize avatarBackgroudImageView=_avatarBackgroudImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *luckyDetailButton; // @synthesize luckyDetailButton=_luckyDetailButton;
@property(retain, nonatomic) UIImageView *luckyImageView; // @synthesize luckyImageView=_luckyImageView;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) YNRedPacketDetailViewModel *redPacketDetailModel; // @synthesize redPacketDetailModel=_redPacketDetailModel;
@property(retain, nonatomic) UIImageView *redPacketTopView; // @synthesize redPacketTopView=_redPacketTopView;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
- (void)setupViewConstraints;

@end
