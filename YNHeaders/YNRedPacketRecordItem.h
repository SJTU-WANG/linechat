//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YNRedPacketRecordItem : NSObject
{
    NSString *_uid;
    NSString *_nickName;
    NSString *_headUrl;
    NSString *_amount;
    double _ts;
    NSString *_timeString;
    unsigned long long _rank;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void)configureWithDic:(id)arg1;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(nonatomic) double ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end
