//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class M13BadgeView, UIButton, UIImageView, UILabel;

@interface YNBottleBoardView : UIView
{
    id <YNBottleBoardViewDelegate> _delegate;
    UIImageView *_boardView;
    UIButton *_throwButton;
    UIButton *_pickButton;
    UIButton *_myBottleButton;
    M13BadgeView *_badgeView;
    UILabel *_throwLabel;
    UILabel *_pickLabel;
    UILabel *_myBottleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) M13BadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *boardView; // @synthesize boardView=_boardView;
@property(nonatomic) __weak id <YNBottleBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *myBottleButton; // @synthesize myBottleButton=_myBottleButton;
- (void)myBottleButtonClick:(id)arg1;
@property(retain, nonatomic) UILabel *myBottleLabel; // @synthesize myBottleLabel=_myBottleLabel;
@property(retain, nonatomic) UIButton *pickButton; // @synthesize pickButton=_pickButton;
- (void)pickButtonClick:(id)arg1;
@property(retain, nonatomic) UILabel *pickLabel; // @synthesize pickLabel=_pickLabel;
- (void)setBadgeText:(id)arg1;
@property(retain, nonatomic) UIButton *throwButton; // @synthesize throwButton=_throwButton;
@property(retain, nonatomic) UILabel *throwLabel; // @synthesize throwLabel=_throwLabel;
- (void)setupViewConstraints;
- (void)throwButtonClick:(id)arg1;

@end

