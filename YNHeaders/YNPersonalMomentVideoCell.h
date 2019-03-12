//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNPersonalMomentBaseCell.h"

@class UIImageView;

@interface YNPersonalMomentVideoCell : YNPersonalMomentBaseCell
{
    UIImageView *_imgThumbnail;
    UIImageView *_imgVideoIcon;
    UIImageView *_failedImageView;
}

- (void).cxx_destruct;
- (void)configureImageView:(id)arg1 withModel:(id)arg2;
- (void)configureWithFeedSource:(id)arg1;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(retain, nonatomic) UIImageView *imgThumbnail; // @synthesize imgThumbnail=_imgThumbnail;
@property(retain, nonatomic) UIImageView *imgVideoIcon; // @synthesize imgVideoIcon=_imgVideoIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)showImagePreview;

@end

