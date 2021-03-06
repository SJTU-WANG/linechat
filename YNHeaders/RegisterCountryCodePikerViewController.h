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

@class NSArray, NSMutableArray, NSString, UISearchBar, UISearchDisplayController, UITableView;

@interface RegisterCountryCodePikerViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    id <RegisterCountryCodePickerDelegate> _delegate;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_mySearchDisplayController;
    NSArray *_countrySectionTitleArray;
    NSArray *_countryCodeArray;
    NSArray *_countrysArray;
    NSMutableArray *_searchedArray;
}

- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)arg1;
@property(retain, nonatomic) NSArray *countryCodeArray; // @synthesize countryCodeArray=_countryCodeArray;
@property(retain, nonatomic) NSArray *countrySectionTitleArray; // @synthesize countrySectionTitleArray=_countrySectionTitleArray;
@property(retain, nonatomic) NSArray *countrysArray; // @synthesize countrysArray=_countrysArray;
@property(nonatomic) __weak id <RegisterCountryCodePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCountryCodeWithCountryName:(id)arg1;
- (id)getCountryCodeWithIndexPath:(id)arg1;
- (void)initData;
- (void)initNavItem;
@property(retain, nonatomic) UISearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarCancelButtonShow;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
@property(retain, nonatomic) NSMutableArray *searchedArray; // @synthesize searchedArray=_searchedArray;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)transitionString:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

