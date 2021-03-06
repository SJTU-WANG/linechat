//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface woaConfig : NSObject
{
    unsigned char _macXorKey;
    NSMutableDictionary *_dict;
    NSString *libraryPath;
    NSString *woaDirectory;
    NSString *woaConfigPlist;
    _Bool _isTestSet;
    unsigned long long currentStatusCode;
    NSString *_guidUrl;
    NSString *_recVeriSmsUrl;
    NSString *_uuid;
    NSString *_verifyClientUrl;
    NSString *_autoLoginUrl;
    NSString *_redirectUrl;
    NSString *_obtainUrl;
    NSString *_sessionId;
    NSString *_phoneNumber;
    NSString *_token;
    NSString *_phoneNo;
    NSString *_token4MobileAutologin;
    NSString *_phoneNo4MobileAutologin;
    NSString *_ptAccount;
    long long _carrierType;
    unsigned long long _timeOutSeconds;
    NSString *_carrierName;
    unsigned long long _maxRetryCount;
    NSString *_tempPhoneNum;
    NSString *_tempToken;
    NSString *_tempSessionKey;
    NSString *_tempSessionID;
}

+ (id)macAddress;
+ (id)shareWoaConfig;
@property(readonly) NSString *autoLoginUrl; // @synthesize autoLoginUrl=_autoLoginUrl;
@property(readonly) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(readonly) long long carrierType; // @synthesize carrierType=_carrierType;
- (void)checkCarrierType;
@property(nonatomic) unsigned long long currentStatusCode; // @synthesize currentStatusCode;
- (void)dealloc;
- (id)defaultSSN;
- (id)dynamicWith:(id)arg1;
- (unsigned char)getMacXorKey;
@property(copy, getter=getPhoneNo, setter=setPhoneNo:) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(copy, getter=getPhoneNo4MobileAutologin, setter=setPhoneNo4MobileAutologin:) NSString *phoneNo4MobileAutologin; // @synthesize phoneNo4MobileAutologin=_phoneNo4MobileAutologin;
@property(copy, getter=getPhoneNumber, setter=setPhoneNumber:) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, getter=getPtAccount, setter=setPtAccount:) NSString *ptAccount; // @synthesize ptAccount=_ptAccount;
@property(copy, getter=getSessionId, setter=setSessionId:) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, getter=getToken, setter=setToken:) NSString *token; // @synthesize token=_token;
@property(copy, getter=getToken4MobileAutologin, setter=setToken4MobileAutologin:) NSString *token4MobileAutologin; // @synthesize token4MobileAutologin=_token4MobileAutologin;
- (id)getXorData:(id)arg1 forKey:(id)arg2;
@property(readonly) NSString *guidUrl; // @synthesize guidUrl=_guidUrl;
- (id)init;
@property(readonly) _Bool isTestSet; // @synthesize isTestSet=_isTestSet;
- (id)loadFromFile;
@property unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(readonly) NSString *obtainUrl; // @synthesize obtainUrl=_obtainUrl;
@property(readonly) NSString *recVeriSmsUrl; // @synthesize recVeriSmsUrl=_recVeriSmsUrl;
@property(readonly) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain) NSString *tempPhoneNum; // @synthesize tempPhoneNum=_tempPhoneNum;
@property(retain) NSString *tempSessionID; // @synthesize tempSessionID=_tempSessionID;
@property(retain) NSString *tempSessionKey; // @synthesize tempSessionKey=_tempSessionKey;
@property(retain) NSString *tempToken; // @synthesize tempToken=_tempToken;
@property unsigned long long timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
- (void)setXorData:(id)arg1 strValue:(id)arg2 forKey:(id)arg3;
- (_Bool)synchronize;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSString *verifyClientUrl; // @synthesize verifyClientUrl=_verifyClientUrl;

@end

