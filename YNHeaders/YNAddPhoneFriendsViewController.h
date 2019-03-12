//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNNewFriendViewTableViewCellDelegate.h"
#import "YNSendFriendApplyViewControllerDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UISearchDisplayController, YNContactRecord, YNSearchBar, YNTableView;

@interface YNAddPhoneFriendsViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, YNNewFriendViewTableViewCellDelegate, YNSendFriendApplyViewControllerDelegate>
{
    _Bool _isFromLoginTips;
    _Bool _isViewDisappear;
    YNTableView *_tableView;
    YNSearchBar *_searchBar;
    UISearchDisplayController *_mySearchDisplayController;
    NSArray *_contactRecordArray;
    NSMutableDictionary *_contactRecordDictionary;
    NSArray *_titlesArray;
    NSMutableArray *_sectionsArray;
    NSMutableDictionary *_recordsDataSource;
    NSMutableArray *_searchedArray;
    NSMutableArray *_didSendUidArray;
    YNContactRecord *_currentRecord;
    long long _allDownloadNumber;
}

- (void).cxx_destruct;
- (void)addressBookAuthorizedFail;
- (void)addressContactsNotExist;
@property(nonatomic) long long allDownloadNumber; // @synthesize allDownloadNumber=_allDownloadNumber;
- (void)commitContact;
@property(retain, nonatomic) NSArray *contactRecordArray; // @synthesize contactRecordArray=_contactRecordArray;
@property(retain, nonatomic) NSMutableDictionary *contactRecordDictionary; // @synthesize contactRecordDictionary=_contactRecordDictionary;
- (void)continueToLoadContactMetchInfo;
@property(retain, nonatomic) YNContactRecord *currentRecord; // @synthesize currentRecord=_currentRecord;
- (void)dealloc;
- (void)didChangedContacts;
- (void)didClickedAgreeButtonInCell:(id)arg1 withContactRecord:(id)arg2;
- (void)didSendFriendApplyForUserUid:(id)arg1;
@property(retain, nonatomic) NSMutableArray *didSendUidArray; // @synthesize didSendUidArray=_didSendUidArray;
- (void)displayPrompt:(id)arg1;
- (void)formatContactRecordArray:(id)arg1;
- (id)init;
- (void)initFriendsDataSource;
- (void)initNaviBarItem;
- (void)initTableSource;
@property(nonatomic) _Bool isFromLoginTips; // @synthesize isFromLoginTips=_isFromLoginTips;
@property(nonatomic) _Bool isViewDisappear; // @synthesize isViewDisappear=_isViewDisappear;
- (void)jumpToMain;
@property(retain, nonatomic) UISearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recordsDataSource; // @synthesize recordsDataSource=_recordsDataSource;
- (void)refreshData;
- (void)rightBarButtonItemClick:(id)arg1;
@property(retain, nonatomic) YNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
@property(retain, nonatomic) NSMutableArray *searchedArray; // @synthesize searchedArray=_searchedArray;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @synthesize sectionsArray=_sectionsArray;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *titlesArray; // @synthesize titlesArray=_titlesArray;
- (void)setupViewConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)transitionEnabledString:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
