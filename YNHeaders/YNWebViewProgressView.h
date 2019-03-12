//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer;

@interface YNWebViewProgressView : UIView
{
    float _progress;
    UIView *_progressBarView;
    double _barAnimationDuration;
    double _fadeAnimationDuration;
    double _fadeOutDelay;
    NSTimer *_timer;
    NSMutableArray *_progressQueue;
}

- (void).cxx_destruct;
- (id)animationsWithProgress:(double)arg1 lastProgress:(id)arg2;
- (void)awakeFromNib;
@property(nonatomic) double barAnimationDuration; // @synthesize barAnimationDuration=_barAnimationDuration;
- (void)completeProgress;
- (void)configureViews;
- (void)dealloc;
- (void)endProgressAnimation;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double fadeOutDelay; // @synthesize fadeOutDelay=_fadeOutDelay;
- (void)hideProgressViewAnimated;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)next:(id)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) NSMutableArray *progressQueue; // @synthesize progressQueue=_progressQueue;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)startProgressAnimation;

@end

