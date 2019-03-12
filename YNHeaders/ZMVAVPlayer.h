//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ZMPlayControlViewDelegate.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, NSTimer, ZMPlayControlView;

@interface ZMVAVPlayer : UIView <ZMPlayControlViewDelegate>
{
    AVPlayerItem *KVOplayerItem;
    _Bool isStart;
    _Bool isReadyToPlay;
    _Bool EndSliderToPlay;
    _Bool _isCirculation;
    _Bool _muted;
    id <ZMVAVPlayerDelegate> _delegate;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    ZMPlayControlView *_playControlView;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (id)TimeformatFromSeconds:(long long)arg1;
- (void)addAVPlayerNtf:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <ZMVAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 withShowInView:(id)arg2 url:(id)arg3 isCalling:(_Bool)arg4;
@property(nonatomic) _Bool isCirculation; // @synthesize isCirculation=_isCirculation;
- (void)layoutSubviews;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void)notifyOtherAppActiveState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pausePlayer;
@property(retain, nonatomic) ZMPlayControlView *playControlView; // @synthesize playControlView=_playControlView;
- (void)playControlView:(id)arg1 sliderTouchUpInside:(id)arg2;
- (void)playControlView:(id)arg1 sliderTouchUpOutside:(id)arg2;
- (void)playControlView:(id)arg1 sliderValuechange:(id)arg2;
- (void)playControlView:(id)arg1 smallPlay:(id)arg2;
- (void)playbackFinished:(id)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void)removeAvPlayerNtf;
- (void)removeNtf;
- (void)setResource:(id)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)startPlayer;
- (void)stopPlayer;
- (void)updateState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

