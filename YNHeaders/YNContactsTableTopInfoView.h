//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YNBadgeView;

@interface YNContactsTableTopInfoView : UIView
{
    id <YNContactsTableTopInfoViewDelegate> _delegate;
    UIButton *_btnNewFriends;
    UIImageView *_imvNewFriends;
    UILabel *_lbNewFriends;
    YNBadgeView *_badgeView;
    UIView *_verticalLine;
    UIButton *_btnGroupChats;
    UIImageView *_imvGroupChats;
    UILabel *_lbGroupChats;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *btnGroupChats; // @synthesize btnGroupChats=_btnGroupChats;
@property(retain, nonatomic) UIButton *btnNewFriends; // @synthesize btnNewFriends=_btnNewFriends;
@property(nonatomic) __weak id <YNContactsTableTopInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imvGroupChats; // @synthesize imvGroupChats=_imvGroupChats;
@property(retain, nonatomic) UIImageView *imvNewFriends; // @synthesize imvNewFriends=_imvNewFriends;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *lbGroupChats; // @synthesize lbGroupChats=_lbGroupChats;
@property(retain, nonatomic) UILabel *lbNewFriends; // @synthesize lbNewFriends=_lbNewFriends;
- (void)setBadgeText:(id)arg1;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
- (void)showGroupChatsVC;
- (void)showNewFriendsVC;
- (void)updateBadgeFrame;

@end
