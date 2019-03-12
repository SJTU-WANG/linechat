//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface YNChatRoomFloatView : UIView <UIGestureRecognizerDelegate>
{
    id <FloatViewDelegate> _delegate;
    UIView *_customView;
    UIImageView *_imageView;
    UILabel *_flaotLabel;
    UILabel *_bottomLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
- (void)creatFloatView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) id <FloatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *flaotLabel; // @synthesize flaotLabel=_flaotLabel;
- (void)gestureEvent:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 WithTitles:(id)arg2;
- (void)startAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
