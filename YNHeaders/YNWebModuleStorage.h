//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YNStorageProtocol.h"

@interface YNWebModuleStorage : NSObject <YNStorageProtocol>
{
}

+ (void)YNStorageNeedCloseDBforUser:(id)arg1;
+ (void)YNStorageNeedSwitchDBforUser:(id)arg1;
+ (void)checkDBCreate;
+ (_Bool)deletePkg:(id)arg1;
+ (id)fetchWebPkgByPkgId:(id)arg1;
+ (id)fetchWebPkgList;
+ (id)fetchWebPkgList:(double)arg1 isUsingPage:(_Bool)arg2;
+ (_Bool)insertOrUpdateWebPkg:(id)arg1;
+ (_Bool)insertOrUpdateWebPkgs:(id)arg1;
+ (void)load;
+ (_Bool)private_deleteWebPkg:(id)arg1 withDB:(id)arg2;
+ (id)private_fetchWebPkgByPkgId:(id)arg1 withDB:(id)arg2;
+ (_Bool)private_insertWebPkg:(id)arg1 withDB:(id)arg2;
+ (_Bool)private_updateWebPkg:(id)arg1 withDB:(id)arg2;

@end

