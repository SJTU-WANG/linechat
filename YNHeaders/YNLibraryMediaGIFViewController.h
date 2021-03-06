//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNLibraryMediaBaseViewController.h"

#import "YNImageScrollViewDelegate.h"

@class NSString, YNImageScrollView, YYLabel;

@interface YNLibraryMediaGIFViewController : YNLibraryMediaBaseViewController <YNImageScrollViewDelegate>
{
    YNImageScrollView *_scrollView;
    YYLabel *_gifTipsLabel;
}

- (void).cxx_destruct;
- (void)configScrollViewImage;
- (void)didSingleTaped:(id)arg1;
@property(retain, nonatomic) YYLabel *gifTipsLabel; // @synthesize gifTipsLabel=_gifTipsLabel;
@property(retain, nonatomic) YNImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setupViewConstraints;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

