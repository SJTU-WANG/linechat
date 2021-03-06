//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YNLibraryMediaBaseCollectionViewCellDelegate.h"
#import "YNVideoClipViewControllerDelegate.h"

@class M13BadgeView, NSArray, NSString, UIButton, UICollectionView, UILabel, UIView;

@interface YNLibraryMediaContainerViewController : YNBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, YNLibraryMediaBaseCollectionViewCellDelegate, YNVideoClipViewControllerDelegate>
{
    _Bool _viewsHidden;
    _Bool _topTipsViewHidden;
    _Bool _bottomTipsViewHidden;
    _Bool _isDidLayoutSubviews;
    NSArray *_dataSourceArray;
    long long _currentIndex;
    UICollectionView *_collectionView;
    UIView *_topBarView;
    UIButton *_checkBoxButton;
    UIView *_topTipsView;
    UILabel *_topTipsLabel;
    UIView *_toolBarView;
    UIButton *_leftEditButton;
    UIButton *_originButton;
    UIButton *_completeButton;
    M13BadgeView *_selectedCountBadgeView;
    UIView *_bottomTipsView;
    UILabel *_bottomTipsLabel;
}

- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)backButtonClicked:(id)arg1;
@property(retain, nonatomic) UILabel *bottomTipsLabel; // @synthesize bottomTipsLabel=_bottomTipsLabel;
@property(retain, nonatomic) UIView *bottomTipsView; // @synthesize bottomTipsView=_bottomTipsView;
@property(nonatomic) _Bool bottomTipsViewHidden; // @synthesize bottomTipsViewHidden=_bottomTipsViewHidden;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
- (void)checkBoxButtonClicked:(id)arg1;
- (void)clipViewController:(id)arg1 didCompleteWithLocalVideo:(id)arg2;
- (void)clipViewControllerDidCancel:(id)arg1;
- (void)clipViewControllerDidClipFailed:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
- (void)completeButtonClicked:(id)arg1;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
- (void)dealloc;
- (void)drawView;
- (void)editButtonClicked:(id)arg1;
- (id)init;
- (void)initNavigationStatus:(_Bool)arg1 animate:(_Bool)arg2;
- (void)initToolBar;
@property(nonatomic) _Bool isDidLayoutSubviews; // @synthesize isDidLayoutSubviews=_isDidLayoutSubviews;
@property(retain, nonatomic) UIButton *leftEditButton; // @synthesize leftEditButton=_leftEditButton;
- (void)libraryMediaBaseCollectionViewCellDidSingleTaped:(id)arg1;
@property(retain, nonatomic) UIButton *originButton; // @synthesize originButton=_originButton;
- (void)originalButtonClicked:(id)arg1;
- (void)reloadDataSource;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) M13BadgeView *selectedCountBadgeView; // @synthesize selectedCountBadgeView=_selectedCountBadgeView;
- (void)setChecked:(_Bool)arg1;
- (void)setCompleteButtonEnabled:(_Bool)arg1;
- (void)setContentOffsetWithIndex:(long long)arg1;
@property(retain, nonatomic) UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UILabel *topTipsLabel; // @synthesize topTipsLabel=_topTipsLabel;
@property(retain, nonatomic) UIView *topTipsView; // @synthesize topTipsView=_topTipsView;
@property(nonatomic) _Bool topTipsViewHidden; // @synthesize topTipsViewHidden=_topTipsViewHidden;
@property(nonatomic) _Bool viewsHidden; // @synthesize viewsHidden=_viewsHidden;
- (void)updateOriginalButtonState;
- (void)updatePageControl;
- (void)updateSelectCount:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

