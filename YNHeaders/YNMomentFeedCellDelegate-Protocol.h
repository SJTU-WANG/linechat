//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class YNFriend, YNLinkParseResult, YNMomentFeedCell, YNMomentFeedComment;

@protocol YNMomentFeedCellDelegate
- (void)YNMomentFeedCell:(YNMomentFeedCell *)arg1 didLongPressTextFromRect:(struct CGRect)arg2;
- (void)YNMomentFeedCell:(YNMomentFeedCell *)arg1 onCommentZoneCommonLinkClicked:(YNLinkParseResult *)arg2;
- (void)YNMomentFeedCell:(YNMomentFeedCell *)arg1 onCommentZoneLongTap:(YNMomentFeedComment *)arg2 fromRect:(struct CGRect)arg3;
- (void)YNMomentFeedCell:(YNMomentFeedCell *)arg1 onCommentZoneTap:(YNMomentFeedComment *)arg2;
- (void)YNMomentFeedCell:(YNMomentFeedCell *)arg1 onLikeCommentNickNameClicked:(YNFriend *)arg2;
- (void)YNMomentFeedCellDidTapComment:(YNMomentFeedCell *)arg1;
- (void)YNMomentFeedCellDidTapDeleteButton:(YNMomentFeedCell *)arg1;
- (void)YNMomentFeedCellDidTapFullTextButton:(YNMomentFeedCell *)arg1;
- (void)YNMomentFeedCellDidTapNickname:(YNMomentFeedCell *)arg1;
- (void)YNMomentFeedCellDidTapText:(YNMomentFeedCell *)arg1;

@optional
- (_Bool)YNMomentFeedCell:(YNMomentFeedCell *)arg1 shouldRespondsToZoneTap:(YNMomentFeedComment *)arg2 tapViewFrame:(struct CGRect)arg3;
- (void)YNMomentFeedCellDidTapFailedButton:(YNMomentFeedCell *)arg1;
@end

