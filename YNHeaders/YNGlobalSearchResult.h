//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YNChatRoom, YNFriend;

@interface YNGlobalSearchResult : NSObject
{
    _Bool _isSearchResultName;
    YNFriend *_friendModel;
    YNChatRoom *_chatRoomModel;
    NSString *_avatarThumbnailUrl;
    NSString *_resultName;
    NSString *_resultInfo;
    NSString *_searchText;
    unsigned long long _searchType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *avatarThumbnailUrl; // @synthesize avatarThumbnailUrl=_avatarThumbnailUrl;
@property(retain, nonatomic) YNChatRoom *chatRoomModel; // @synthesize chatRoomModel=_chatRoomModel;
@property(retain, nonatomic) YNFriend *friendModel; // @synthesize friendModel=_friendModel;
@property(nonatomic) _Bool isSearchResultName; // @synthesize isSearchResultName=_isSearchResultName;
@property(retain, nonatomic) NSString *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) NSString *resultName; // @synthesize resultName=_resultName;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;

@end

