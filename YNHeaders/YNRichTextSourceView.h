//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, YNRichTextSource;

@interface YNRichTextSourceView : UIView
{
    _Bool _isBubbleStyle;
    YNRichTextSource *_source;
    UILabel *_titleView;
    UIImageView *_iconView;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isBubbleStyle; // @synthesize isBubbleStyle=_isBubbleStyle;
@property(retain, nonatomic) YNRichTextSource *source; // @synthesize source=_source;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;

@end

