//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNContactUploadManager;

@protocol YNContactUploadManagerDelegate <NSObject>
- (void)didChangedContacts;
- (void)didFinishedUpdateContactName:(YNContactUploadManager *)arg1;

@optional
- (void)didGetAddressBookAuthorization:(YNContactUploadManager *)arg1;
@end

