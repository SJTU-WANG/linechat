//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView, UIView;

@interface SDPBankCardListVC : SDPBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _bindCardSuccessBlock;
    UITableView *_cardListTableView;
    NSArray *_bankCardArray;
    UIView *_naviView;
}

- (void).cxx_destruct;
- (void)backBtnAcion:(id)arg1;
@property(retain, nonatomic) NSArray *bankCardArray; // @synthesize bankCardArray=_bankCardArray;
@property(copy, nonatomic) CDUnknownBlockType bindCardSuccessBlock; // @synthesize bindCardSuccessBlock=_bindCardSuccessBlock;
@property(retain, nonatomic) UITableView *cardListTableView; // @synthesize cardListTableView=_cardListTableView;
- (void)didBtnQuestionTapped;
- (void)doQueryHpsCardRequest;
- (void)doQureySetPayPwdInfoRequest;
- (void)handleBlockSuccessActionWithAlertStr:(id)arg1;
- (_Bool)loadData;
- (void)loadView;
@property(retain, nonatomic) UIView *naviView; // @synthesize naviView=_naviView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (void)pushBindCardFirstViewController;
- (void)pushCardInfoViewContrllerWithBankModel:(id)arg1;
- (void)pushVerifyPayPwdViewController;
- (void)setupNavigaion;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
