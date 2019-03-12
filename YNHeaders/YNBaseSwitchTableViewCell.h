//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNTableViewCell.h"

@class UIActivityIndicatorView, UILabel, UISwitch;

@interface YNBaseSwitchTableViewCell : YNTableViewCell
{
    id <YNBaseSwitchTableViewCellDelegate> _delegate;
    UILabel *_tagLabel;
    UISwitch *_switchView;
    UIActivityIndicatorView *_loadingView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YNBaseSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void)setupViewConstraints;
- (void)startWaiting;
- (void)stopWaiting;
- (void)switchValueDidChanged:(id)arg1;

@end

