//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPSession : NSObject
{
    NSString *_appId;
    NSString *_loginName;
    NSString *_sessionId;
    NSString *_appStartTime;
    NSString *_sessionStartTime;
    NSString *_sessionEndTime;
    NSString *_netType;
    NSString *_wifiVersion;
    NSString *_imei;
    NSString *_android_id;
    NSString *_uhid;
    NSString *_dhid;
    NSString *_location;
    NSString *_source;
    NSString *_channel;
    NSString *_payChannel;
    NSString *_timestamp;
    NSString *_tunnel;
    NSString *_operatorName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *android_id; // @synthesize android_id=_android_id;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appStartTime; // @synthesize appStartTime=_appStartTime;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *dhid; // @synthesize dhid=_dhid;
- (id)generateSessionString;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(retain, nonatomic) NSString *payChannel; // @synthesize payChannel=_payChannel;
@property(retain, nonatomic) NSString *sessionEndTime; // @synthesize sessionEndTime=_sessionEndTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *tunnel; // @synthesize tunnel=_tunnel;
@property(retain, nonatomic) NSString *uhid; // @synthesize uhid=_uhid;
@property(retain, nonatomic) NSString *wifiVersion; // @synthesize wifiVersion=_wifiVersion;

@end

