//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNMomentPostModel.h"

@interface YNMomentVideoPostModel : YNMomentPostModel
{
    id _video;
}

- (void).cxx_destruct;
- (double)cellHeight;
- (Class)cellReuseClass;
- (id)cellReuseIdentifier;
- (_Bool)checkResourceInCloud;
- (void)clearLocalDraft;
- (unsigned long long)currentMediaCount;
- (void)downloadResourceFromCloudInQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)feedType;
- (void)loadLocalDraft;
- (id)placeholder;
- (_Bool)postEnable;
- (id)prepareFeedAndResource;
- (void)saveLocalDraft;
@property(retain, nonatomic) id video; // @synthesize video=_video;
- (_Bool)shouldShowLeaveAlert;
- (id)title;

@end

