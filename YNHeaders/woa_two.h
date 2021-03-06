//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageComposeViewControllerDelegate.h"

@class NSDictionary, NSString, SBJsonParser, SBJsonWriter, UIViewController, WOAHttpRequest, WoaRequestBody, woaConfig;

@interface woa_two : NSObject <MFMessageComposeViewControllerDelegate>
{
    NSString *_theTempKey;
    SBJsonParser *_parser;
    SBJsonWriter *_writer;
    woaConfig *_woaCfg;
    WoaRequestBody *_currentRequest;
    WOAHttpRequest *woaConfigRequest;
    unsigned long long _appId;
    unsigned long long _areaId;
    NSDictionary *_guid;
    NSDictionary *_verify;
    NSString *_phoneNumber;
    unsigned long long _productId;
    unsigned long long _channelId;
    id <woaCallBackDelegate> _delegate;
    NSString *_resultMsg;
    long long _resultCode;
    UIViewController *_showSmsViewCtrl;
    long long _requestErrorCode;
}

+ (id)shareWoaTwo;
- (id)ASIHTTPRequestWithURLString:(id)arg1;
- (id)SBJsonParserWithString:(id)arg1;
@property unsigned long long appId; // @synthesize appId=_appId;
@property unsigned long long areaId; // @synthesize areaId=_areaId;
- (_Bool)autoLogin;
- (void)autoLoginAutoCheck;
- (void)autoLoginInBackground;
- (void)autoPtLoginInBackground;
- (id)buildResDicWithErrorCode:(unsigned long long)arg1 msg:(id)arg2;
- (void)callBack:(int)arg1 token:(id)arg2;
@property unsigned long long channelId; // @synthesize channelId=_channelId;
- (void)checkMobileSendSMSLoginInBackground;
- (_Bool)checkSimCard;
- (_Bool)checkVerificationCode:(id)arg1;
- (void)configRequestFail:(id)arg1;
- (void)configRequestSuccess:(id)arg1;
- (void)dealloc;
@property(nonatomic) id <woaCallBackDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyNotification:(id)arg1;
- (void)doAutoLoginResult:(id)arg1;
- (void)doCheckVerificationCodeResult:(id)arg1;
- (void)doLoginWithKeyResult:(id)arg1;
- (void)doMobileReceiveSMSLoginResult:(id)arg1;
- (void)doMobileSendSMSLoginGetGUID:(id)arg1;
- (void)doMobileSendSMSLoginResult:(id)arg1;
- (void)doMobileSendSMSVerifyResult:(id)arg1;
- (void)feedBack;
- (void)feedBackWith:(_Bool)arg1 token:(id)arg2;
- (id)filterNumberChar:(id)arg1;
- (_Bool)getGuid:(_Bool)arg1;
- (int)getGuidWith:(int)arg1;
- (id)getResDicWithErrorCode:(unsigned long long)arg1;
- (id)getSmsText;
@property(retain) NSDictionary *guid; // @synthesize guid=_guid;
- (void)hiddenMessageUI;
- (void)ininConfig;
- (id)init;
- (void)loginByPT:(id)arg1 password:(id)arg2;
- (void)loginByPTInBackground:(id)arg1;
- (void)loginByPTResult:(id)arg1;
- (void)loginWithKey:(id)arg1 type:(int)arg2;
- (void)loginWithKeyInBackground:(id)arg1;
- (void)loginWithKeyType:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (_Bool)mobileAutoLogin;
- (void)mobileReceiveSMSLogin:(id)arg1;
- (void)mobileReceiveSMSLoginInBackground:(id)arg1;
- (_Bool)mobileSendSMSLogin:(id)arg1;
- (void)mobileSendSMSLoginGetGUIDInBackground;
@property(retain) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property unsigned long long productId; // @synthesize productId=_productId;
- (id)ptStringParserWithString:(id)arg1;
@property long long requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property long long resultCode; // @synthesize resultCode=_resultCode;
@property(copy) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
- (void)saveGuid;
- (void)saveGuidResult:(id)arg1;
- (int)sdoEncryptSource:(id)arg1 encryptKey:(id)arg2 result:(id *)arg3;
@property(retain, nonatomic) UIViewController *showSmsViewCtrl; // @synthesize showSmsViewCtrl=_showSmsViewCtrl;
@property(retain, nonatomic) NSString *theTempKey; // @synthesize theTempKey=_theTempKey;
@property(retain) NSDictionary *verify; // @synthesize verify=_verify;
@property(retain, nonatomic) WOAHttpRequest *woaConfigRequest; // @synthesize woaConfigRequest;
- (void)updateData;
- (void)userNameExists:(id)arg1;
- (void)userNameRegister:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

