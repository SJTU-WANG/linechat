//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMDBMigrating.h"

@class NSString;

@interface MigrationVersion10 : NSObject <FMDBMigrating>
{
}

- (_Bool)migrateDatabase:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSString *migrationIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

