//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SDPBillModel, UILabel;

@interface SDPBillTableViewCell : UITableViewCell
{
    SDPBillModel *_model;
    UILabel *_tipLabel;
    UILabel *_stateLabel;
    UILabel *_timeLabel;
    UILabel *_moneyLabel;
}

+ (id)dequeueReusableCellWithTableView:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) SDPBillModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void)setup;

@end

