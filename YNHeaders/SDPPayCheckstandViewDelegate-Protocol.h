//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SDPPayMethodModel;

@protocol SDPPayCheckstandViewDelegate <NSObject>
- (void)onCloseRightButtonWithPassword:(NSString *)arg1;
- (void)payPasswordEncryptionFailurewithCode:(NSString *)arg1 message:(NSString *)arg2 payMethodModel:(SDPPayMethodModel *)arg3;
- (void)paySuccess:(NSString *)arg1 payMethodModel:(SDPPayMethodModel *)arg2;
@end

