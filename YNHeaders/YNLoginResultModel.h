//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, YNFriend;

@interface YNLoginResultModel : NSObject
{
    _Bool _shouldMendProfile;
    _Bool _newUser;
    _Bool _hintStyle;
    _Bool _showUserStyle;
    NSError *_error;
    YNFriend *_profile;
    NSString *_replyurl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool hintStyle; // @synthesize hintStyle=_hintStyle;
@property(nonatomic) _Bool newUser; // @synthesize newUser=_newUser;
@property(retain, nonatomic) YNFriend *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSString *replyurl; // @synthesize replyurl=_replyurl;
@property(nonatomic) _Bool shouldMendProfile; // @synthesize shouldMendProfile=_shouldMendProfile;
@property(nonatomic) _Bool showUserStyle; // @synthesize showUserStyle=_showUserStyle;

@end

