//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YNStreamDelegate.h"

@class GCDMulticastDelegate<YNCommunicationManagerDelegate>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString, NSTimer, YNStream;

@interface YNCommunicationManager : NSObject <YNStreamDelegate>
{
    GCDMulticastDelegate<YNCommunicationManagerDelegate> *_multicastDelegate;
    long long _authenticateRetry;
    NSMutableDictionary *_queueDict;
    unsigned long long _frequency;
    NSObject<OS_dispatch_queue> *_messagePoolQueue;
    NSObject<OS_dispatch_queue> *_privateHandleQueue;
    NSMutableArray *_serverIpList;
    long long _currentIpIndex;
    double _lastConnectedTimestamp;
    _Bool _hasConnectedForFirstTime;
    _Bool _isFetchingDispatch;
    int _status;
    YNStream *_xmppStream;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_xmppStreamDelegateQueue;
    NSString *_accountNumber;
    NSString *_password;
    NSString *_hostAddress;
    long long _hostPort;
    NSString *_ticket;
    NSString *_domain;
    NSString *_roomDomain;
    NSRecursiveLock *_lock;
    NSTimer *_queueTimer;
    NSTimer *_connTimer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)SendMessage:(id)arg1;
- (void)SendMessageConfirm:(id)arg1;
- (void)UIApplicationDidBecomeActive:(id)arg1;
- (void)UIApplicationDidEnterBackground:(id)arg1;
@property(retain, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
- (void)addDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addMessageToSendingPool:(id)arg1;
- (void)automaticConnector;
- (void)checkAndRemoveSendingMessage:(id)arg1;
- (void)checkAndRemoveSendingMessagesForOwnerId:(id)arg1;
- (void)clearAllSendingMessages;
- (void)closeConnector;
- (void)communicationUIApplicationWillTerminate:(id)arg1;
- (void)configureInfo;
@property(retain, nonatomic) NSTimer *connTimer; // @synthesize connTimer=_connTimer;
- (void)dealloc;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)doAuthenticate;
- (void)doServerConnecting;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)fetchChatServerDispatchInfo;
- (void)forceReconnect;
- (void)handleForDispatchResponse:(id)arg1 error:(id)arg2;
- (void)handleQueue:(id)arg1;
@property(retain, nonatomic) NSString *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(nonatomic) long long hostPort; // @synthesize hostPort=_hostPort;
- (id)init;
@property(nonatomic) _Bool isFetchingDispatch; // @synthesize isFetchingDispatch=_isFetchingDispatch;
- (_Bool)isReachabilityForInternetConnection;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)logout;
- (id)messageFromSendingPoolWithServerId:(id)arg1;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void)processMessagePoolForOnline;
@property(retain, nonatomic) NSTimer *queueTimer; // @synthesize queueTimer=_queueTimer;
- (void)reachabilityChanged:(id)arg1;
- (void)registerForNetworkReachabilityNotifications;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)removeMessageFromSendingPool:(id)arg1;
- (_Bool)retryToConnectIpServer;
@property(retain, nonatomic) NSString *roomDomain; // @synthesize roomDomain=_roomDomain;
- (void)serverDidConnected;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) YNStream *xmppStream; // @synthesize xmppStream=_xmppStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xmppStreamDelegateQueue; // @synthesize xmppStreamDelegateQueue=_xmppStreamDelegateQueue;
- (void)startConnector;
- (void)startQueueTimer;
- (void)startUDPHeartbeat:(long long)arg1;
- (void)stopUDPHeartbeat;
- (void)unsubscribeFromNetworkReachabilityNotifications;
- (void)xmppDidReceivedSyncServerTimeStamp:(double)arg1;
- (void)xmppStream:(id)arg1 didNotAuthenticate:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveError:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveReply:(id)arg2;
- (void)xmppStream:(id)arg1 tokenIllegal:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppStreamDidConnect:(id)arg1;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

