//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YNChatInfoMemberItem : NSObject
{
    NSString *_uid;
    unsigned long long _type;
    id <YNChatInfoMemberProtocol> _member;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YNChatInfoMemberProtocol> member; // @synthesize member=_member;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end
