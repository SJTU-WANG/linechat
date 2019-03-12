//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatRoom.h"

@class NSString, YNChatChannelAssistant;

@interface YNChatChannel : YNChatRoom
{
    NSString *_categoryId;
    unsigned long long _roomNumber;
    YNChatChannelAssistant *_assistant;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNChatChannelAssistant *assistant; // @synthesize assistant=_assistant;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *categoryName;
- (void)configureWithDic:(id)arg1;
- (id)init;
- (id)initWithFMResultSet:(id)arg1;
@property(retain, nonatomic) NSString *introduce;
@property(nonatomic) unsigned long long maxTime;
@property(nonatomic) unsigned long long memberCount;
@property(nonatomic) unsigned long long minTime;
- (id)parseToDBParameter;
@property(nonatomic) unsigned long long roomNumber; // @synthesize roomNumber=_roomNumber;
@property(nonatomic) unsigned long long roomType;

@end
