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

@class NSMutableArray, NSMutableDictionary, NSString, UISearchDisplayController, YNFriend, YNSearchBar, YNTableView;

@interface YNSelectFriendViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    id <YNSelectFriendViewControllerDelegate> _delegate;
    YNFriend *_currentChatFriend;
    YNTableView *_tableView;
    NSMutableArray *_friendsArray;
    NSMutableDictionary *_friendsDataSource;
    NSMutableArray *_sectionsArray;
    NSMutableArray *_searchedArray;
    YNSearchBar *_searchBar;
    UISearchDisplayController *_mySearchDisplayController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNFriend *currentChatFriend; // @synthesize currentChatFriend=_currentChatFriend;
- (void)dealloc;
@property(nonatomic) id <YNSelectFriendViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)friendAtIndex:(id)arg1;
@property(retain, nonatomic) NSMutableArray *friendsArray; // @synthesize friendsArray=_friendsArray;
@property(retain, nonatomic) NSMutableDictionary *friendsDataSource; // @synthesize friendsDataSource=_friendsDataSource;
- (id)init;
- (void)initFriendsDataSource;
- (void)initNaviBarItem;
- (void)leftBarButtonItemClick:(id)arg1;
@property(retain, nonatomic) UISearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) YNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
@property(retain, nonatomic) NSMutableArray *searchedArray; // @synthesize searchedArray=_searchedArray;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @synthesize sectionsArray=_sectionsArray;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)transitionString:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

