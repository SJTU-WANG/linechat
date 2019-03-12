//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNRecommendFriendManager : NSObject
{
    _Bool _isNewRegister;
    _Bool _hasSkipOfOnekeyAddFriend;
    _Bool _isProcessing;
    _Bool _isReqOneKey;
}

+ (_Bool)isUsedExWithMid:(id)arg1;
+ (void)setUsedExWithMid:(id)arg1;
+ (id)sharedManager;
- (void)addDelegate;
- (void)dealloc;
- (void)didAddNewFriend:(id)arg1;
- (unsigned long long)getOnlyFriendsCount;
@property(nonatomic) _Bool hasPushRichMsg;
@property(nonatomic) _Bool hasSkipOfOnekeyAddFriend; // @synthesize hasSkipOfOnekeyAddFriend=_hasSkipOfOnekeyAddFriend;
- (id)init;
@property(nonatomic) _Bool isNewRegister; // @synthesize isNewRegister=_isNewRegister;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(nonatomic) _Bool isReqOneKey; // @synthesize isReqOneKey=_isReqOneKey;
@property(nonatomic) _Bool isUsed;
@property(nonatomic) _Bool isUsedOrSkipedOneKey;
- (void)notifyPalmServicePushMsg;
- (void)notifyShowOneKey;
- (void)palmServicePushMsgWithoutFillInfo;
- (void)processPushMsg:(unsigned long long)arg1;
- (void)removeDelegate;
- (void)switchUser;

@end
