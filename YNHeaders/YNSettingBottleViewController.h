//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNBaseSwitchTableViewCellDelegate.h"

@class NSString, UIImagePickerController, YNFriend, YNTableView;

@interface YNSettingBottleViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, YNBaseSwitchTableViewCellDelegate>
{
    YNTableView *_tableView;
    UIImagePickerController *_pickerViewController;
    YNFriend *_me;
}

- (void).cxx_destruct;
- (void)checkCarmeraAuthorizationStatus;
- (void)didChangedSwitchTalbleViewCell:(id)arg1 switchView:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)initDataSoucre;
- (void)initNaviBarItem;
@property(retain, nonatomic) YNFriend *me; // @synthesize me=_me;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UIImagePickerController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
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
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
