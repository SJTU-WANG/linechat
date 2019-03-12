//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString, NSTimer;

@interface SoundManager : NSObject <AVAudioPlayerDelegate>
{
    double _lastPlayTime;
    unsigned int _sendMessageSoundID;
    unsigned int _receivedMessageSoundID;
    unsigned int _currentChatReceivedMessageSoundID;
    unsigned int _audioReceivedMessageSoundID;
    unsigned int _audioPlayEndMessageSoundID;
    unsigned int _shakeSoundID;
    unsigned int _shakeMatchSoundID;
    unsigned int _shakeNomatchSoundID;
    unsigned int _acceptOrHandupSoundID;
    unsigned int backgroundSoundID;
    _Bool cancelVoiceNotification;
    NSTimer *_vibrationTimer;
    AVAudioPlayer *_audioPlayer;
}

+ (id)sharedSoundManager;
- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
- (void)destroySystemoSoundID;
- (id)init;
- (void)lockScreen;
- (void)nonstopPlaySoundWithType:(int)arg1;
- (void)playCallingSound;
- (void)playCallingSystemSound;
- (void)playSoundWithType:(int)arg1;
- (void)playVibrationSound;
@property(retain, nonatomic) NSTimer *vibrationTimer; // @synthesize vibrationTimer=_vibrationTimer;
- (void)shakeDevice;
- (_Bool)shouldPlaySoundForIncomingMessage;
- (_Bool)shouldShakeDeviceForIncomingMessage;
- (void)startShakingDevice;
- (void)startVoipCallingMusic;
- (void)stopAlertSoundWithSoundID:(unsigned int)arg1;
- (void)stopShakingDevice;
- (void)stopVoipCallingMusic;
- (id)urlForSoundType:(int)arg1;
- (void)volumeChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

