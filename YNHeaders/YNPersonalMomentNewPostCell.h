//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNPersonalMomentBaseCell.h"

@class UIButton, UILabel, UIView;

@interface YNPersonalMomentNewPostCell : YNPersonalMomentBaseCell
{
    UIView *_bgView;
    UIButton *_postBtn;
    UILabel *_remarkLine1;
    UILabel *_remarkLine2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)configureWithFeedSource:(id)arg1;
- (void)createNewPost;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIButton *postBtn; // @synthesize postBtn=_postBtn;
@property(retain, nonatomic) UILabel *remarkLine1; // @synthesize remarkLine1=_remarkLine1;
@property(retain, nonatomic) UILabel *remarkLine2; // @synthesize remarkLine2=_remarkLine2;
- (void)setupConstraints;

@end
