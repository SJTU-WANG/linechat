//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNPersonalMomentBaseCell.h"

@class UIImageView, UILabel;

@interface YNPersonalMomentWebCell : YNPersonalMomentBaseCell
{
    UIImageView *_webImgThumbnail;
    UILabel *_webContentLabel;
    UIImageView *_failedImageView;
}

- (void).cxx_destruct;
- (void)configureWithFeedSource:(id)arg1;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)jumpToDetail;
@property(retain, nonatomic) UILabel *webContentLabel; // @synthesize webContentLabel=_webContentLabel;
@property(retain, nonatomic) UIImageView *webImgThumbnail; // @synthesize webImgThumbnail=_webImgThumbnail;
- (void)setupConstraints;

@end

