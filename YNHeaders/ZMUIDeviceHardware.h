//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZMUIDeviceHardware : NSObject
{
    NSString *iPlatformString;
    unsigned char iIOS4_X;
}

+ (id)instance;
- (unsigned char)IsDevice3GS;
- (unsigned char)IsDevice6Up;
- (unsigned char)IsSystemVersion4X;
- (void)dealloc;
- (id)init;
- (_Bool)isSystemVersion5X;
- (_Bool)isSystemVersionLargeEqual6;
- (_Bool)isSystemVersionLargeEqual7;
- (id)platform;
- (void)systemInfo;

@end

