//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YNReginCodeData : NSObject
{
    NSMutableArray *_userCountrysArray;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)checkCodeAccordingToTheNationalName:(id)arg1;
- (id)init;
- (void)readCountryData;
- (void)refreshData;
@property(retain, nonatomic) NSMutableArray *userCountrysArray; // @synthesize userCountrysArray=_userCountrysArray;
- (id)showReginNameWith:(id)arg1 provinceCode:(id)arg2 cityCode:(id)arg3;
- (id)showShortReginNameWith:(id)arg1 provinceCode:(id)arg2 cityCode:(id)arg3;

@end

