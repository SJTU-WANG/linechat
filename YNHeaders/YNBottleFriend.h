//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNFriend.h"

@class NSString;

@interface YNBottleFriend : YNFriend
{
    int _botSrcType;
    NSString *_bottleId;
    NSString *_potId;
}

- (void).cxx_destruct;
@property(nonatomic) int botSrcType; // @synthesize botSrcType=_botSrcType;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
- (void)configureWithDic:(id)arg1;
- (id)init;
- (id)initWithFMResultSet:(id)arg1;
- (id)parseToJson;
@property(retain, nonatomic) NSString *potId; // @synthesize potId=_potId;

@end

