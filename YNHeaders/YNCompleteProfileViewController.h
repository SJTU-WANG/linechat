//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNUserBirthdayPickerViewDelegate.h"
#import "YNUserCountryPickerViewControllerDelegate.h"
#import "YNUserSexPickerViewDelegate.h"

@class NSString, YNFriend, YNTableView;

@interface YNCompleteProfileViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, YNUserCountryPickerViewControllerDelegate, YNUserSexPickerViewDelegate, YNUserBirthdayPickerViewDelegate>
{
    id <YNCompleteProfileViewControllerDelegate> _delegate;
    YNTableView *_tableView;
    YNFriend *_me;
    double _headerHeight;
}

- (void).cxx_destruct;
- (void)back:(id)arg1;
- (id)birthday;
@property(nonatomic) __weak id <YNCompleteProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectedCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (id)gender;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (id)hobby;
- (void)initNaviBarItem;
- (void)initTableView;
@property(retain, nonatomic) YNFriend *me; // @synthesize me=_me;
- (_Bool)navigationCouldClick;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)savePersonalInfo:(id)arg1;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (void)showBirthdayPickerView;
- (id)showRegionName;
- (void)showSexPickerView;
- (id)signature;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)userBirthdayPickerView:(id)arg1 didSelectdBirthday:(id)arg2;
- (void)userSexPickerView:(id)arg1 didSelectedSex:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
