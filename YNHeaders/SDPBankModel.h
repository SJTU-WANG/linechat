//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SDPBankModel : NSObject
{
    _Bool _lastPay;
    NSString *_agreementNo;
    NSString *_bankName;
    NSString *_cardNo;
    NSString *_cardType;
    NSString *_bankCode;
    NSString *_mobile;
}

+ (id)modelWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *agreementNo; // @synthesize agreementNo=_agreementNo;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) _Bool lastPay; // @synthesize lastPay=_lastPay;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;

@end
