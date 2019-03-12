//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageBuilder, NSArray, NSString, YNChatConversation, YNChatDomainResolveResult, YNChatMessage, YNChatRoom, YNFriend;

@protocol YNChatHandlerProtocol <NSObject>
- (_Bool)canCustomNotificationBody;
- (_Bool)canFetchRemoteMessages;
- (_Bool)canFetchRoomForBizType:(unsigned long long)arg1;
- (_Bool)canHandleMessageData:(id)arg1;
- (_Bool)canHandleRoomJoining:(YNChatRoom *)arg1;
- (_Bool)canHandleRoomMembers:(NSArray *)arg1 forChatRoom:(YNChatRoom *)arg2;
- (_Bool)canHandleRoomQuiting:(YNChatRoom *)arg1;
- (_Bool)canPostParse:(id)arg1;
- (_Bool)canPostParseForSending:(YNChatMessage *)arg1;
- (_Bool)canResolveDomain:(id)arg1;
@property(nonatomic) __weak id <YNChatHandlerDelegate> delegate;
- (void)fetchRemoteMessagesWithOwnerId:(NSString *)arg1;
- (YNChatRoom *)fetchRoomForRoomId:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)fillOwnerInfoForConversation:(YNChatConversation *)arg1;
- (void)fillRelatedInfoForMessage:(YNChatMessage *)arg1;
- (void)fillRelatedInfoForMessages:(NSArray *)arg1;
- (NSString *)generateNotificationBodyForMessage:(YNChatMessage *)arg1 showDetail:(_Bool)arg2;
- (void)handleChatConnectionOnline:(_Bool)arg1;
- (_Bool)handleMessageData:(id)arg1;
- (void)handleMessageSendResponse:(_Bool)arg1;
- (void)handleMessageSending:(YNChatMessage *)arg1;
- (void)handleRoomJoining:(YNChatRoom *)arg1 completion:(void (^)(YNChatRoom *, NSError *))arg2;
- (void)handleRoomMembers:(NSArray *)arg1 forChatRoom:(YNChatRoom *)arg2;
- (void)handleRoomQuiting:(YNChatRoom *)arg1 sendQuitMsg:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)initHandler;
- (_Bool)needFillOwnerInfoForConversation;
- (_Bool)needFillRelatedInfoForMessage;
- (_Bool)needPreDownload;
- (void)onConversationPostDelete:(YNChatConversation *)arg1;
- (void)onFriendPostInsert:(YNFriend *)arg1;
- (void)onFriendPostUpdate:(YNFriend *)arg1;
- (void)onProfilePostUpdate:(YNFriend *)arg1;
- (void)postInsertedMessagesData:(id)arg1;
- (void)postParseChatMessage:(YNChatMessage *)arg1 fromMessageData:(id)arg2;
- (void)postParseMessageForSending:(MessageBuilder *)arg1 fromChatMessage:(YNChatMessage *)arg2;
- (YNChatDomainResolveResult *)resolveDomain:(id)arg1;
- (_Bool)shouldHandleMessageSendResponse:(_Bool)arg1;
- (_Bool)shouldHandleMessageSending:(YNChatMessage *)arg1;
- (_Bool)shouldHandleVersion;
- (_Bool)shouldMergeUnreadCountFromConversation:(YNChatConversation *)arg1;
- (_Bool)shouldRefreshUnreadCountWhenFetchedCollectionConversation:(YNChatConversation *)arg1;
- (_Bool)shouldShowMessageNotification;
@end

