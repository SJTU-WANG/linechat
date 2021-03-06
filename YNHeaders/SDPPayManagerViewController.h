//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseViewController.h"

#import "SDPFeedBackViewControllerDelegate.h"
#import "SDPPersonalInfoViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface SDPPayManagerViewController : SDPBaseViewController <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, SDPFeedBackViewControllerDelegate, SDPPersonalInfoViewControllerDelegate>
{
    UITableView *_tvManager;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doQueryRealNameAndSetPayPwdInfoRequestWithType:(id)arg1;
- (void)findBackPayPwd;
- (void)goModifyPayPwdInputOriginalPayPwdViewController;
- (void)gotoBindCardFirstViewControllerWithBindCardType:(unsigned long long)arg1;
- (_Bool)loadData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)postFeedBackRequestSucceed;
- (void)pushFindPayPwdBindCardFirstViewController;
- (void)pushFindPayPwdCardListViewController;
- (void)pushModifyPayPwdViewController;
- (void)pushPersonalInfoViewController;
- (void)pushRealNameAuthenticationView;
- (void)queryHpsCardInfo;
- (void)saveInfoSucceed;
@property(nonatomic) __weak UITableView *tvManager; // @synthesize tvManager=_tvManager;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

