//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface YNChatRoomFetchInfo : NSObject
{
    _Bool _inRoom;
    NSString *_roomIcon;
    NSString *_roomName;
    NSString *_defaultRoomName;
    NSNumber *_memberNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultRoomName; // @synthesize defaultRoomName=_defaultRoomName;
@property(nonatomic) _Bool inRoom; // @synthesize inRoom=_inRoom;
@property(retain, nonatomic) NSNumber *memberNum; // @synthesize memberNum=_memberNum;
@property(retain, nonatomic) NSString *roomIcon; // @synthesize roomIcon=_roomIcon;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;

@end
