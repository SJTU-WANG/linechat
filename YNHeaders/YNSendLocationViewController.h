//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "AMapSearchDelegate.h"
#import "MKMapViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNMapViewDelegate.h"

@class AMapSearchAPI, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, YNChatConversation, YNLocationManager, YNMapView, YNTableView;

@interface YNSendLocationViewController : YNBaseViewController <UITableViewDataSource, UITableViewDelegate, MKMapViewDelegate, YNMapViewDelegate, AMapSearchDelegate>
{
    _Bool _searching;
    _Bool _needReloadData;
    YNChatConversation *_conversation;
    YNMapView *_mapView;
    YNTableView *_tableView;
    UIImageView *_annotationImageView;
    UIButton *_resetButton;
    NSLayoutConstraint *_mapHeightConstraint;
    NSLayoutConstraint *_annotationCenterYConstraint;
    YNLocationManager *_locationManager;
    NSMutableArray *_dataSoureArray;
    AMapSearchAPI *_search;
    unsigned long long _currentPage;
}

- (void).cxx_destruct;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *annotationCenterYConstraint; // @synthesize annotationCenterYConstraint=_annotationCenterYConstraint;
@property(retain, nonatomic) UIImageView *annotationImageView; // @synthesize annotationImageView=_annotationImageView;
- (void)applicationBecomeActive:(id)arg1;
- (void)checkLocationManagerAuthorized;
@property(retain, nonatomic) YNChatConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *dataSoureArray; // @synthesize dataSoureArray=_dataSoureArray;
- (void)dealloc;
- (void)initNavgationBarItem;
- (void)leftNavgationBarItemAction:(id)arg1;
- (void)loadDataSource;
@property(retain, nonatomic) YNLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSLayoutConstraint *mapHeightConstraint; // @synthesize mapHeightConstraint=_mapHeightConstraint;
@property(retain, nonatomic) YNMapView *mapView; // @synthesize mapView=_mapView;
- (void)mapView:(id)arg1 didMoveStateChange:(unsigned long long)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
@property(nonatomic) _Bool needReloadData; // @synthesize needReloadData=_needReloadData;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)reachabilityChanged:(id)arg1;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
- (void)resetButtonAction:(id)arg1;
- (void)rightNavgationBarItemAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) AMapSearchAPI *search; // @synthesize search=_search;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) YNTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupViewConstraints;
- (void)showUserLocationAnimated:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

