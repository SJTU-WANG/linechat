//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNMomentFeedReply.h"

@class NSString;

@interface YNMomentFeedComment : YNMomentFeedReply
{
    NSString *_toUid;
    NSString *_toNickName;
    NSString *_text;
}

+ (id)feedReplyFromJsonValue:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithFBResult:(id)arg1;
- (id)initWithJsonValue:(id)arg1;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *toNickName; // @synthesize toNickName=_toNickName;
@property(retain, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;

@end
