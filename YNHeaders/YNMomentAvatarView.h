//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface YNMomentAvatarView : UIImageView
{
    id <YNMomentAvatarViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)avatarViewDidTap:(id)arg1;
@property(nonatomic) __weak id <YNMomentAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

