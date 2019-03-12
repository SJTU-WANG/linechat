//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNVideoItem.h"

@class NSURL, UIImage;

@interface YNLocalVideoItem : YNVideoItem
{
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    double _duration;
    NSURL *_videoPathURL;
    UIImage *_thumbnailImage;
}

- (void).cxx_destruct;
- (void)cancel:(int)arg1;
- (double)duration;
- (void)getFullScreenImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)getICloudThumbnailImageSynchronous:(_Bool)arg1 comletion:(CDUnknownBlockType)arg2;
- (id)getLocalIdentifier;
- (id)getOriginalImageData;
- (void)getThumbnailImage:(CDUnknownBlockType)arg1;
- (id)getVideoSourceURL;
- (id)initWithVideoPath:(id)arg1 thumbnailPath:(id)arg2;
- (_Bool)isIniCloud;
- (unsigned long long)mediaType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (int)requestPHAssetInfoAsync:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
- (int)requestVideoFromCloud:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) NSURL *videoPathURL; // @synthesize videoPathURL=_videoPathURL;
- (void)transcodeVideoToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
