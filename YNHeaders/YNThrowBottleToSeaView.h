//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView, YNPickBottleSprayView;

@interface YNThrowBottleToSeaView : UIView <CAAnimationDelegate>
{
    _Bool _isThrowTextBottle;
    UIImageView *_lightBackgroudView;
    UIImageView *_bottleImageView;
    UIImageView *_bottleContentImageView;
    YNPickBottleSprayView *_sprayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bottleContentImageView; // @synthesize bottleContentImageView=_bottleContentImageView;
@property(retain, nonatomic) UIImageView *bottleImageView; // @synthesize bottleImageView=_bottleImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isThrowTextBottle; // @synthesize isThrowTextBottle=_isThrowTextBottle;
@property(retain, nonatomic) UIImageView *lightBackgroudView; // @synthesize lightBackgroudView=_lightBackgroudView;
- (void)setIsThrowTextBottle:(_Bool)arg1 animationCompleted:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) YNPickBottleSprayView *sprayView; // @synthesize sprayView=_sprayView;
- (void)startThrowAnimationCompleted:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

