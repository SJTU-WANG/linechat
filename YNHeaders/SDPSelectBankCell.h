//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SDPSelectBankModel, UIButton, UILabel;

@interface SDPSelectBankCell : UITableViewCell
{
    UILabel *_tipLabel;
    UIButton *_selectedBtn;
    SDPSelectBankModel *_model;
}

+ (id)dequeueReusableCellWithTableView:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) SDPSelectBankModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void)setup;

@end
