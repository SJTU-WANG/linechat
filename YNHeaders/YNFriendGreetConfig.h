//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseConfig.h"

@class NSDictionary;

@interface YNFriendGreetConfig : YNBaseConfig
{
    NSDictionary *_greetConfigDic;
}

- (void).cxx_destruct;
- (id)getARandomFriendGreetWord;
- (id)getARandomFriendRequstWord;
- (id)getRecommendFriendGreetArray;
- (id)getRecommendFriendRequstArray;
- (id)getWordsForGreetTypekey:(id)arg1;
@property(retain) NSDictionary *greetConfigDic; // @synthesize greetConfigDic=_greetConfigDic;
- (void)handleConfigData:(id)arg1;
- (id)init;

@end

