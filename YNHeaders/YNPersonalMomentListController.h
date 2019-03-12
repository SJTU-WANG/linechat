//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YNCameraViewControllerDelegate.h"
#import "YNMomentManagerDelegate.h"
#import "YNMomentPostViewControllerDelegate.h"
#import "YNPersonalMomentBaseCellDelegate.h"
#import "YNPersonalMomentChangeCoverControllerDelegate.h"
#import "YNPersonalMomentCoverViewDelegate.h"
#import "YNPersonalMomentDetailControllerDelegate.h"
#import "YNPersonalMomentImageCellDelegate.h"
#import "YNPersonalMomentImagePreviewControllerDelegate.h"
#import "YNPersonalMomentNewPostCellDelegate.h"
#import "YNPhotoLibraryViewControllerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, UITableView, YNFriend, YNMomentFeedCursor, YNPersonalMomentCoverView;

@interface YNPersonalMomentListController : YNBaseViewController <UITableViewDelegate, UITableViewDataSource, YNPersonalMomentBaseCellDelegate, YNPersonalMomentImageCellDelegate, YNPersonalMomentNewPostCellDelegate, YNPersonalMomentCoverViewDelegate, YNPhotoLibraryViewControllerDelegate, YNMomentPostViewControllerDelegate, UIScrollViewDelegate, YNPersonalMomentChangeCoverControllerDelegate, YNPersonalMomentDetailControllerDelegate, YNPersonalMomentImagePreviewControllerDelegate, YNMomentManagerDelegate, YNCameraViewControllerDelegate>
{
    YNMomentFeedCursor *_cursor;
    NSObject<OS_dispatch_queue> *_private;
    _Bool _isLoadingMore;
    _Bool _haveMoreFeeds;
    YNFriend *_friend;
    UITableView *_tableView;
    YNPersonalMomentCoverView *_coverView;
    NSMutableArray *_personalFeedSources;
    long long _totalFeedsCount;
}

- (void).cxx_destruct;
- (void)cameraViewController:(id)arg1 didCompleteWithImage:(id)arg2;
- (void)cameraViewController:(id)arg1 didCompleteWithLocalVideo:(id)arg2;
- (void)cameraViewControllerDidCancel:(id)arg1;
- (void)changeCoverSuccess:(id)arg1 selectedImage:(id)arg2;
- (void)continueToPostFeedWithIndex:(long long)arg1;
@property(retain, nonatomic) YNPersonalMomentCoverView *coverView; // @synthesize coverView=_coverView;
- (void)dealloc;
- (void)deleteCellWithFeed:(id)arg1;
- (void)didSingleTapCover;
- (void)didTapCoverBlankPart;
- (void)feedDidCompletePostPrepare:(id)arg1;
- (void)feedDidSendFailed:(id)arg1;
- (void)feedDidSendSuccess:(id)arg1;
- (void)feedDidStartResend:(id)arg1;
@property(retain, nonatomic) YNFriend *friend; // @synthesize friend=_friend;
- (void)handleErrorForFeedAction:(id)arg1;
- (void)handleErrorForLoadingMorePersonalFeeds:(id)arg1;
- (void)handleErrorForNetworkNotReachable;
@property(nonatomic) _Bool haveMoreFeeds; // @synthesize haveMoreFeeds=_haveMoreFeeds;
- (id)initWithFriend:(id)arg1;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
- (void)likeThisCover;
- (void)loadInitData;
- (void)loadMorePersonalFeeds:(id)arg1;
- (void)momentDetailController:(id)arg1 didDeleteFeed:(id)arg2;
- (void)momentImagePreviewController:(id)arg1 didDeleteFeed:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *personalFeedSources; // @synthesize personalFeedSources=_personalFeedSources;
- (void)photoLibrary:(id)arg1 didSelectPhotos:(id)arg2;
- (void)photoLibraryDidCancel:(id)arg1;
- (void)photoLibraryDidTranscodeVideoFailed:(id)arg1;
- (void)postControllerDidCompletePostPrepare:(id)arg1;
- (void)reloadCellWithFeed:(id)arg1;
- (void)rightNarBarButtonAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long totalFeedsCount; // @synthesize totalFeedsCount=_totalFeedsCount;
- (void)setupConstraint;
- (void)setupFeedSourcesWithFeeds:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)showChangeCoverController;
- (void)showCreateNewPostAction;
- (void)showFeedDetailControllerWithFeed:(id)arg1;
- (void)showFirstUseAlertWithIndex:(long long)arg1;
- (void)showImagePreviewControllerWithCurrentFeedId:(id)arg1;
- (void)showLikeSuccess;
- (void)showMorePersonalFeeds:(id)arg1;
- (void)showMsgListController;
- (void)showUserProfileController;
- (void)startLoadingMorePersonalFeeds;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)totalPersonalFeedsCount;
- (void)updateFooterView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
