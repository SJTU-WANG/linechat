//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface SDPTransferFailedViewController : SDPBaseViewController
{
    UILabel *_titleLabel;
    NSString *_titleStr;
    NSString *_resultStr;
    NSString *_personName;
    NSString *_money;
    NSString *_personNameTitle;
    NSString *_moneyTitle;
    UIImageView *_ivLogo;
    UILabel *_labelResult;
    UILabel *_labelName;
    UILabel *_labelNameContent;
    UILabel *_labelMoney;
    UILabel *_labelMoneyContent;
    UIButton *_btnRepay;
    UIButton *_btnBack;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(nonatomic) __weak UIButton *btnRepay; // @synthesize btnRepay=_btnRepay;
- (void)didBtnBackTapped:(id)arg1;
- (void)didBtnRepayTapped:(id)arg1;
- (void)didTapLeftBarButtonItem;
@property(nonatomic) __weak UIImageView *ivLogo; // @synthesize ivLogo=_ivLogo;
@property(nonatomic) __weak UILabel *labelMoney; // @synthesize labelMoney=_labelMoney;
@property(nonatomic) __weak UILabel *labelMoneyContent; // @synthesize labelMoneyContent=_labelMoneyContent;
@property(nonatomic) __weak UILabel *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) __weak UILabel *labelNameContent; // @synthesize labelNameContent=_labelNameContent;
@property(nonatomic) __weak UILabel *labelResult; // @synthesize labelResult=_labelResult;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *moneyTitle; // @synthesize moneyTitle=_moneyTitle;
@property(copy, nonatomic) NSString *personName; // @synthesize personName=_personName;
@property(copy, nonatomic) NSString *personNameTitle; // @synthesize personNameTitle=_personNameTitle;
@property(copy, nonatomic) NSString *resultStr; // @synthesize resultStr=_resultStr;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

@end
