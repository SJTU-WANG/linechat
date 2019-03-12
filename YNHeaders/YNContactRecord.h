//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface YNContactRecord : NSObject
{
    _Bool _isFriend;
    int _type;
    int _sex;
    NSString *_uid;
    long long _index;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_phoneNumberWithCountryCode;
    NSString *_avatarImageUrl;
    NSString *_avatarThumbnailImageUrl;
    NSString *_nickName;
    NSString *_myContactMame;
    NSString *_short_piny;
    NSString *_long_piny;
    NSString *_updateTime;
    NSString *_deviceType;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_signature;
    NSString *_email;
    NSMutableDictionary *_info;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_md5Phone;
    NSNumber *_recordID;
    NSString *_phoneNumberInContact;
    NSString *_sectionLetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *avatarImageUrl; // @synthesize avatarImageUrl=_avatarImageUrl;
@property(retain, nonatomic) NSString *avatarThumbnailImageUrl; // @synthesize avatarThumbnailImageUrl=_avatarThumbnailImageUrl;
- (_Bool)chekDuplicate;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
- (void)configureWithDic:(id)arg1;
- (void)configureWithRecord:(id)arg1;
- (id)contactName;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)deleteRecord;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)hash;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
- (id)init;
- (void)initPinyinProperty;
- (id)initWithFMResultSet:(id)arg1;
- (void)insert;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *long_piny; // @synthesize long_piny=_long_piny;
@property(retain, nonatomic) NSString *md5Phone; // @synthesize md5Phone=_md5Phone;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *myContactMame; // @synthesize myContactMame=_myContactMame;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *phoneNumberInContact; // @synthesize phoneNumberInContact=_phoneNumberInContact;
@property(retain, nonatomic) NSString *phoneNumberWithCountryCode; // @synthesize phoneNumberWithCountryCode=_phoneNumberWithCountryCode;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSNumber *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *sectionLetter; // @synthesize sectionLetter=_sectionLetter;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *short_piny; // @synthesize short_piny=_short_piny;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
- (id)showName;
- (void)update;

@end

