//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPPage : NSObject
{
    NSString *_appId;
    NSString *_loginName;
    NSString *_sessionId;
    NSString *_pageName;
    NSString *_pageStartTime;
    NSString *_pageEndTime;
    NSString *_uhid;
    NSString *_dhid;
    NSString *_channel;
    NSString *_timestamp;
    NSString *_tunnel;
    NSString *_operatorName;
    NSString *_northLat;
    NSString *_eastLng;
    NSString *_imei;
    NSString *_android_id;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *android_id; // @synthesize android_id=_android_id;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *dhid; // @synthesize dhid=_dhid;
@property(retain, nonatomic) NSString *eastLng; // @synthesize eastLng=_eastLng;
- (id)generatePageJSONString;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(retain, nonatomic) NSString *northLat; // @synthesize northLat=_northLat;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(retain, nonatomic) NSString *pageEndTime; // @synthesize pageEndTime=_pageEndTime;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageStartTime; // @synthesize pageStartTime=_pageStartTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *tunnel; // @synthesize tunnel=_tunnel;
@property(retain, nonatomic) NSString *uhid; // @synthesize uhid=_uhid;

@end

