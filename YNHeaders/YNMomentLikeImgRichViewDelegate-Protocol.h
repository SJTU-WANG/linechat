//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNFriend, YNLinkParseResult, YNMomentFeedComment;

@protocol YNMomentLikeImgRichViewDelegate <NSObject>
- (void)onHeadImgClicked:(YNFriend *)arg1;
- (void)onLikeImgRichViewZoneCommonLinkClicked:(YNLinkParseResult *)arg1;
- (void)onLikeImgRichViewZoneLongTap:(YNMomentFeedComment *)arg1 tapViewFrame:(struct CGRect)arg2;
- (void)onLikeImgRichViewZoneTap:(YNMomentFeedComment *)arg1 tapViewFrame:(struct CGRect)arg2;

@optional
- (_Bool)shouldRespondsToZoneTap:(YNMomentFeedComment *)arg1 tapViewFrame:(struct CGRect)arg2;
@end

