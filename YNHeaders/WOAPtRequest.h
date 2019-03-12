//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WoaRequestBody.h"

@class NSMutableDictionary, NSString;

@interface WOAPtRequest : WoaRequestBody
{
    NSString *_userName;
    NSString *_pwd;
    NSMutableDictionary *mdictInfo;
}

- (_Bool)checkIsNeedRetry;
- (void)dealloc;
- (void)feedBackWith:(id)arg1;
- (void)getGuidFinish;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *mdictInfo; // @synthesize mdictInfo;
- (void)ptGuitRequestFail:(id)arg1;
- (void)ptGuitRequestSuccess:(id)arg1;
- (id)ptStringParserWithString:(id)arg1;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
- (void)requestFail:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (int)sdoEncryptSource:(id)arg1 encryptKey:(id)arg2 result:(id *)arg3;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)startRequest;
- (void)startRequestKeyTypeWithUrl:(id)arg1;

@end

