//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SDPMonthModel : NSObject
{
    NSString *_phoneNumber;
    NSString *_month;
    NSString *_earning;
    NSString *_expenditure;
    NSArray *_detailBills;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *detailBills; // @synthesize detailBills=_detailBills;
@property(copy, nonatomic) NSString *earning; // @synthesize earning=_earning;
@property(copy, nonatomic) NSString *expenditure; // @synthesize expenditure=_expenditure;
@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

@end

