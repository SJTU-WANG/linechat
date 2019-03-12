//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KSCrash, KSCrashInstallationStandard, NSDate;

@interface YNLogManager : NSObject
{
    _Bool _hasUploadedCrashForCurrentLaunch;
    int _currentTabIndex;
    int _discoverPageIndex;
    long long _destination;
    NSDate *_loginAccountDate;
    KSCrash *_crashReporter;
    KSCrashInstallationStandard *_crashInstallation;
}

+ (id)getDateFormatter:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)backgroudLogWithAction:(id)arg1 withStatus:(id)arg2 withDetail:(id)arg3;
- (void)checkAndSetFlagForUDPLogWithComponent:(id)arg1;
- (void)checkAndUploadCrashLogs;
@property(retain, nonatomic) KSCrashInstallationStandard *crashInstallation; // @synthesize crashInstallation=_crashInstallation;
@property(retain, nonatomic) KSCrash *crashReporter; // @synthesize crashReporter=_crashReporter;
@property int currentTabIndex; // @synthesize currentTabIndex=_currentTabIndex;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property int discoverPageIndex; // @synthesize discoverPageIndex=_discoverPageIndex;
- (id)fillIdfaAndIdfvWithParams:(id)arg1 withCategory:(unsigned long long)arg2;
- (id)getLogIndexDictionary;
@property(nonatomic) _Bool hasUploadedCrashForCurrentLaunch; // @synthesize hasUploadedCrashForCurrentLaunch=_hasUploadedCrashForCurrentLaunch;
- (id)init;
- (void)logAccessKeyDidFailWithCode:(id)arg1 detail:(id)arg2;
- (void)logAccessKeyDidStart;
- (void)logAccessKeyDidSuccessWithCode:(id)arg1 typeId:(id)arg2;
- (void)logAuthDidFailedWithAuthCode:(id)arg1 andMsg:(id)arg2;
- (void)logAuthDidFinishedWithAuthCode:(id)arg1;
- (void)logAuthDidiStart;
- (void)logConfigDidFailWithCode:(id)arg1 msg:(id)arg2;
- (void)logConfigDidStart;
- (void)logConfigDidSuccess;
- (void)logDBMigrationDidFailWithVersion:(long long)arg1 error:(id)arg2;
- (void)logDecryptError:(id)arg1;
- (void)logDidActivateConversation;
- (void)logDidCancelNotificationReason:(id)arg1;
- (void)logDidCheckPhoneNumber:(id)arg1 containToAddressBook:(_Bool)arg2;
- (void)logDidClearLocataionDataFailed:(id)arg1;
- (void)logDidCompressFinishedWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 fileSize:(double)arg5;
- (void)logDidCompressStartWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidConnectFailed:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (void)logDidConnectFailedWithIpPort:(id)arg1;
- (void)logDidConnectStart;
- (void)logDidConnectSucces:(id)arg1 duration:(double)arg2;
- (void)logDidDBOperationFailedWithOperation:(id)arg1 sql:(id)arg2 errorCode:(long long)arg3 errorDetail:(id)arg4;
- (void)logDidDeactivateConversation;
- (void)logDidDispatchFailed:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (void)logDidDispatchStart;
- (void)logDidDispatchSucces:(id)arg1 duration:(double)arg2;
- (void)logDidDoingSync;
- (void)logDidDownloadResourceWithFileSize:(long long)arg1 type:(unsigned long long)arg2 messageID:(id)arg3 md5:(id)arg4 status:(id)arg5;
- (void)logDidEndConnectingAnimation;
- (void)logDidEndSyncAnimation;
- (void)logDidEnterNewFriendsVC;
- (void)logDidEnterThroughUniversalLinks;
- (void)logDidEverySyncSuccessWithCode:(long long)arg1 withExtra:(id)arg2;
- (void)logDidFailedDownLoadResourceWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 messageAudioUrl:(id)arg5 error:(id)arg6;
- (void)logDidFailedReceiveReplyForMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 errorCode:(unsigned int)arg5;
- (void)logDidFailedUploadFileForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6 response:(id)arg7 errorStr:(id)arg8;
- (void)logDidFailedUploadResourceWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidFinishDeleteFriend:(id)arg1;
- (void)logDidFinishdUploadChunkForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6 withBlockInfo:(id)arg7;
- (void)logDidFinishedCheckForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 checkResult:(id)arg6 md5:(id)arg7;
- (void)logDidFinishedDatabaseFixWithStatus:(id)arg1;
- (void)logDidFinishedUploadBlockForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidGetNearbyPeopleFailed:(id)arg1;
- (void)logDidGetShakeUserFailed:(id)arg1;
- (void)logDidHttpRequestFailWithUrl:(id)arg1 error:(id)arg2;
- (void)logDidLinkConnectFailed:(id)arg1;
- (void)logDidLinkConnectStart;
- (void)logDidLinkConnectSuccess;
- (void)logDidLoadLocalMessageWithConversationExist:(_Bool)arg1;
- (void)logDidLoginAccountFailed:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (void)logDidLoginAccountStart;
- (void)logDidLoginAccountSucces:(id)arg1 duration:(double)arg2;
- (void)logDidLogoutAccount;
- (void)logDidMakeFileForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidMessageInsertDB:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidMessageProcessPacketStartDecodeProtobuf;
- (void)logDidMessageProcessPacketStartDecrypt;
- (void)logDidMomentPostFeed:(long long)arg1 status:(id)arg2;
- (void)logDidMomentRefreshData:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 success:(_Bool)arg4;
- (void)logDidMsgAuthFailed:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (void)logDidMsgAuthStart;
- (void)logDidMsgAuthSucces:(id)arg1 duration:(double)arg2;
- (void)logDidMsg_reconnectStartWithReason:(id)arg1;
- (void)logDidMsg_reconnectWithTimes:(long long)arg1;
- (void)logDidProtoBufferParseFailWithData:(id)arg1 error:(id)arg2;
- (void)logDidReceiveMessageStartParseWithPackLength:(long long)arg1 packType:(long long)arg2;
- (void)logDidReceiveMessageWithConversationExist:(_Bool)arg1 andTargetMessageExist:(_Bool)arg2;
- (void)logDidReceiveNewMessageWithEmptySelfConversation:(id)arg1;
- (void)logDidReceivedWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidRedpacketCheckRealNameWithResult:(long long)arg1;
- (void)logDidReplyWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidSendMessageWithConversationExist:(_Bool)arg1 andTargetMessageExist:(_Bool)arg2;
- (void)logDidShowDatabaseFixVC;
- (void)logDidShowNoneStatusMessage:(id)arg1 type:(unsigned long long)arg2;
- (void)logDidStartCheckForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidStartConnectingAnimation;
- (void)logDidStartDeleteFriend:(id)arg1;
- (void)logDidStartDownLoadResourceWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidStartInsertDBWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidStartSendMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidStartSendMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 fromUid:(id)arg5 chatRoomID:(id)arg6 title:(id)arg7;
- (void)logDidStartSendReplyForMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidStartSendWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 isResendFromFailed:(_Bool)arg5 isResendWithoutNetwork:(_Bool)arg6 isAutoResend:(_Bool)arg7;
- (void)logDidStartSyncAnimation;
- (void)logDidStartSyncWithReason:(id)arg1;
- (void)logDidStartUploadBlockForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidStartUploadChunkForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6 withBlockInfo:(id)arg7;
- (void)logDidStartUploadResourceWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidStartUploadResourceWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 fileSize:(double)arg5;
- (void)logDidStartWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logDidSuccessUploadFileForChunkUploadInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidSyncDataIsInvalidWithData:(id)arg1;
- (void)logDidSyncDynamicConfig:(id)arg1;
- (void)logDidSyncFailWithErrorCode:(long long)arg1 errorDetail:(id)arg2 extra:(id)arg3 withStartTime:(long long)arg4;
- (void)logDidSyncFiledWithResponse:(id)arg1 error:(id)arg2;
- (void)logDidSyncHandleLogUploadConfig:(id)arg1;
- (void)logDidSyncHandleResource:(id)arg1;
- (void)logDidSyncHandleStart;
- (void)logDidSyncHandlerFailToHandleSync:(id)arg1 error:(id)arg2;
- (void)logDidSyncHandlersIsEmpty;
- (void)logDidSyncProcessWithParams:(id)arg1;
- (void)logDidSyncSuccessWithCode:(long long)arg1 extra:(id)arg2 withStartTime:(long long)arg3;
- (void)logDidUpdateHttpDNSFailedWithError:(id)arg1;
- (void)logDidUpdateHttpDNSStart:(id)arg1;
- (void)logDidUpdateHttpDNSSuccess:(id)arg1;
- (void)logDidUpdateNoneStatusMessage:(id)arg1 type:(unsigned long long)arg2;
- (void)logDidUploadResourceEndWithMessageID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4 response:(id)arg5 error:(id)arg6;
- (void)logDidUploadTaskStartWithInfoFileSize:(long long)arg1 type:(unsigned long long)arg2 fileName:(id)arg3 hdFlag:(long long)arg4 messageID:(id)arg5 md5:(id)arg6;
- (void)logDidVideoDownloadFailed;
- (void)logDidVideoDownloadStart;
- (void)logDidWaitForSync;
- (void)logEncryptError:(id)arg1;
- (void)logFailToDeleteFriend:(id)arg1 error:(id)arg2;
- (void)logIpRequestDidFailWithURL:(id)arg1 ipList:(id)arg2;
- (void)logIpRequestDidSuccessWithURL:(id)arg1 ipList:(id)arg2;
- (void)logMessageDidFisniehdDownLoadResourceWithID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logMessageDidFisniehdUploadResourceWithID:(id)arg1 messageFrom:(id)arg2 messageTo:(id)arg3 messageType:(long long)arg4;
- (void)logRegisterSendSMSDidFailWithphoneNum:(id)arg1 type:(long long)arg2 ErrorMsg:(id)arg3;
- (void)logRegisterSendSMSDidStart:(id)arg1 type:(long long)arg2;
- (void)logRegisterSendSMSDidSuccess:(id)arg1 type:(long long)arg2;
- (void)logRegisterValidateSMSDidFailWithphoneNum:(id)arg1 type:(long long)arg2 ErrorMsg:(id)arg3;
- (void)logRegisterValidateSMSDidStart:(id)arg1 type:(long long)arg2;
- (void)logRegisterValidateSMSDidSuccess:(id)arg1 type:(long long)arg2;
- (void)logUploadAPNSStatus:(id)arg1;
@property(retain, nonatomic) NSDate *loginAccountDate; // @synthesize loginAccountDate=_loginAccountDate;
- (void)nearbyPeopleLogWithAction:(id)arg1 withlocaAuth:(id)arg2 withlocaGet:(id)arg3 withlocadetail:(id)arg4;
- (id)networkStatus;
- (void)playerLogWithTag:(id)arg1 withMessage:(id)arg2;
- (void)recordCustomLogWithName:(id)arg1 reason:(id)arg2;
- (void)redPacketLagLogWithAction:(id)arg1 withStatus:(id)arg2 withExtra:(id)arg3;
- (id)redioType;
- (void)startCrashRecording;
- (id)transitionUploadLogWithDictionary:(id)arg1;
- (id)userLogTransitionUploadLogWithDictionary:(id)arg1;
- (void)userLogWithComponet:(id)arg1 withAction:(id)arg2 withStatus:(id)arg3 withExtra:(id)arg4 withPagePath:(id)arg5 withCategory:(unsigned long long)arg6;
- (void)ynLogToConsoleWithDictionary:(id)arg1;
- (void)ynLogToFileWithDictionary:(id)arg1 withCategory:(unsigned long long)arg2;
- (void)ynLogToServerWithDictionary:(id)arg1 withCategory:(unsigned long long)arg2;
- (void)ynLogWithDictionary:(id)arg1;

@end

