//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, YNTableView;

@interface YNMeMoreInfoViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    YNTableView *_tableView;
    NSMutableArray *_dynamicRowsForSection1;
    NSMutableArray *_dynamicRowsForSection2;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *dynamicRowsForSection1; // @synthesize dynamicRowsForSection1=_dynamicRowsForSection1;
@property(retain, nonatomic) NSMutableArray *dynamicRowsForSection2; // @synthesize dynamicRowsForSection2=_dynamicRowsForSection2;
- (id)init;
- (void)newVersionFlagDidChange:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webControllerWillDisappear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
