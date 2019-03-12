//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ZMVCameraViewController;

@protocol ZMVCameraViewControllerDelegate <NSObject>

@optional
- (void)cameraVC:(ZMVCameraViewController *)arg1 bufferDuration:(double)arg2;
- (void)cameraVC:(ZMVCameraViewController *)arg1 didStart:(_Bool)arg2 avplayerDuration:(double)arg3;
- (void)cameraVC:(ZMVCameraViewController *)arg1 isPlayback:(_Bool)arg2;
- (void)cameraVC:(ZMVCameraViewController *)arg1 photoCompleteWithStr:(NSString *)arg2;
- (void)cameraVC:(ZMVCameraViewController *)arg1 videoCompleteWithStr:(NSString *)arg2 imageStr:(NSString *)arg3;
- (void)clickReturnBtnCameraVC:(ZMVCameraViewController *)arg1;
- (void)photoDidPreviewWithCameraVC:(ZMVCameraViewController *)arg1;
- (void)previewReturnRecordWithCameraVC:(ZMVCameraViewController *)arg1;
@end

