//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface YNChatRoomProfileHeadView : UIView
{
    UIImageView *_avatarImageView;
    UILabel *_subNameLabel;
    UILabel *_nameLabel;
    UILabel *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *subNameLabel; // @synthesize subNameLabel=_subNameLabel;
- (void)setupViewConstraints;

@end

