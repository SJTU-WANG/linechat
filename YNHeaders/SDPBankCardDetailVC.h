//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

@class NSDictionary, NSLayoutConstraint, SDPBankModel, UIButton, UIImageView, UILabel, UIView;

@interface SDPBankCardDetailVC : SDPBaseViewController
{
    SDPBankModel *_model;
    CDUnknownBlockType _unBindCardSuccessBlock;
    CDUnknownBlockType _bindCardSuccessBlock;
    UIView *_viewNaviBg;
    NSLayoutConstraint *_naviHeight;
    UIView *_viewContentBg;
    UIButton *_btnBack;
    UIButton *_btnMore;
    UIImageView *_ivBankBg;
    UIImageView *_ivIcon;
    UILabel *_labelBankName;
    UILabel *_labelCardNum;
    UIView *_viewMiddleBg;
    UILabel *_labelSingleLimit;
    UILabel *_labelDayLimit;
    NSDictionary *_dataDic;
    NSDictionary *_bankDic;
    NSLayoutConstraint *_bottomConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *bankDic; // @synthesize bankDic=_bankDic;
@property(copy, nonatomic) CDUnknownBlockType bindCardSuccessBlock; // @synthesize bindCardSuccessBlock=_bindCardSuccessBlock;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(nonatomic) __weak UIButton *btnMore; // @synthesize btnMore=_btnMore;
@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
- (void)didBtnBackTapped:(id)arg1;
- (void)didBtnMoreTapped:(id)arg1;
@property(nonatomic) __weak UIImageView *ivBankBg; // @synthesize ivBankBg=_ivBankBg;
@property(nonatomic) __weak UIImageView *ivIcon; // @synthesize ivIcon=_ivIcon;
@property(nonatomic) __weak UILabel *labelBankName; // @synthesize labelBankName=_labelBankName;
@property(nonatomic) __weak UILabel *labelCardNum; // @synthesize labelCardNum=_labelCardNum;
@property(nonatomic) __weak UILabel *labelDayLimit; // @synthesize labelDayLimit=_labelDayLimit;
@property(nonatomic) __weak UILabel *labelSingleLimit; // @synthesize labelSingleLimit=_labelSingleLimit;
@property(retain, nonatomic) SDPBankModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NSLayoutConstraint *naviHeight; // @synthesize naviHeight=_naviHeight;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
@property(copy, nonatomic) CDUnknownBlockType unBindCardSuccessBlock; // @synthesize unBindCardSuccessBlock=_unBindCardSuccessBlock;
@property(nonatomic) __weak UIView *viewContentBg; // @synthesize viewContentBg=_viewContentBg;
@property(nonatomic) __weak UIView *viewMiddleBg; // @synthesize viewMiddleBg=_viewMiddleBg;
@property(nonatomic) __weak UIView *viewNaviBg; // @synthesize viewNaviBg=_viewNaviBg;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

