//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface YNPersonalMomentImagePreviewBottomInfoView : UIView
{
    UIView *_animationView;
    _Bool _isLike;
    _Bool _isMyFriend;
    id <YNPersonalMomentImagePreviewBottomInfoViewDelegate> _delegate;
    UIView *_likeCommentView;
    UIView *_verticalLine;
    UIView *_likeView;
    UIButton *_likeIconBtn;
    UILabel *_likeTextLabel;
    UIView *_commentView;
    UIButton *_commentIconBtn;
    UILabel *_commentTextLabel;
    UIButton *_detailLikeCommentBtn;
    UIImageView *_likeIconRight;
    UILabel *_likeCountLabel;
    UIImageView *_commentIconRight;
    UILabel *_commentCountLabel;
    UIView *_textContentBgView;
    UILabel *_textContentLabel;
    UIView *_bottomInsetView;
    double _bottomInset;
    UIImageView *_failedImageView;
}

- (void).cxx_destruct;
- (id)attributedTextWithMediaSource:(id)arg1;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) UIView *bottomInsetView; // @synthesize bottomInsetView=_bottomInsetView;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UIButton *commentIconBtn; // @synthesize commentIconBtn=_commentIconBtn;
@property(retain, nonatomic) UIImageView *commentIconRight; // @synthesize commentIconRight=_commentIconRight;
@property(retain, nonatomic) UILabel *commentTextLabel; // @synthesize commentTextLabel=_commentTextLabel;
@property(retain, nonatomic) UIView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) __weak id <YNPersonalMomentImagePreviewBottomInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *detailLikeCommentBtn; // @synthesize detailLikeCommentBtn=_detailLikeCommentBtn;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
- (id)initWithMediaSource:(id)arg1;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isMyFriend; // @synthesize isMyFriend=_isMyFriend;
@property(retain, nonatomic) UIView *likeCommentView; // @synthesize likeCommentView=_likeCommentView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIButton *likeIconBtn; // @synthesize likeIconBtn=_likeIconBtn;
@property(retain, nonatomic) UIImageView *likeIconRight; // @synthesize likeIconRight=_likeIconRight;
- (void)likeOrCancelLike;
@property(retain, nonatomic) UILabel *likeTextLabel; // @synthesize likeTextLabel=_likeTextLabel;
@property(retain, nonatomic) UIView *likeView; // @synthesize likeView=_likeView;
- (void)makeComment;
@property(retain, nonatomic) UIView *textContentBgView; // @synthesize textContentBgView=_textContentBgView;
@property(retain, nonatomic) UILabel *textContentLabel; // @synthesize textContentLabel=_textContentLabel;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
- (void)showDetail;
- (void)updateFrameWithNavHidden:(_Bool)arg1;
- (void)updateInfoWithMediaSource:(id)arg1 isNavHidden:(_Bool)arg2;

@end

