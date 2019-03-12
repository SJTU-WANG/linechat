//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "YNBottleInfoSettingViewControllerDelegate.h"
#import "YNNewCompleteProfileViewControllerDelegate.h"

@class NSString;

@interface YNContactsPluginUserInfo : CDVPlugin <YNBottleInfoSettingViewControllerDelegate, YNNewCompleteProfileViewControllerDelegate>
{
}

- (void)bottleInfoSettingViewControllerDidSave;
- (void)completeProfileViewControllerDidCanceled;
- (void)completeProfileViewControllerDidProfileCompleted;
- (void)dismissedBottleInfoSettingViewControllerWithoutAnimated;
- (void)jumpToBottle:(id)arg1;
- (void)jumpToNearbyPeople:(id)arg1;
- (void)jumpToNearbyPeopleNew:(id)arg1;
- (void)private_jumpToNearbyPeople:(long long)arg1;
- (void)uploadAddressList:(id)arg1;
- (void)uploadContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

