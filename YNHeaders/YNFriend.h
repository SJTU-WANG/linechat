//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YNChatInfoMemberProtocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface YNFriend : NSObject <YNChatInfoMemberProtocol>
{
    NSString *_nickName;
    NSString *_tagName;
    NSString *_remarkDescription;
    NSString *_avatarImageUrl;
    NSString *_avatarThumbnailImageUrl;
    NSString *_sectionLetter;
    _Bool _isStarFriend;
    _Bool _canSeeMyTimeLine;
    _Bool _seeFriendTimeLine;
    _Bool _isInMyBlackList;
    _Bool _isChatConversationAwaysTop;
    _Bool _doNotDisturbMe;
    _Bool _hiddenPhoneNumber;
    _Bool _isSelect;
    _Bool _isLike;
    int _localType;
    int _sex;
    NSString *_uid;
    long long _index;
    unsigned long long _serverType;
    unsigned long long _bizType;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_phoneNumberWithCountryCode;
    NSString *_myContactMame;
    NSMutableArray *_tagsArray;
    NSString *_tagDescription;
    NSString *_tagDescriptionImageUrl;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_hobby;
    NSString *_birthday;
    NSString *_age;
    NSString *_chatBackgroundImageUrl;
    NSString *_short_piny;
    NSString *_long_piny;
    NSString *_updateTime;
    NSString *_deviceType;
    NSString *_signature;
    NSString *_email;
    NSString *_barCode;
    long long _addSourceType;
    NSString *_addSource;
    NSString *_remarkTel;
    NSMutableDictionary *_info;
    NSString *_zhangxinID;
    long long _status;
    long long _privacyConfig;
    NSString *_tagNameLongPinyin;
    NSString *_tagNameShortPinyin;
    NSDictionary *_coverInfo;
    NSArray *_imgList;
}

+ (_Bool)checkIsValidFriendType:(unsigned long long)arg1;
+ (id)creatStrangerFriendByFriend:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *addSource; // @synthesize addSource=_addSource;
@property(nonatomic) long long addSourceType; // @synthesize addSourceType=_addSourceType;
@property(retain, nonatomic) NSString *age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *avatarImageUrl; // @synthesize avatarImageUrl=_avatarImageUrl;
@property(retain, nonatomic) NSString *avatarThumbnailImageUrl; // @synthesize avatarThumbnailImageUrl=_avatarThumbnailImageUrl;
@property(retain, nonatomic) NSString *barCode; // @synthesize barCode=_barCode;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool canSeeMyTimeLine; // @synthesize canSeeMyTimeLine=_canSeeMyTimeLine;
@property(retain, nonatomic) NSString *chatBackgroundImageUrl; // @synthesize chatBackgroundImageUrl=_chatBackgroundImageUrl;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
- (void)configureWithDic:(id)arg1;
- (void)confitureFromInfo;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSDictionary *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) _Bool doNotDisturbMe; // @synthesize doNotDisturbMe=_doNotDisturbMe;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) _Bool hiddenPhoneNumber; // @synthesize hiddenPhoneNumber=_hiddenPhoneNumber;
@property(retain, nonatomic) NSString *hobby; // @synthesize hobby=_hobby;
@property(retain, nonatomic) NSArray *imgList; // @synthesize imgList=_imgList;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
- (id)init;
- (void)initPinyinProperty;
- (id)initWithFMResultSet:(id)arg1;
- (id)initWithServiceDic:(id)arg1;
@property(nonatomic) _Bool isChatConversationAwaysTop; // @synthesize isChatConversationAwaysTop=_isChatConversationAwaysTop;
@property(nonatomic) _Bool isInBlacklist;
@property(nonatomic) _Bool isInMyBlackList; // @synthesize isInMyBlackList=_isInMyBlackList;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isOpenFriendConfirmation; // @dynamic isOpenFriendConfirmation;
@property(nonatomic) _Bool isOpenRecommendAddressbook; // @dynamic isOpenRecommendAddressbook;
@property(nonatomic) _Bool isOpenSearchByPhoneNumber; // @dynamic isOpenSearchByPhoneNumber;
@property(nonatomic) _Bool isOpenSearchByPlamID; // @dynamic isOpenSearchByPlamID;
@property(readonly, nonatomic) _Bool isPalmChatService;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(readonly, nonatomic) _Bool isService;
@property(nonatomic) _Bool isShowFriendAccurateRecommend; // @dynamic isShowFriendAccurateRecommend;
@property(nonatomic) _Bool isShowNewRecommend; // @dynamic isShowNewRecommend;
@property(nonatomic) _Bool isShowNotificationDetaile; // @dynamic isShowNotificationDetaile;
@property(nonatomic) _Bool isShowOnlineRecommend; // @dynamic isShowOnlineRecommend;
@property(nonatomic) _Bool isStarFriend; // @synthesize isStarFriend=_isStarFriend;
@property(readonly, nonatomic) _Bool isStranger;
- (_Bool)isValidRemarkPhoneNumber:(id)arg1;
@property(nonatomic) int localType; // @synthesize localType=_localType;
@property(retain, nonatomic) NSString *long_piny; // @synthesize long_piny=_long_piny;
@property(retain, nonatomic) NSString *myContactMame; // @synthesize myContactMame=_myContactMame;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *phoneNumberWithCountryCode; // @synthesize phoneNumberWithCountryCode=_phoneNumberWithCountryCode;
@property(nonatomic) long long privacyConfig; // @synthesize privacyConfig=_privacyConfig;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *remarkDescription; // @synthesize remarkDescription=_remarkDescription;
@property(retain, nonatomic) NSString *remarkTel; // @synthesize remarkTel=_remarkTel;
@property(retain, nonatomic) NSString *sectionLetter; // @synthesize sectionLetter=_sectionLetter;
@property(nonatomic) _Bool seeFriendTimeLine; // @synthesize seeFriendTimeLine=_seeFriendTimeLine;
@property(nonatomic) unsigned long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *short_piny; // @synthesize short_piny=_short_piny;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *tagDescription; // @synthesize tagDescription=_tagDescription;
@property(retain, nonatomic) NSString *tagDescriptionImageUrl; // @synthesize tagDescriptionImageUrl=_tagDescriptionImageUrl;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSString *tagNameLongPinyin; // @synthesize tagNameLongPinyin=_tagNameLongPinyin;
@property(retain, nonatomic) NSString *tagNameShortPinyin; // @synthesize tagNameShortPinyin=_tagNameShortPinyin;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *zhangxinID; // @synthesize zhangxinID=_zhangxinID;
- (id)showName;
- (id)showRegionName;
- (id)showShortRegionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
