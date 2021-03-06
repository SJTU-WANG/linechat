//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGModernViewInlineMediaContext : NSObject
{
    id <TGModernViewInlineMediaContextDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TGModernViewInlineMediaContextDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isPaused;
- (_Bool)isPlaybackActive;
- (void)pause;
- (void)play;
- (void)play:(float)arg1;
- (float)playbackPosition:(double *)arg1;
- (float)playbackPosition:(double *)arg1 sync:(_Bool)arg2;
- (void)postUpdatePlaybackPosition:(_Bool)arg1;
- (double)preciseDuration;
- (void)removeDelegate:(id)arg1;

@end

