//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YNChatRoomQRCodeInfo : NSObject
{
    _Bool _inRoom;
    NSString *_roomIcon;
    NSString *_roomName;
    NSString *_defaultRoomName;
    long long _memberNum;
    NSString *_roomId;
    NSString *_days;
    NSString *_dueMonth;
    NSString *_dueDay;
    NSString *_roomQrCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *days; // @synthesize days=_days;
@property(retain, nonatomic) NSString *defaultRoomName; // @synthesize defaultRoomName=_defaultRoomName;
@property(retain, nonatomic) NSString *dueDay; // @synthesize dueDay=_dueDay;
@property(retain, nonatomic) NSString *dueMonth; // @synthesize dueMonth=_dueMonth;
@property(nonatomic) _Bool inRoom; // @synthesize inRoom=_inRoom;
@property(nonatomic) long long memberNum; // @synthesize memberNum=_memberNum;
@property(retain, nonatomic) NSString *roomIcon; // @synthesize roomIcon=_roomIcon;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *roomQrCode; // @synthesize roomQrCode=_roomQrCode;

@end
