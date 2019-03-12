//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNNetworkDislabelViewDelegate.h"
#import "YNRecommendFriendViewCellDelegate.h"
#import "YNSendFriendApplyViewControllerDelegate.h"

@class NSMutableArray, NSString, UIButton, UIView, YNNetworkDislabelView, YNTableView;

@interface YNRecommendFriendViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, YNRecommendFriendViewCellDelegate, YNSendFriendApplyViewControllerDelegate, YNNetworkDislabelViewDelegate>
{
    _Bool _isAfterLogin;
    _Bool _firstShow;
    id <YNRecommendFriendViewControllerDelegate> _delegate;
    unsigned long long _pageType;
    NSString *_messageId;
    YNTableView *_tableView;
    UIView *_bottomView;
    UIButton *_addButton;
    YNNetworkDislabelView *_networkDislabelView;
    NSMutableArray *_dataSourceArray;
    NSMutableArray *_selectedFriendsArray;
    unsigned long long _currentRequestRecommendType;
    unsigned long long _currentRecommendAccessType;
    NSString *_headTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
- (void)addButtonClick:(id)arg1;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) unsigned long long currentRecommendAccessType; // @synthesize currentRecommendAccessType=_currentRecommendAccessType;
@property(nonatomic) unsigned long long currentRequestRecommendType; // @synthesize currentRequestRecommendType=_currentRequestRecommendType;
@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(nonatomic) id <YNRecommendFriendViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSentApplyToFriends;
- (void)doReport:(_Bool)arg1 friendType:(unsigned long long)arg2;
- (void)drawView;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
- (long long)getApplyTypeByPageType;
- (id)getMutiApplys:(id)arg1;
- (id)getMutiApplysWithSelectFriends:(id)arg1;
- (id)getSelectModelFromSelectFriends:(id)arg1;
- (id)getSourceTypes:(id)arg1;
- (id)getUsrLocation;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
- (id)init;
- (void)initNavigation;
@property(nonatomic) _Bool isAfterLogin; // @synthesize isAfterLogin=_isAfterLogin;
- (void)jumpToMain;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) YNNetworkDislabelView *networkDislabelView; // @synthesize networkDislabelView=_networkDislabelView;
- (void)networkDislabelViewClicked;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void)recommendFriendCellSelectButtonClicked:(id)arg1 subType:(unsigned long long)arg2;
- (void)refreshBottomButtonStatus;
- (void)reloadDataSorce;
- (void)reloadDataSorceForBadNetWork;
- (void)reloadDataSorceWithActivePushRecommedFriendsType:(unsigned long long)arg1 withAccessType:(unsigned long long)arg2;
- (void)reloadDataSorceWithPalmChatServiceRecommedFriendsType:(unsigned long long)arg1 withAccessType:(unsigned long long)arg2;
- (void)reloadDataSorceWithRecommedFriendsType:(unsigned long long)arg1 withAccessType:(unsigned long long)arg2;
- (void)rightBarButtonItemClick:(id)arg1;
@property(retain, nonatomic) NSMutableArray *selectedFriendsArray; // @synthesize selectedFriendsArray=_selectedFriendsArray;
- (void)sendApplyForFriendsUidArray:(id)arg1;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (void)skipButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)thinkAgainButtonClick:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

