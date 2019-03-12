//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YNChatHandlerProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface YNChatChannelHandler : NSObject <YNChatHandlerProtocol>
{
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSObject<OS_dispatch_queue> *_pullTaskQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <YNChatHandlerDelegate> delegate;
    NSMutableDictionary *_chatChannelCache;
}

- (void).cxx_destruct;
- (void)cacheRoomMembers:(id)arg1 forChatChannel:(id)arg2;
- (id)cacheRoomMembersInternal:(id)arg1 forChatChannel:(id)arg2;
- (id)cachedRoomMemberForChatMessage:(id)arg1;
- (_Bool)canCustomNotificationBody;
- (_Bool)canFetchRemoteMessages;
- (_Bool)canFetchRoomForBizType:(unsigned long long)arg1;
- (_Bool)canHandleMessageData:(id)arg1;
- (_Bool)canHandleRoomJoining:(id)arg1;
- (_Bool)canHandleRoomMembers:(id)arg1 forChatRoom:(id)arg2;
- (_Bool)canHandleRoomQuiting:(id)arg1;
- (_Bool)canPostParse:(id)arg1;
- (_Bool)canPostParseForSending:(id)arg1;
- (_Bool)canResolveDomain:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *chatChannelCache; // @synthesize chatChannelCache=_chatChannelCache;
- (void)checkAndCacheRoomMemberForMeWithChatChannel:(id)arg1;
@property(nonatomic) __weak id <YNChatHandlerDelegate> delegate; // @synthesize delegate;
- (void)deleteRoomByID:(id)arg1;
- (void)fetchChannelInfoWithChannelId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRemoteMessagesWithOwnerId:(id)arg1;
- (id)fetchRoomForRoomId:(id)arg1 bizType:(unsigned long long)arg2;
- (void)fillOwnerInfoForConversation:(id)arg1;
- (void)fillRelatedInfoForMessage:(id)arg1;
- (void)fillRelatedInfoForMessages:(id)arg1;
- (id)generateNotificationBodyForMessage:(id)arg1 showDetail:(_Bool)arg2;
- (void)handleChatConnectionOnline:(_Bool)arg1;
- (void)handleKickoutMessage:(id)arg1;
- (_Bool)handleMessageData:(id)arg1;
- (void)handleMessageSendResponse:(_Bool)arg1;
- (void)handleMessageSending:(id)arg1;
- (void)handlePullMessage:(id)arg1;
- (void)handlePullMessageError:(id)arg1 forRoom:(id)arg2;
- (void)handleReceivedMessages:(id)arg1 forRoom:(id)arg2;
- (void)handleRoomJoining:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRoomMembers:(id)arg1 forChatRoom:(id)arg2;
- (void)handleRoomQuiting:(id)arg1 sendQuitMsg:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)initHandler;
- (_Bool)needFillOwnerInfoForConversation;
- (_Bool)needFillRelatedInfoForMessage;
- (_Bool)needPreDownload;
- (void)onConversationPostDelete:(id)arg1;
- (void)onFriendPostInsert:(id)arg1;
- (void)onFriendPostUpdate:(id)arg1;
- (void)onProfilePostUpdate:(id)arg1;
- (void)postInsertedMessagesData:(id)arg1;
- (void)postParseChatMessage:(id)arg1 fromMessageData:(id)arg2;
- (void)postParseMessageForSending:(id)arg1 fromChatMessage:(id)arg2;
- (void)pullMessagesForAllChannels;
- (void)pullNewMessageWithChannelId:(id)arg1;
- (id)resolveDomain:(id)arg1;
- (_Bool)shouldHandleMessageSendResponse:(_Bool)arg1;
- (_Bool)shouldHandleMessageSending:(id)arg1;
- (_Bool)shouldHandleVersion;
- (_Bool)shouldMergeUnreadCountFromConversation:(id)arg1;
- (_Bool)shouldRefreshUnreadCountWhenFetchedCollectionConversation:(id)arg1;
- (_Bool)shouldShowMessageNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
