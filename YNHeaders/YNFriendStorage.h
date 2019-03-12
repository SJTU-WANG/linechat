//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNFriendStorage : NSObject
{
}

+ (id)checkIsMyFriendWithUid:(id)arg1 withBizType:(unsigned long long)arg2;
+ (id)checkIsMyFriendWithUid:(id)arg1 withBizType:(unsigned long long)arg2 inDB:(id)arg3;
+ (id)checkMessageTableNameForBizType:(unsigned long long)arg1;
+ (id)checkPersonExistInDB:(id)arg1 withBizType:(unsigned long long)arg2;
+ (id)checkPersonExistInDB:(id)arg1 withBizType:(unsigned long long)arg2 inDB:(id)arg3;
+ (void)clearAllShakeHistories;
+ (void)deleteFriend:(id)arg1;
+ (void)deleteFriend:(id)arg1 inDB:(id)arg2;
+ (_Bool)deleteFriendByUid:(id)arg1 withBizType:(unsigned long long)arg2 inDB:(id)arg3;
+ (void)deleteShakeHistoryByUID:(id)arg1;
+ (id)fetchAllFriends;
+ (id)fetchServiceWithUid:(id)arg1;
+ (id)fetchServiceWithUid:(id)arg1 inDB:(id)arg2;
+ (Class)getClassByType:(unsigned long long)arg1;
+ (void)handleBatchFriendDictOperations:(id)arg1 newFriends:(id *)arg2 newStrangers:(id *)arg3 updatedFriends:(id *)arg4 deletedFriends:(id *)arg5 error:(id *)arg6;
+ (unsigned long long)insertFriend:(id)arg1;
+ (unsigned long long)insertFriend:(id)arg1 inDB:(id)arg2;
+ (void)load;
+ (void)saveShakeHistory:(id)arg1;
+ (id)shakeHistories;
+ (void)updateFriend:(id)arg1;
+ (_Bool)updateFriend:(id)arg1 inDB:(id)arg2;
+ (_Bool)updateServices:(id)arg1;

@end

