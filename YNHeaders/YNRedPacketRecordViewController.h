//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNRedPacketRecordHeaderViewDelegate.h"

@class NSMutableArray, NSString, UIView, YNRedPacketRecordHeaderView, YNRedPacketRecordViewModel, YNTableView;

@interface YNRedPacketRecordViewController : YNBaseViewController <UITableViewDelegate, UITableViewDataSource, YNRedPacketRecordHeaderViewDelegate, UIScrollViewDelegate>
{
    _Bool _loading;
    YNRedPacketRecordHeaderView *_headerView;
    YNTableView *_tableView;
    UIView *_topBackgroudView;
    NSMutableArray *_redArray;
    long long _index;
    unsigned long long _dataState;
    YNRedPacketRecordViewModel *_redPacketRecordViewModel;
    unsigned long long _showType;
    long long _indexTs;
}

- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
- (void)chooseRedEnvelopeTime:(id)arg1;
@property(nonatomic) unsigned long long dataState; // @synthesize dataState=_dataState;
- (void)didReceiveMemoryWarning;
- (void)drawRedPacketRecordView;
@property(retain, nonatomic) YNRedPacketRecordHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long indexTs; // @synthesize indexTs=_indexTs;
- (void)initNaviBarItem;
- (void)loadMoreData;
- (void)loadNewDate:(id)arg1;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *redArray; // @synthesize redArray=_redArray;
@property(retain, nonatomic) YNRedPacketRecordViewModel *redPacketRecordViewModel; // @synthesize redPacketRecordViewModel=_redPacketRecordViewModel;
- (void)refreshReceivedView;
- (void)refreshSentView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectRedPacketType:(id)arg1;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topBackgroudView; // @synthesize topBackgroudView=_topBackgroudView;
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
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

