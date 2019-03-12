//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNOpenRedPacketViewDelegate.h"

@class CLLocation, NSString, UIView, YNLocationManager, YNOpenRedPacketView, YNOpenRedPacketViewModel, YNRedPacketDetailHeaderView, YNRedPacketDetailViewModel, YNTableView;

@interface YNRedPacketDetailViewController : YNBaseViewController <UITableViewDelegate, UITableViewDataSource, YNOpenRedPacketViewDelegate>
{
    _Bool _isFromRedPacketRecord;
    id <YNRedPacketDetailViewControllerDelegate> _delegate;
    NSString *_redId;
    NSString *_vcode;
    YNOpenRedPacketViewModel *_redPacketCardViewModel;
    YNRedPacketDetailViewModel *_redPacketDetailViewModel;
    id _context;
    unsigned long long _viewType;
    YNOpenRedPacketView *_openRedPacketView;
    UIView *_detailBackgroudView;
    UIView *_topBackgroudView;
    YNTableView *_tableView;
    YNRedPacketDetailHeaderView *_headerView;
    YNLocationManager *_locationManager;
    CLLocation *_lbsLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)dealloc;
@property(nonatomic) __weak id <YNRedPacketDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *detailBackgroudView; // @synthesize detailBackgroudView=_detailBackgroudView;
- (void)dismissController:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)drawDetailView;
- (double)footerViewHeight;
@property(retain, nonatomic) YNRedPacketDetailHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)headerViewButtonClick:(id)arg1;
- (id)init;
- (void)initNavigationItem;
- (id)initWithViewType:(unsigned long long)arg1;
@property(nonatomic) _Bool isFromRedPacketRecord; // @synthesize isFromRedPacketRecord=_isFromRedPacketRecord;
@property(retain, nonatomic) CLLocation *lbsLocation; // @synthesize lbsLocation=_lbsLocation;
- (void)loadMore;
@property(retain, nonatomic) YNLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)navigationBackItemClick:(id)arg1;
- (void)navigationCloseItemClick:(id)arg1;
- (void)navigationRightItemClick:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) YNOpenRedPacketView *openRedPacketView; // @synthesize openRedPacketView=_openRedPacketView;
- (void)openRedPacketViewButtonClicked:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *redId; // @synthesize redId=_redId;
@property(retain, nonatomic) YNOpenRedPacketViewModel *redPacketCardViewModel; // @synthesize redPacketCardViewModel=_redPacketCardViewModel;
@property(retain, nonatomic) YNRedPacketDetailViewModel *redPacketDetailViewModel; // @synthesize redPacketDetailViewModel=_redPacketDetailViewModel;
- (void)refreshView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBackBarButtonItem;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topBackgroudView; // @synthesize topBackgroudView=_topBackgroudView;
@property(retain, nonatomic) NSString *vcode; // @synthesize vcode=_vcode;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void)showController:(id)arg1;
- (void)startAnimationChangeToDetailViewType;
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
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
