//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNMomentFeedViewModel.h"

@class NSString, YNMomentFeedMediaInfoViewModel;

@interface YNMomentFeedVideoViewModel : YNMomentFeedViewModel
{
    YNMomentFeedMediaInfoViewModel *_videoVM;
    NSString *_thumbnailUrl;
    NSString *_videoUrl;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)caculateProperties;
- (struct CGSize)getAttachmentViewSize;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) YNMomentFeedMediaInfoViewModel *videoVM; // @synthesize videoVM=_videoVM;

@end
