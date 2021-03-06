//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIColor, UIPageControl, UIScrollView;

@interface SDPBannerView : UIView <UIScrollViewDelegate>
{
    double _pageHeightToBottom;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSString *_imagePlaceholder;
    double _time;
    NSMutableArray *_imageDataArr;
    NSMutableArray *_bannerImgArr;
    NSTimer *_bannerTimer;
    long long _bannerCurrentIndex;
    double _bannerViewW;
    double _bannerViewH;
    CDUnknownBlockType _tapBlock;
}

- (void).cxx_destruct;
- (void)activateBannerTimer;
@property(nonatomic) long long bannerCurrentIndex; // @synthesize bannerCurrentIndex=_bannerCurrentIndex;
@property(retain, nonatomic) NSMutableArray *bannerImgArr; // @synthesize bannerImgArr=_bannerImgArr;
@property(retain, nonatomic) NSTimer *bannerTimer; // @synthesize bannerTimer=_bannerTimer;
@property(nonatomic) double bannerViewH; // @synthesize bannerViewH=_bannerViewH;
@property(nonatomic) double bannerViewW; // @synthesize bannerViewW=_bannerViewW;
- (void)changImgWithLetfIdx:(long long)arg1 centerIdx:(long long)arg2 rightIdx:(long long)arg3;
- (void)changeImgWithOffset:(double)arg1;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
- (void)dealloc;
- (void)destoryTimer;
- (void)eventForImageWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableArray *imageDataArr; // @synthesize imageDataArr=_imageDataArr;
@property(retain, nonatomic) NSString *imagePlaceholder; // @synthesize imagePlaceholder=_imagePlaceholder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imagesSource:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imagesSource:(id)arg2 placeholder:(id)arg3 timeInterval:(double)arg4;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) double pageHeightToBottom; // @synthesize pageHeightToBottom=_pageHeightToBottom;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)setupImageView;
- (void)setupPageControl;
- (void)setupTimer;
- (void)setupUI;
- (void)tapGesture:(id)arg1;
- (_Bool)verifyURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

