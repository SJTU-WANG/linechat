//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNFriend, YNLinkParseResult, YNMomentFeedComment;

@protocol YNMomentLikeCommentViewDelegate <NSObject>
- (void)onCommentZoneCommonLinkClicked:(YNLinkParseResult *)arg1;
- (void)onCommentZoneLongTap:(YNMomentFeedComment *)arg1 tapViewFrame:(struct CGRect)arg2;
- (void)onCommentZoneTap:(YNMomentFeedComment *)arg1 tapViewFrame:(struct CGRect)arg2;
- (void)onLikeCommentNickNameClicked:(YNFriend *)arg1;
@end

