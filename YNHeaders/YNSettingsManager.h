//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNSettingsManager : NSObject
{
    _Bool _shouldPlaySoundInComingMessage;
    _Bool _canShakeDeviceInComingMessage;
    _Bool _isOpenEarphoneMode;
    _Bool _shouldPlayShakeSound;
    _Bool _isSmallVideoUseFrontCamera;
    _Bool _isShowBottleCollectionInMain;
    _Bool _isVoipSpreadUser;
}

+ (id)sharedManager;
@property(nonatomic) _Bool canShakeDeviceInComingMessage; // @synthesize canShakeDeviceInComingMessage=_canShakeDeviceInComingMessage;
- (id)init;
@property(nonatomic) _Bool isOpenEarphoneMode; // @synthesize isOpenEarphoneMode=_isOpenEarphoneMode;
@property(nonatomic) _Bool isShowBottleCollectionInMain; // @synthesize isShowBottleCollectionInMain=_isShowBottleCollectionInMain;
@property(nonatomic) _Bool isSmallVideoUseFrontCamera; // @synthesize isSmallVideoUseFrontCamera=_isSmallVideoUseFrontCamera;
@property(nonatomic) _Bool isVoipSpreadUser; // @synthesize isVoipSpreadUser=_isVoipSpreadUser;
- (void)loadLocalConfigs;
@property(nonatomic) _Bool shouldPlayShakeSound; // @synthesize shouldPlayShakeSound=_shouldPlayShakeSound;
@property(nonatomic) _Bool shouldPlaySoundInComingMessage; // @synthesize shouldPlaySoundInComingMessage=_shouldPlaySoundInComingMessage;
- (void)switchUser;

@end

