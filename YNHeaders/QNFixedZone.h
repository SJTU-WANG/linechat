//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QNZone.h"

@class NSLock, NSMutableDictionary, NSString;

@interface QNFixedZone : QNZone
{
    NSString *server;
    NSMutableDictionary *cache;
    NSLock *lock;
}

+ (id)createWithHost:(id)arg1;
+ (id)zone0;
+ (id)zone1;
+ (id)zone2;
+ (id)zoneNa0;
- (void).cxx_destruct;
- (id)createZoneInfo:(id)arg1;
- (id)initWithupDomainList:(id)arg1;
- (void)preQuery:(id)arg1 on:(CDUnknownBlockType)arg2;
- (id)up:(id)arg1 isHttps:(_Bool)arg2 frozenDomain:(id)arg3;

@end

