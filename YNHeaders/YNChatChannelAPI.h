//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNChatChannelAPI : NSObject
{
}

+ (void)createHotChatRoomWithName:(id)arg1 headImg:(id)arg2 longitude:(id)arg3 latitude:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)getCategoryListCompletion:(CDUnknownBlockType)arg1;
+ (void)getHotChatRoomListWithLongitude:(id)arg1 latitude:(id)arg2 page:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getRoomInfoWithUid:(id)arg1 room:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getRoomMemberWithUid:(id)arg1 room:(id)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)joinRoomWithUid:(id)arg1 category:(id)arg2 roomId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)kickHotChatRoomUsersWithUserList:(id)arg1 roomId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)pullMessagesWithUid:(id)arg1 roomId:(id)arg2 minTime:(id)arg3 maxTime:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)quitRoomWithUid:(id)arg1 room:(id)arg2 sendQuitMsg:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)reportChatContentForUid:(id)arg1 message:(id)arg2 roomId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateHotChatRoomInfoWithName:(id)arg1 roomId:(id)arg2 headImg:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
