//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatMessage.h"

@interface YNChatFriendApplyMessage : YNChatMessage
{
}

- (long long)applyType;
- (void)configureWithMessage:(id)arg1;
- (id)initWithFMResultSet:(id)arg1;
- (_Bool)isMeSendFriendApplyWithMyUid:(id)arg1;
- (id)notificationBody;
- (void)setApplyInfo:(id)arg1;
- (void)setApplyStatus:(int)arg1;
- (void)setApplyType:(long long)arg1;
- (void)setApplyUserUID:(id)arg1;
- (void)setIsMeReply:(_Bool)arg1;
- (void)setRid:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)showText;
- (id)userAvatarURL;
- (id)userNames;
- (long long)userSex;
- (id)userUid;

@end

