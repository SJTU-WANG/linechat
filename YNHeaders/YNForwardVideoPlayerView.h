//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YNSmallVideoPlayerViewDeleagate.h"
#import "YNVideoStatusViewDelegate.h"

@class NSString, UIImageView, YNSmallVideoPlayerView, YNVideoStatusView;

@interface YNForwardVideoPlayerView : UIView <YNSmallVideoPlayerViewDeleagate, YNVideoStatusViewDelegate>
{
    UIImageView *_thumbnailImageView;
    YNSmallVideoPlayerView *_playerView;
    YNVideoStatusView *_statusView;
}

- (void).cxx_destruct;
- (void)didFinishPlayedSmallVideo;
- (id)initWithVideoMessage:(id)arg1;
- (void)play;
@property(retain, nonatomic) YNSmallVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) YNVideoStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void)videoStatusViewTaped:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
