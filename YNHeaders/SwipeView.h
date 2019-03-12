//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIScrollView;

@interface SwipeView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _truncateFinalPage;
    _Bool _pagingEnabled;
    _Bool _scrollEnabled;
    _Bool _wrapEnabled;
    _Bool _delaysContentTouches;
    _Bool _bounces;
    _Bool _scrolling;
    _Bool _defersItemViewLoading;
    _Bool _vertical;
    _Bool _suppressScrollEvent;
    float _decelerationRate;
    id <SwipeViewDataSource> _dataSource;
    id <SwipeViewDelegate> _delegate;
    long long _numberOfItems;
    long long _itemsPerPage;
    long long _currentItemIndex;
    unsigned long long _alignment;
    double _scrollOffset;
    double _autoscroll;
    UIScrollView *_scrollView;
    NSMutableDictionary *_itemViews;
    NSMutableSet *_itemViewPool;
    long long _previousItemIndex;
    double _scrollDuration;
    double _startTime;
    double _lastTime;
    double _startOffset;
    double _endOffset;
    double _lastUpdateOffset;
    NSTimer *_timer;
    struct CGSize _itemSize;
    struct CGPoint _previousContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double autoscroll; // @synthesize autoscroll=_autoscroll;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
- (long long)clampedIndex:(long long)arg1;
- (double)clampedOffset:(double)arg1;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(readonly, nonatomic) UIView *currentItemView;
@property(nonatomic) long long currentPage;
@property(nonatomic) __weak id <SwipeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) float decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) _Bool defersItemViewLoading; // @synthesize defersItemViewLoading=_defersItemViewLoading;
@property(nonatomic) _Bool delaysContentTouches; // @synthesize delaysContentTouches=_delaysContentTouches;
@property(nonatomic) __weak id <SwipeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dequeueItemView;
- (void)didMoveToSuperview;
- (void)didScroll;
- (void)didTap:(id)arg1;
- (double)easeInOut:(double)arg1;
@property(nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)indexOfItemView:(id)arg1;
- (long long)indexOfItemViewOrSubview:(id)arg1;
@property(readonly, nonatomic) NSArray *indexesForVisibleItems;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic, getter=isWrapEnabled) _Bool wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (id)itemViewAtIndex:(long long)arg1;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool=_itemViewPool;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) long long itemsPerPage; // @synthesize itemsPerPage=_itemsPerPage;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double lastUpdateOffset; // @synthesize lastUpdateOffset=_lastUpdateOffset;
- (void)layOutItemViews;
- (void)layoutSubviews;
- (void)loadUnloadViews;
- (id)loadViewAtIndex:(long long)arg1;
- (long long)minScrollDistanceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (double)minScrollDistanceFromOffset:(double)arg1 toOffset:(double)arg2;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) long long numberOfPages;
- (double)offsetForItemAtIndex:(long long)arg1;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
- (void)queueItemView:(id)arg1;
- (void)reloadData;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)scrollByNumberOfItems:(long long)arg1 duration:(double)arg2;
- (void)scrollByOffset:(double)arg1 duration:(double)arg2;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
- (void)scrollToItemAtIndex:(long long)arg1 duration:(double)arg2;
- (void)scrollToOffset:(double)arg1 duration:(double)arg2;
- (void)scrollToPage:(long long)arg1 duration:(double)arg2;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setContentOffsetWithoutEvent:(struct CGPoint)arg1;
- (void)setFrameForView:(id)arg1 atIndex:(long long)arg2;
- (void)setItemView:(id)arg1 forIndex:(long long)arg2;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool suppressScrollEvent; // @synthesize suppressScrollEvent=_suppressScrollEvent;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool truncateFinalPage; // @synthesize truncateFinalPage=_truncateFinalPage;
- (void)setUp;
- (void)startAnimation;
- (void)step;
- (void)stopAnimation;
- (void)updateItemSizeAndCount;
- (void)updateLayout;
- (void)updateScrollOffset;
- (void)updateScrollViewDimensions;
- (_Bool)viewOrSuperviewHandlesTouches:(id)arg1;
- (long long)viewOrSuperviewIndex:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleItemViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
