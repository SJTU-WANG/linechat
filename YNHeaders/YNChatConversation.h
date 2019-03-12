//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableString, NSString, YNChatRoom, YNFriend;

@interface YNChatConversation : NSObject
{
    NSString *_mediaDirectoryPath;
    NSString *_fileDirectoryPath;
    _Bool _isHaveRemindMe;
    _Bool _isAlwaysTop;
    _Bool _isSentFriendApply;
    _Bool _active;
    _Bool _hidden;
    _Bool _isTemp;
    int _lastMessageStatus;
    int _lastMessageType;
    NSString *_name;
    NSString *_avatar;
    long long _type;
    unsigned long long _bizType;
    NSString *_ownerId;
    long long _unread;
    long long _converID;
    NSString *_draft;
    NSMutableString *_remindUidPeoples;
    double _lastModifyTime;
    long long _lastMessageID;
    NSMutableDictionary *_info;
    NSString *_lastMessageDetail;
    NSString *_highlightText;
    YNFriend *_friend;
    YNChatRoom *_chatRoom;
    unsigned long long _ynNewFriendSourceType;
    long long _ynNewFriendSubSourceType;
    long long _ynNewFriendApplyStatus;
    NSString *_ynNewFriendContactName;
}

+ (unsigned long long)checkRelatedCollectionTypeWithBizType:(unsigned long long)arg1;
+ (void)load;
+ (id)typesForCollectionConversationType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) YNChatRoom *chatRoom; // @synthesize chatRoom=_chatRoom;
- (long long)compare:(id)arg1;
@property(nonatomic) long long converID; // @synthesize converID=_converID;
- (id)conversationAavatarUrl;
- (id)conversationCountNumber;
- (id)conversationName;
- (double)conversationUpdateTime;
- (id)conversationUpdateTimeText;
- (void)deleteConverFolder;
- (_Bool)doNotDisturbMe;
@property(copy, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) YNFriend *friend; // @synthesize friend=_friend;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
- (id)init;
- (id)initWithChatRoom:(id)arg1;
- (id)initWithFMResultSet:(id)arg1;
- (id)initWithFriend:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithType:(long long)arg1 ownerId:(id)arg2;
@property(nonatomic) _Bool isAlwaysTop; // @synthesize isAlwaysTop=_isAlwaysTop;
@property(readonly, nonatomic) _Bool isCollectionConversation;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGroupChat;
@property(nonatomic) _Bool isHaveRemindMe; // @synthesize isHaveRemindMe=_isHaveRemindMe;
@property(readonly, nonatomic) _Bool isNonRelationConversation;
- (_Bool)isRemindMe:(id)arg1;
@property(nonatomic) _Bool isSentFriendApply; // @synthesize isSentFriendApply=_isSentFriendApply;
@property(readonly, nonatomic) _Bool isSingleFriendConversation;
@property(readonly, nonatomic) _Bool isStrangeConversation;
- (_Bool)isTargetForMessage:(id)arg1;
@property(nonatomic) _Bool isTemp; // @synthesize isTemp=_isTemp;
@property(copy, nonatomic) NSString *lastMessageDetail; // @synthesize lastMessageDetail=_lastMessageDetail;
@property(nonatomic) long long lastMessageID; // @synthesize lastMessageID=_lastMessageID;
@property(nonatomic) int lastMessageStatus; // @synthesize lastMessageStatus=_lastMessageStatus;
@property(nonatomic) int lastMessageType; // @synthesize lastMessageType=_lastMessageType;
@property(nonatomic) double lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
- (id)mediaDirectoryPath;
- (_Bool)messagesCanBeDeleted;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSMutableString *remindUidPeoples; // @synthesize remindUidPeoples=_remindUidPeoples;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long unread; // @synthesize unread=_unread;
@property(nonatomic) long long ynNewFriendApplyStatus; // @synthesize ynNewFriendApplyStatus=_ynNewFriendApplyStatus;
@property(retain, nonatomic) NSString *ynNewFriendContactName; // @synthesize ynNewFriendContactName=_ynNewFriendContactName;
@property(nonatomic) unsigned long long ynNewFriendSourceType; // @synthesize ynNewFriendSourceType=_ynNewFriendSourceType;
@property(nonatomic) long long ynNewFriendSubSourceType; // @synthesize ynNewFriendSubSourceType=_ynNewFriendSubSourceType;
- (void)updateBizTypeWithFriend:(id)arg1;
- (void)updateLastMessageDetail:(id)arg1;
- (void)updateLastMessageHighlightText:(id)arg1;
- (void)updateStateForLastMessage:(id)arg1 isNewMessage:(_Bool)arg2;

@end
