//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNChatMessage;

@interface YNChatMessageSearchResult : NSObject
{
    long long _count;
    YNChatMessage *_lastMessage;
    YNChatMessage *_lastRoomMessage;
}

- (void).cxx_destruct;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) YNChatMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(retain, nonatomic) YNChatMessage *lastRoomMessage; // @synthesize lastRoomMessage=_lastRoomMessage;

@end

