//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatConversationViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, YNChatConversation;

@interface YNSubConversationListController : YNChatConversationViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _fromBottlePage;
    YNChatConversation *_collectionConversation;
}

+ (id)subConversationListControllerWithConversation:(id)arg1;
- (void).cxx_destruct;
- (void)YNCommunicationManagerUnableToConnect:(id)arg1;
- (void)YNSessionManagerDidFailToUpdate:(id)arg1;
- (void)YNSessionManagerDidFinishUpdate:(id)arg1;
- (void)YNSessionManagerDidStartInit:(id)arg1;
- (void)changeNavgationTitleWithUnReadCount:(long long)arg1;
- (void)changeTabBarItemBadgeWithUnReadCount:(long long)arg1;
@property(retain, nonatomic) YNChatConversation *collectionConversation; // @synthesize collectionConversation=_collectionConversation;
- (void)doConversationListLoad:(_Bool)arg1;
@property(nonatomic) _Bool fromBottlePage; // @synthesize fromBottlePage=_fromBottlePage;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)serverStatusChanged:(id)arg1 withStatus:(int)arg2;
- (void)syncManager:(id)arg1 didChangedStatus:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

