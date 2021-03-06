//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, YNChatInputItemSource;

@interface YNChatInputSwitchItemActionView : UIView
{
    _Bool _isNew;
    id <YNChatInputSwitchViewDelegate> _delegate;
    UIButton *_actionButton;
    UILabel *_titleLabel;
    UIButton *_reminderButton;
    YNChatInputItemSource *_source;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)chatInputSwitchItemActionButtonClicked:(id)arg1;
@property(nonatomic) __weak id <YNChatInputSwitchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) UIButton *reminderButton; // @synthesize reminderButton=_reminderButton;
@property(retain, nonatomic) YNChatInputItemSource *source; // @synthesize source=_source;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupViewConstraints;

@end

