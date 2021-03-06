//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CNContactPickerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, YNBaseViewController;

@interface YNTextMessageURLHandle : NSObject <UIActionSheetDelegate, ABNewPersonViewControllerDelegate, CNContactViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate>
{
    NSString *_urlString;
    unsigned long long _handleType;
    YNBaseViewController *_viewController;
}

- (void).cxx_destruct;
- (void)LongPressUrlPaste;
- (void)TapPhoneNumberAddToContacts:(id)arg1;
- (void)TapPhoneNumberCall;
- (void)TapPhoneNumberPaste;
- (void)addToExistingContacts:(id)arg1 vc:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)createNewContactWithNumber:(id)arg1 vc:(id)arg2;
- (void)executeURLHandleLongPressUrlWithController:(id)arg1;
- (void)executeURLHandleTapPhoneNumberWithController:(id)arg1;
- (void)executeUrlHandleWithController:(id)arg1;
@property(nonatomic) unsigned long long handleType; // @synthesize handleType=_handleType;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(const void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)requestContactAccess:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)setValueForContact:(id)arg1 existContact:(_Bool)arg2 number:(id)arg3;
@property(retain, nonatomic) YNBaseViewController *viewController; // @synthesize viewController=_viewController;
- (void)showNoAccessAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

