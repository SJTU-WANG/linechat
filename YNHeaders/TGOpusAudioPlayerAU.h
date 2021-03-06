//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGAudioPlayer.h"

@class NSString;

@interface TGOpusAudioPlayerAU : TGAudioPlayer
{
    int _playerId;
    NSString *_filePath;
    long long _fileSize;
    _Bool _isSeekable;
    long long _totalPcmDuration;
    _Bool _isPaused;
    struct OggOpusFile *_opusFile;
    struct OpaqueAudioComponentInstance *_audioUnit;
    struct TGAudioBuffer *_filledAudioBuffers[3];
    int _filledAudioBufferCount;
    int _filledAudioBufferPosition;
    long long _currentPcmOffset;
    _Bool _finished;
    _Bool _shouldNotDeActiveSession;
}

+ (_Bool)canPlayFile:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)bufferByteSize;
- (void)cleanup;
- (void)cleanupAndReportError;
- (void)cleanupWithBlock:(CDUnknownBlockType)arg1;
- (void)cleanupWithInternalBlock:(CDUnknownBlockType)arg1;
- (void)continuePlay;
- (double)currentPositionSync:(_Bool)arg1;
- (void)dealloc;
- (double)duration;
- (void)fillBuffer:(struct TGAudioBuffer *)arg1;
- (id)initWithPath:(id)arg1;
- (void)pause;
- (void)playFromPosition:(double)arg1;
- (void)stop;
- (void)stopToPlayOther;

@end

