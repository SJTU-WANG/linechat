//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YNMomentFeedMedia, YNMomentFeedMediaAttribute;

@interface YNMomentFeedMediaInfoViewModel : NSObject
{
    NSString *_thumbnailUrl;
    NSString *_url;
    YNMomentFeedMediaAttribute *_attribute;
    NSString *_ownerId;
    NSString *_mediaId;
    NSString *_filePath;
    NSString *_thumbnailPath;
    YNMomentFeedMedia *_media;
}

+ (id)modelWithMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YNMomentFeedMediaAttribute *attribute; // @synthesize attribute=_attribute;
- (_Bool)checkAndCompleteResource;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)initWithMedia:(id)arg1;
@property(retain, nonatomic) YNMomentFeedMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) long long mediaType;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
- (void)prepareResourceWithImage:(id)arg1;
- (void)prepareResourceWithItem:(id)arg1;
- (void)prepareResourceWithLocalVideo:(id)arg1;
- (struct CGSize)saveImage:(id)arg1 toPath:(id)arg2;
@property(retain, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

