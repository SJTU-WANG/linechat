//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView, UILongPressGestureRecognizer, UIPageControl, YNEmotionKeyboardItemGroup, YNEmotionKeyboardKeyCell;

@interface YNEmotionPageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <YNEmotionPageViewDelegate> _pageViewDelegate;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    long long _activeIndex;
    NSArray *_keyItemGroups;
    CDUnknownBlockType _keyItemTappedBlock;
    CDUnknownBlockType _pressedKeyItemCellChangedBlock;
    UILongPressGestureRecognizer *_longPressGesture;
    YNEmotionKeyboardKeyCell *_lastPressedCell;
    YNEmotionKeyboardItemGroup *_activeGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNEmotionKeyboardItemGroup *activeGroup; // @synthesize activeGroup=_activeGroup;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)emotionPageCollectionViewLongPressed:(id)arg1;
- (void)hidePressedKeyItemPop;
- (void)hidePressedKeyItemPopDelay;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *keyItemGroups; // @synthesize keyItemGroups=_keyItemGroups;
@property(copy, nonatomic) CDUnknownBlockType keyItemTappedBlock; // @synthesize keyItemTappedBlock=_keyItemTappedBlock;
@property(nonatomic) YNEmotionKeyboardKeyCell *lastPressedCell; // @synthesize lastPressedCell=_lastPressedCell;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak id <YNEmotionPageViewDelegate> pageViewDelegate; // @synthesize pageViewDelegate=_pageViewDelegate;
@property(copy, nonatomic) CDUnknownBlockType pressedKeyItemCellChangedBlock; // @synthesize pressedKeyItemCellChangedBlock=_pressedKeyItemCellChangedBlock;
- (void)refreshPageControl;
- (void)scrollToEmotionGroup:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupViewConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

