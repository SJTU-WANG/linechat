//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YNChatDomainResolveResult : NSObject
{
    _Bool _isRoom;
    NSString *_roomId;
    NSString *_address;
    NSString *_ownerId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) _Bool isRoom; // @synthesize isRoom=_isRoom;
@property(copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;

@end

