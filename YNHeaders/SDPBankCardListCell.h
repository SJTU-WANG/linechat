//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface SDPBankCardListCell : UITableViewCell
{
    UIView *_viewBg;
    UIImageView *_ivWatermark;
    UIImageView *_ivBankBg;
    UIImageView *_ivIcon;
    UILabel *_labelBankName;
    UILabel *_labelBankType;
    UILabel *_labelCardStart;
    UILabel *_labelCardNum;
}

- (void).cxx_destruct;
- (void)configUIWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIImageView *ivBankBg; // @synthesize ivBankBg=_ivBankBg;
@property(retain, nonatomic) UIImageView *ivIcon; // @synthesize ivIcon=_ivIcon;
@property(retain, nonatomic) UIImageView *ivWatermark; // @synthesize ivWatermark=_ivWatermark;
@property(retain, nonatomic) UILabel *labelBankName; // @synthesize labelBankName=_labelBankName;
@property(retain, nonatomic) UILabel *labelBankType; // @synthesize labelBankType=_labelBankType;
@property(retain, nonatomic) UILabel *labelCardNum; // @synthesize labelCardNum=_labelCardNum;
@property(retain, nonatomic) UILabel *labelCardStart; // @synthesize labelCardStart=_labelCardStart;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *viewBg; // @synthesize viewBg=_viewBg;

@end

