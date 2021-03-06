//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface DataCollectionRecord : NSObject
{
    unsigned long long _eventCode;
    unsigned long long _actionId;
    unsigned long long _statusCode;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_timeCost;
    NSString *_smsHost;
    NSString *_guid;
    NSString *_ptguid;
    NSString *_sessionId;
    NSString *_sndaId;
}

@property(nonatomic) unsigned long long actionId; // @synthesize actionId=_actionId;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) unsigned long long eventCode; // @synthesize eventCode=_eventCode;
- (id)getCommandContent;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *ptguid; // @synthesize ptguid=_ptguid;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *smsHost; // @synthesize smsHost=_smsHost;
@property(retain, nonatomic) NSString *sndaId; // @synthesize sndaId=_sndaId;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *timeCost; // @synthesize timeCost=_timeCost;

@end

