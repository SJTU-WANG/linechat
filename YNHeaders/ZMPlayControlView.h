//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, UISlider;

@interface ZMPlayControlView : UIView
{
    id <ZMPlayControlViewDelegate> _delegate;
    UIView *_bottomView;
    UIButton *_smallPlayBtn;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    UISlider *_slider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (id)circleImageWithImage:(id)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
- (id)createImageWithColor:(id)arg1;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) __weak id <ZMPlayControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)makeSubViewsConstraints;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIButton *smallPlayBtn; // @synthesize smallPlayBtn=_smallPlayBtn;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
- (void)sliderTouchUpInside:(id)arg1;
- (void)sliderTouchUpOutside:(id)arg1;
- (void)sliderValuechange:(id)arg1;
- (void)smallPlayBtnMethod:(id)arg1;

@end
