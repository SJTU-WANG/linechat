//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAsset.h"

@interface PHAsset (UIImage)
- (void)getFullScreenImage:(CDUnknownBlockType)arg1;
- (void)getFullScreenImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)getICloudThumbnailImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)getImageData:(CDUnknownBlockType)arg1;
- (void)getImageDataSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)getImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 deliveryMode:(long long)arg3 synchronous:(_Bool)arg4 comletion:(CDUnknownBlockType)arg5;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getOriginalImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)getScaleAspectedThumbnailImage:(CDUnknownBlockType)arg1;
- (void)getThumbnailImage:(CDUnknownBlockType)arg1;
- (void)getThumbnailImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (_Bool)iniCloud;
- (int)requestPHAssetInfo:(_Bool)arg1 accessNetwork:(_Bool)arg2 withProgressHandler:(CDUnknownBlockType)arg3 result:(CDUnknownBlockType)arg4;
- (int)requestPHAssetInfoAsync:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
@end

