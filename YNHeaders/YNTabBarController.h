//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "UITabBarControllerDelegate.h"
#import "YNBaseChatViewControllerDelegate.h"
#import "YNChatCenterDelegate.h"
#import "YNMomentPostViewControllerDelegate.h"
#import "YNRecentChatPickerViewControllerDelegate.h"
#import "YNSyncConfigsManagerDelegate.h"

@class NSString, UINavigationController, YNBaseChatViewController;

@interface YNTabBarController : UITabBarController <UITabBarControllerDelegate, YNRecentChatPickerViewControllerDelegate, YNBaseChatViewControllerDelegate, YNSyncConfigsManagerDelegate, YNMomentPostViewControllerDelegate, YNChatCenterDelegate>
{
    id <YNTabBarControllerDelegate> _tapDelegate;
    UINavigationController *_chatNavigationController;
    UINavigationController *_contactsNavigationController;
    UINavigationController *_discoverNavigationController;
    UINavigationController *_meMoreInfoNavigationController;
    YNBaseChatViewController *_chatViewController;
}

- (void).cxx_destruct;
- (void)addDoubleTapGestureForTabbar;
- (void)applicationDidBecomeActive:(id)arg1;
@property(retain, nonatomic) UINavigationController *chatNavigationController; // @synthesize chatNavigationController=_chatNavigationController;
@property(retain, nonatomic) YNBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void)chatViewControllerDidPreloadMessageCompleted:(id)arg1;
- (void)configsManagerDidUpdateDynamicConfig:(id)arg1;
@property(retain, nonatomic) UINavigationController *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
- (void)dealloc;
- (void)didFinishForward:(id)arg1 toTargets:(id)arg2;
@property(retain, nonatomic) UINavigationController *discoverNavigationController; // @synthesize discoverNavigationController=_discoverNavigationController;
- (void)fastEnterMyQR;
- (void)fastEnterNearbyPeople;
- (void)fastEnterScan;
- (void)forwardFileMessageToFriendsWithUrl:(id)arg1;
- (void)handleDoubleTapGesturre:(id)arg1;
- (id)init;
- (void)jumpBackToExistChat:(id)arg1;
- (void)jumpToBottle:(id)arg1;
- (void)jumpToChat;
- (void)jumpToChatChannelListController;
- (void)jumpToChatInChatRoom:(id)arg1;
- (void)jumpToChatWithFriend:(id)arg1;
- (void)jumpToFriendListTab;
- (void)jumpToMoment;
- (void)jumpToMomentListController;
- (void)jumpToMomentPost:(id)arg1;
- (void)jumpToNearbyPeopleForFromType:(long long)arg1;
- (void)jumpToPageFromRouterAction:(id)arg1;
- (void)jumpToRecommendFriendVC;
- (void)jumpToReward;
- (void)jumpToRoomInfoWithConversation:(id)arg1;
- (void)jumpToUserProfileWithFriend:(id)arg1;
- (void)jumpToWalletController;
- (void)jumpToWebUrl:(id)arg1;
@property(retain, nonatomic) UINavigationController *meMoreInfoNavigationController; // @synthesize meMoreInfoNavigationController=_meMoreInfoNavigationController;
- (void)newVersionFlagDidChange:(id)arg1;
- (void)popupWebView;
- (void)postControllerDidCompletePostPrepare:(id)arg1;
- (void)postfinished;
- (void)receivedBatchSyncMessages;
- (void)receivedNewPopupMessage;
- (void)resetChatTabsToRoot;
- (void)resetTabsToRoot;
@property(nonatomic) __weak id <YNTabBarControllerDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void)shareFileMessageToFriendsWithUrl:(id)arg1;
- (void)shareImageMessageToFriendsWithImg:(id)arg1;
- (void)shareUrlMessageToFriendsWithWebSite:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

