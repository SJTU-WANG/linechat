//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YNOpenRedPacketViewModel;

@interface YNOpenRedPacketView : UIView
{
    id <YNOpenRedPacketViewDelegate> _delegate;
    UIImageView *_redPacketTopView;
    UIImageView *_avatarBackgroudImageView;
    UIImageView *_avatarImageView;
    UIView *_nickNameBackgroudView;
    UILabel *_nickNameLabel;
    UILabel *_detailLabel;
    UILabel *_remarkLabel;
    UIButton *_closeButton;
    UIButton *_openButton;
    UIImageView *_redPacketBottomView;
    UIImageView *_bottomIconImageView;
    UIButton *_luckyDetailButton;
    UIImageView *_luckyDetailImageView;
    YNOpenRedPacketViewModel *_openRedPacketViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarBackgroudImageView; // @synthesize avatarBackgroudImageView=_avatarBackgroudImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *bottomIconImageView; // @synthesize bottomIconImageView=_bottomIconImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <YNOpenRedPacketViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *luckyDetailButton; // @synthesize luckyDetailButton=_luckyDetailButton;
@property(retain, nonatomic) UIImageView *luckyDetailImageView; // @synthesize luckyDetailImageView=_luckyDetailImageView;
@property(retain, nonatomic) UIView *nickNameBackgroudView; // @synthesize nickNameBackgroudView=_nickNameBackgroudView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) YNOpenRedPacketViewModel *openRedPacketViewModel; // @synthesize openRedPacketViewModel=_openRedPacketViewModel;
@property(retain, nonatomic) UIImageView *redPacketBottomView; // @synthesize redPacketBottomView=_redPacketBottomView;
@property(retain, nonatomic) UIImageView *redPacketTopView; // @synthesize redPacketTopView=_redPacketTopView;
- (void)redPacketViewButtonClicked:(id)arg1;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
- (void)setupViewConstraints;

@end
