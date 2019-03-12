//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QNConfiguration;

@interface QNUploadManager : NSObject
{
    id <QNHttpDelegate> _httpManager;
    QNConfiguration *_config;
}

+ (_Bool)checkAndNotifyError:(id)arg1 token:(id)arg2 input:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (id)sharedInstanceWithConfiguration:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) QNConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) id <QNHttpDelegate> httpManager; // @synthesize httpManager=_httpManager;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithRecorder:(id)arg1;
- (id)initWithRecorder:(id)arg1 recorderKeyGenerator:(CDUnknownBlockType)arg2;
- (void)putALAsset:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;
- (void)putData:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;
- (void)putFile:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;
- (void)putFileInternal:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;
- (void)putPHAsset:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;
- (void)putPHAssetResource:(id)arg1 key:(id)arg2 token:(id)arg3 complete:(CDUnknownBlockType)arg4 option:(id)arg5;

@end

