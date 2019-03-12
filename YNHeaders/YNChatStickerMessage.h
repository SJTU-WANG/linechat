//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatMessage.h"

@class UIImage;

@interface YNChatStickerMessage : YNChatMessage
{
    UIImage *_image;
    UIImage *_thumbnailImage;
}

- (void).cxx_destruct;
- (_Bool)autoDownloadEnable;
- (void)clearImageData;
- (void)clearMediaResource;
- (void)confitureFromInfo;
- (void)copyMessageResourceToMessage:(id)arg1;
- (void)copyResourceFromUrlCache:(id)arg1 toPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)deleteLocalImageData;
- (_Bool)hasSource;
- (id)image;
- (id)imageLocalPath;
- (struct CGSize)imageShowSize;
- (id)notificationBody;
- (void)prepareForForwardMedia;
- (void)prepareForUploadMedia:(CDUnknownBlockType)arg1;
- (id)reportInfo;
- (_Bool)resourceExists;
- (void)setImage:(id)arg1;
- (void)setImageSize:(double)arg1;
- (void)setImageThumbnailUrl:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setLongURL:(id)arg1;
- (void)setMd5:(id)arg1;
- (void)setMiddleImageUrl:(id)arg1;
- (void)setOriginalImageUrl:(id)arg1;
- (void)setShortURL:(id)arg1;
- (void)setShouldSendOriginalImage:(_Bool)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageHeight:(double)arg1;
- (void)setThumbnailImageWidth:(double)arg1;
- (id)showText;
- (id)showTextLocalizationKey;
- (id)textWithSending;
- (id)thumbnailImage;
- (id)thumbnailImageLocalPath;
- (id)toProtobufMessageBuilder;
- (void)updateWithMessage:(id)arg1;

@end

