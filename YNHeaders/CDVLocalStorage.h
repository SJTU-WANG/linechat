//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSMutableArray;

@interface CDVLocalStorage : CDVPlugin
{
    NSMutableArray *backupInfo;
    id <UIWebViewDelegate> webviewDelegate;
}

+ (void)__fixupDatabaseLocationsWithBackupType:(id)arg1;
+ (void)__restoreLegacyDatabaseLocationsWithBackupType:(id)arg1;
+ (void)__verifyAndFixDatabaseLocations;
+ (_Bool)__verifyAndFixDatabaseLocationsWithAppPlistDict:(id)arg1 bundlePath:(id)arg2 fileManager:(id)arg3;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1 skip:(_Bool)arg2;
+ (_Bool)copyFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
+ (id)createBackupInfoWithCloudBackup:(_Bool)arg1;
+ (id)createBackupInfoWithTargetDir:(id)arg1 backupDir:(id)arg2 targetDirNests:(_Bool)arg3 backupDirNests:(_Bool)arg4 rename:(_Bool)arg5;
- (void).cxx_destruct;
- (void)backup:(id)arg1;
@property(retain, nonatomic) NSMutableArray *backupInfo; // @synthesize backupInfo;
- (void)onAppTerminate;
- (void)onReset;
- (void)onResignActive;
- (void)pluginInitialize;
- (void)restore:(id)arg1;
@property(nonatomic) __weak id <UIWebViewDelegate> webviewDelegate; // @synthesize webviewDelegate;
- (_Bool)shouldBackup;
- (_Bool)shouldRestore;

@end

