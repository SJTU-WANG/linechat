//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNBaseChatViewControllerDelegate.h"

@class NSMutableArray, NSString, YNBaseChatViewController, YNChatMessageSearchResult, YNTableView;

@interface YNRelevantChatRecordViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, YNBaseChatViewControllerDelegate>
{
    NSString *_searchString;
    YNChatMessageSearchResult *_searchResult;
    YNTableView *_tableView;
    NSMutableArray *_dataSoureArray;
    YNBaseChatViewController *_chatViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void)chatViewControllerDidPreloadMessageCompleted:(id)arg1;
- (id)creatTableViewHeaderView;
@property(retain, nonatomic) NSMutableArray *dataSoureArray; // @synthesize dataSoureArray=_dataSoureArray;
- (void)initNaviBarItem;
- (void)initTableViewDataSource;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) YNChatMessageSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

