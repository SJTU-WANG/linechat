//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RegisterCountryCodePikerViewController;

@protocol RegisterCountryCodePickerDelegate <NSObject>
- (void)registerCountryCodePicker:(RegisterCountryCodePikerViewController *)arg1 didSelectedWithCountryName:(NSString *)arg2 countryCode:(NSString *)arg3;
- (void)registerCountryCodePickerDidSelectedCancel:(RegisterCountryCodePikerViewController *)arg1;
@end

