//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNRoomChatViewController.h"

@class UIView;

@interface YNPreivewRoomChatController : YNRoomChatViewController
{
    _Bool _isCommitedForPreviewing;
    UIView *_topBannerView;
}

- (void).cxx_destruct;
- (void)addUnreadMessagejumpView;
- (void)configureNavigation;
- (void)dealloc;
- (void)deleteConversation;
- (void)didReceiveMemoryWarning;
- (void)fetchConversationUnreadAndUpdateBackBarButtonTitle;
@property(nonatomic) _Bool isCommitedForPreviewing; // @synthesize isCommitedForPreviewing=_isCommitedForPreviewing;
- (void)markUnread;
- (void)messagesPreloadingDidFinish;
- (id)previewActionItems;
@property(retain, nonatomic) UIView *topBannerView; // @synthesize topBannerView=_topBannerView;
- (void)setupChatInputSwitchViewConstraints;
- (void)setupEmotionKeyboardViewConstraints;
- (void)setupViewConstraints;
- (void)showTopBannerView;
- (void)switchMute;
- (void)switchSticky;
- (void)updateNavigationTitleViewLayout;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

