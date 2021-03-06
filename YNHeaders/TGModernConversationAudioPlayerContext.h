//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernViewInlineMediaContext.h"

@class TGModernConversationAudioPlayer;

@interface TGModernConversationAudioPlayerContext : TGModernViewInlineMediaContext
{
    TGModernConversationAudioPlayer *_audioPlayer;
}

- (void).cxx_destruct;
- (id)initWithAudioPlayer:(id)arg1;
- (_Bool)isPaused;
- (_Bool)isPlaybackActive;
- (void)pause;
- (void)play;
- (void)play:(float)arg1;
- (float)playbackPosition:(double *)arg1 sync:(_Bool)arg2;
- (double)preciseDuration;

@end

