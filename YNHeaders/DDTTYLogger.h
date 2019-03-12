//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger.h"

@class NSCalendar, NSMutableArray, NSMutableDictionary, NSString;

@interface DDTTYLogger : DDAbstractLogger <DDLogger>
{
    NSCalendar *calendar;
    unsigned long long calendarUnitFlags;
    NSString *appName;
    char *app;
    unsigned long long appLen;
    NSString *processID;
    char *pid;
    unsigned long long pidLen;
    _Bool colorsEnabled;
    NSMutableArray *colorProfilesArray;
    NSMutableDictionary *colorProfilesDict;
}

+ (unsigned long long)codeIndexForColor:(id)arg1;
+ (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 fromColor:(id)arg4;
+ (void)initialize;
+ (void)initialize_colors_16;
+ (void)initialize_colors_256;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearAllColors;
- (void)clearColorsForAllFlags;
- (void)clearColorsForAllTags;
- (void)clearColorsForFlag:(int)arg1;
- (void)clearColorsForFlag:(int)arg1 context:(int)arg2;
- (void)clearColorsForTag:(id)arg1;
@property _Bool colorsEnabled;
- (id)init;
- (void)loadDefaultColorProfiles;
- (void)logMessage:(id)arg1;
- (id)loggerName;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 context:(int)arg4;
- (void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forTag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

