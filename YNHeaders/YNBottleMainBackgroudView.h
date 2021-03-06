//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface YNBottleMainBackgroudView : UIView
{
    id <YNBottleMainBackgroudViewDelegate> _delegate;
    UIImageView *_backgroudView;
    UIImageView *_balloonView;
    UIImageView *_houseView;
    UIImageView *_lighthouseView;
    UIImageView *_moonView;
    UIImageView *_cloud;
    UIImageView *_cloudSmall;
    long long _timerCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
- (void)backgroudViewTaped:(id)arg1;
@property(retain, nonatomic) UIImageView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) UIImageView *cloud; // @synthesize cloud=_cloud;
@property(retain, nonatomic) UIImageView *cloudSmall; // @synthesize cloudSmall=_cloudSmall;
- (void)configMoonView;
- (void)dealloc;
@property(nonatomic) __weak id <YNBottleMainBackgroudViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *houseView; // @synthesize houseView=_houseView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isDaytime;
@property(retain, nonatomic) UIImageView *lighthouseView; // @synthesize lighthouseView=_lighthouseView;
@property(retain, nonatomic) UIImageView *moonView; // @synthesize moonView=_moonView;
- (void)moveCloudView;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;

@end

