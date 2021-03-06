//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDPBillDB : NSObject
{
}

+ (void)createTableWithPath:(id)arg1;
+ (id)fetchDataLimit:(long long)arg1 offSet:(long long)arg2;
+ (id)fetchLatestTradeTime;
+ (id)fetchMonthBillWith:(id)arg1 dataBase:(id)arg2;
+ (id)fetchMonthData;
+ (void)initialize;
+ (_Bool)insertDataWithModel:(id)arg1 dataBase:(id)arg2;
+ (void)insertMothBillWithModels:(id)arg1 dataBase:(id)arg2;
+ (_Bool)queryDataWithOrderID:(id)arg1 dataBase:(id)arg2;
+ (_Bool)queryMonthDataWithModel:(id)arg1 dataBase:(id)arg2;
+ (_Bool)saveDataWithModels:(id)arg1;
+ (_Bool)updateDataWithModel:(id)arg1 dataBase:(id)arg2;
+ (_Bool)updateMonthDataWithModel:(id)arg1 dataBase:(id)arg2;

@end

