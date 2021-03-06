//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSString;

@interface YNRedPacketPromotionPlugin : CDVPlugin <MFMessageComposeViewControllerDelegate>
{
}

- (void)_saveImage:(id)arg1 withCallbackId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveImageAndGetPath:(id)arg1 withCallbackId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveImageFailedWithCallbackId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_uploadContact:(id)arg1;
- (void)callMessage:(id)arg1;
- (void)createImg:(id)arg1;
- (void)downloadApp:(id)arg1;
- (void)isAppInstalled:(id)arg1;
- (void)isContactClose:(id)arg1;
- (void)isContactUploaded:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)openApp:(id)arg1;
- (void)openWallet:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)screenshot:(id)arg1;
- (void)setBonusUnreadBadge:(id)arg1;
- (void)showWallet:(id)arg1;
- (void)uploadContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

