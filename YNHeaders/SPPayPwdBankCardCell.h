//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface SPPayPwdBankCardCell : SDPBaseTableViewCell
{
    UILabel *_labelBankCardInfo;
    UIImageView *_arrowImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *labelBankCardInfo; // @synthesize labelBankCardInfo=_labelBankCardInfo;
- (void)loadCellView;
- (void)loadData:(id)arg1;

@end

