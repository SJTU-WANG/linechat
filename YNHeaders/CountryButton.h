//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel;

@interface CountryButton : UIButton
{
    UILabel *_label;
    UIImageView *_accessoryView;
    NSString *_country;
    NSString *_code;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setHighlighted:(_Bool)arg1;

@end

