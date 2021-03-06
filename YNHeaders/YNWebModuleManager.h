//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSZipArchiveDelegate.h"

@class GCDMulticastDelegate<YNWebModuleManagerDelegate>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface YNWebModuleManager : NSObject <SSZipArchiveDelegate>
{
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSMutableDictionary *_pkgCheckedDict;
    NSMutableDictionary *_pkgUzipProcessDict;
    NSString *_currentDownlodPkgId;
    GCDMulticastDelegate<YNWebModuleManagerDelegate> *_multicastDelegate;
}

+ (id)defaultManager;
+ (_Bool)isNeedUpdateWithPkgId:(id)arg1 withVersion:(unsigned long long)arg2 withExitPkgArray:(id)arg3;
+ (_Bool)isPathExit:(id)arg1;
+ (id)packageUzipTmpPath:(id)arg1 version:(unsigned long long)arg2;
+ (id)packageZipTmpPath:(id)arg1 version:(unsigned long long)arg2;
+ (id)pkgPath:(id)arg1;
+ (id)webMainDirectory;
- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (_Bool)checkPkgFilesMd5:(id)arg1;
- (void)deletePkg:(id)arg1;
- (void)downloadAndVerifyPkg:(id)arg1;
- (id)fetchPkgListFromDB;
- (id)fetchPkgListFromDB:(double)arg1 isUsingPage:(_Bool)arg2;
- (void)fetchWebPkgByPkgId:(id)arg1 version:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchWebPkgByPkgIdFromDB:(id)arg1;
@property(nonatomic) _Bool hasInstallDefaultPkg;
- (id)init;
- (void)insertOrUpdateWebPkgs:(id)arg1;
- (void)launchAndCheckLocalResource;
@property(retain, nonatomic) GCDMulticastDelegate<YNWebModuleManagerDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
- (void)notifyResult:(_Bool)arg1 withModel:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)updateOrInstallWithPkgId:(id)arg1;
- (void)updateTimeIfOpenSucess:(id)arg1 isSave:(_Bool)arg2;
- (void)zipArchiveDidUnzipArchiveAtPath:(id)arg1 zipInfo:(struct unz_global_info_s)arg2 unzippedPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

