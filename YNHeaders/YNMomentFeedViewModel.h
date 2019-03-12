//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableAttributedString, NSMutableDictionary, NSString, UIColor, UIFont, YNMomentFeed, YNMomentLikeCommentViewModel;

@interface YNMomentFeedViewModel : NSObject
{
    NSMutableDictionary *_likeMapping;
    _Bool _showDelete;
    _Bool _showReplyDetail;
    _Bool _showMediaAttachment;
    _Bool _hasRepliesContent;
    _Bool _commentEnable;
    _Bool _isShowingFullText;
    _Bool _isForFeedDetail;
    _Bool _userOperateEnable;
    _Bool _feedSendFailed;
    id <YNMomentFeedCellDelegate> _delegate;
    YNMomentFeed *_feed;
    UIColor *_contentBgColor;
    double _totalHeight;
    NSString *_avatarUrl;
    NSString *_nickname;
    NSString *_content;
    NSMutableAttributedString *_attributedText;
    NSString *_fullTextBtnTitle;
    NSString *_timeText;
    YNMomentLikeCommentViewModel *_likeCommentViewModel;
    NSArray *_likeList;
    NSArray *_commentList;
    unsigned long long _lengthType;
    struct CGRect _avatarFrame;
    struct CGRect _nicknameFrame;
    struct CGRect _contentFrame;
    struct CGRect _timeFrame;
    struct CGRect _commentFrame;
    struct CGRect _fullTextBtnFrame;
    struct CGRect _attachmentFrame;
    struct CGRect _replyFrame;
    struct CGRect _deleteFrame;
    struct CGRect _failedViewFrame;
}

+ (id)cellIdentifier;
+ (void)load;
+ (id)viewModelListWithFeedList:(id)arg1 delegate:(id)arg2;
+ (id)viewModelWithFeed:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect attachmentFrame; // @synthesize attachmentFrame=_attachmentFrame;
@property(retain, nonatomic) NSMutableAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) struct CGRect avatarFrame; // @synthesize avatarFrame=_avatarFrame;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void)caculateProperties;
- (id)checkIsLikedByUser:(id)arg1;
@property(nonatomic) _Bool commentEnable; // @synthesize commentEnable=_commentEnable;
@property(nonatomic) struct CGRect commentFrame; // @synthesize commentFrame=_commentFrame;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIColor *contentBgColor; // @synthesize contentBgColor=_contentBgColor;
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, nonatomic) UIFont *contentFont;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) __weak id <YNMomentFeedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect deleteFrame; // @synthesize deleteFrame=_deleteFrame;
@property(nonatomic) struct CGRect failedViewFrame; // @synthesize failedViewFrame=_failedViewFrame;
@property(retain, nonatomic) YNMomentFeed *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) _Bool feedSendFailed; // @synthesize feedSendFailed=_feedSendFailed;
- (void)fillLikeMapping;
@property(nonatomic) struct CGRect fullTextBtnFrame; // @synthesize fullTextBtnFrame=_fullTextBtnFrame;
@property(copy, nonatomic) NSString *fullTextBtnTitle; // @synthesize fullTextBtnTitle=_fullTextBtnTitle;
- (struct CGSize)getAttachmentViewSize;
@property(nonatomic) _Bool hasRepliesContent; // @synthesize hasRepliesContent=_hasRepliesContent;
- (id)initWithFeed:(id)arg1;
@property(nonatomic) _Bool isForFeedDetail; // @synthesize isForFeedDetail=_isForFeedDetail;
@property(nonatomic) _Bool isShowingFullText; // @synthesize isShowingFullText=_isShowingFullText;
@property(nonatomic) unsigned long long lengthType; // @synthesize lengthType=_lengthType;
@property(retain, nonatomic) YNMomentLikeCommentViewModel *likeCommentViewModel; // @synthesize likeCommentViewModel=_likeCommentViewModel;
@property(retain, nonatomic) NSArray *likeList; // @synthesize likeList=_likeList;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) UIColor *nicknameColor;
@property(readonly, nonatomic) UIFont *nicknameFont;
@property(nonatomic) struct CGRect nicknameFrame; // @synthesize nicknameFrame=_nicknameFrame;
@property(nonatomic) struct CGRect replyFrame; // @synthesize replyFrame=_replyFrame;
@property(nonatomic) _Bool showDelete; // @synthesize showDelete=_showDelete;
@property(nonatomic) _Bool showMediaAttachment; // @synthesize showMediaAttachment=_showMediaAttachment;
@property(nonatomic) _Bool showReplyDetail; // @synthesize showReplyDetail=_showReplyDetail;
@property(nonatomic) struct CGRect timeFrame; // @synthesize timeFrame=_timeFrame;
@property(copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(readonly, nonatomic) UIColor *timeColor;
@property(readonly, nonatomic) UIFont *timeFont;
@property(readonly, nonatomic) unsigned long long timestamp;
- (void)updateProperties;
- (void)updateWithFeed:(id)arg1;
@property(readonly, nonatomic) _Bool userOperateEnable; // @synthesize userOperateEnable=_userOperateEnable;

@end

