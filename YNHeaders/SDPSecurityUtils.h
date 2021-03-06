//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDPSecurityUtils : NSObject
{
}

+ (id)dataForHex:(id)arg1;
+ (id)decrypt3DES:(id)arg1;
+ (id)decrypt3DES:(id)arg1 key:(id)arg2;
+ (id)encrypt3DES:(id)arg1;
+ (id)encrypt3DES:(id)arg1 key:(id)arg2;
+ (id)encryptDataWithData:(id)arg1 publicKey:(struct __SecKey *)arg2;
+ (id)encryptDataWithString:(id)arg1 publicKey:(struct __SecKey *)arg2;
+ (id)encryptStringWithData:(id)arg1 publicKey:(struct __SecKey *)arg2;
+ (id)encryptStringWithString:(id)arg1 publicKey:(struct __SecKey *)arg2;
+ (id)hexForData:(id)arg1;
+ (id)hexForString:(id)arg1;
+ (id)hexRepresentationWithSpaces_AS:(_Bool)arg1 data:(id)arg2;
+ (id)local3DESKey;
+ (struct __SecKey *)rsaPublicKeyForX509CertData:(id)arg1;

@end

