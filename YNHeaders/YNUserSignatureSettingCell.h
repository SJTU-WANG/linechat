//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UITextView;

@interface YNUserSignatureSettingCell : UITableViewCell
{
    UITextView *_textView;
    UILabel *_countLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setupViewConstraints;

@end
