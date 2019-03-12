//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGAudioPlayer : NSObject
{
    _Bool _audioSessionIsActive;
    _Bool _proximityState;
    id <TGAudioPlayerDelegate> _delegate;
}

+ (id)_playerQueue;
+ (id)audioPlayerForPath:(id)arg1;
+ (void)changeAudioOutputToListner;
+ (void)changeAudioOutputToSpeaker;
+ (_Bool)isHeadsetPluggedIn;
- (void).cxx_destruct;
- (void)_beginAudioSession;
- (void)_endAudioSession;
- (void)_endAudioSessionFinal;
- (void)_endAudioSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyFinished;
- (void)continuePlay;
- (double)currentPositionSync:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <TGAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)duration;
- (id)init;
- (void)pause;
- (void)play;
- (void)playFromPosition:(double)arg1;
- (void)stop;
- (void)stopToPlayOther;

@end

