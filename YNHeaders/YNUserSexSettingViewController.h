//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, YNFriend;

@interface YNUserSexSettingViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    YNFriend *_me;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNaviBarItem;
@property(retain, nonatomic) YNFriend *me; // @synthesize me=_me;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

