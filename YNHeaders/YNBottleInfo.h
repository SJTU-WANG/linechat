//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YNChatMessage;

@interface YNBottleInfo : NSObject
{
    NSString *_bottleId;
    NSString *_bottleIconUrl;
    NSString *_tipString;
    unsigned long long _bottleType;
    YNChatMessage *_chatMessage;
    double _latitude;
    double _longitude;
}

+ (id)getMessageByJson:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottleIconUrl; // @synthesize bottleIconUrl=_bottleIconUrl;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property(nonatomic) unsigned long long bottleType; // @synthesize bottleType=_bottleType;
@property(retain, nonatomic) YNChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
- (void)configureFullInfoWithDic:(id)arg1;
- (void)configureWithDic:(id)arg1;
- (id)init;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (id)parseToJson;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
- (id)throwedBottleFilePath;

@end

