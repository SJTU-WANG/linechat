//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNWebContainerControllerDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UISearchBar, UIView, UIViewController, YNSearchBar, YNTableView;

@interface YNMiniProgramsSearchViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, YNWebContainerControllerDelegate>
{
    _Bool lastNavgationBarHidden;
    _Bool lastTabbarHidden;
    long long lastStatusBarStyle;
    NSLayoutConstraint *searchBackButtonLeadingConstraint;
    NSString *inputSearchStr;
    NSLayoutConstraint *tableViewLeftConstraint;
    NSArray *_originalPkgArray;
    UISearchBar *_lastSearchBar;
    UIViewController *_lastViewController;
    UIView *_statusBarBackView;
    UIButton *_searchBackButton;
    YNSearchBar *_searchBar;
    YNTableView *_tableView;
    UIView *_backgroudView;
    UIButton *_backButton;
    UIButton *_cancelButton;
    UILabel *_searchNotResultLabel;
    UILabel *_searchMoreLabel;
    UIView *_lineView;
    NSArray *_searchPkgArray;
}

- (void).cxx_destruct;
- (void)addScreenEdgePanGestureRecognizer;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancelEditingAndRemoveForSuperView:(id)arg1;
- (void)dealloc;
- (void)endEditingAddRemoveForSuperView;
- (void)handleErrorForNetworkNotReachable;
- (void)handlePopRecognizer:(id)arg1;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
@property(retain, nonatomic) UISearchBar *lastSearchBar; // @synthesize lastSearchBar=_lastSearchBar;
@property(retain, nonatomic) UIViewController *lastViewController; // @synthesize lastViewController=_lastViewController;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)loadHtmlFinish:(id)arg1 sucess:(_Bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSArray *originalPkgArray; // @synthesize originalPkgArray=_originalPkgArray;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UIButton *searchBackButton; // @synthesize searchBackButton=_searchBackButton;
- (void)searchBackButtonClick:(id)arg1;
@property(retain, nonatomic) YNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarCancelButtonClicked:(id)arg1;
@property(retain, nonatomic) UILabel *searchMoreLabel; // @synthesize searchMoreLabel=_searchMoreLabel;
@property(retain, nonatomic) UILabel *searchNotResultLabel; // @synthesize searchNotResultLabel=_searchNotResultLabel;
@property(retain, nonatomic) NSArray *searchPkgArray; // @synthesize searchPkgArray=_searchPkgArray;
- (void)setCorrectFocus;
@property(retain, nonatomic) UIView *statusBarBackView; // @synthesize statusBarBackView=_statusBarBackView;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (void)showGlobalSearchViewController;
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
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

