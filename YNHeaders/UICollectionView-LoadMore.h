//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class UIView;

@interface UICollectionView (LoadMore)
- (void)addMaskView;
- (void)addTarget:(id)arg1 forLoadMoreAction:(SEL)arg2;
- (void)endLoadMore;
- (void)endLoadMoreWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool isLoadingMore;
- (SEL)loadAction;
- (void)loadMore:(id)arg1;
@property(nonatomic) double loadMoreHeight;
- (id)loadMoreIndicatorView;
- (id)loadMoreTitleLabel;
@property(retain, nonatomic) UIView *loadMoreView;
- (id)loadTarget;
- (void)setLoadAction:(SEL)arg1;
- (void)setLoadTarget:(id)arg1;
- (void)setupLoadMoreWithCustomView:(id)arg1;
- (void)setupLoadMoreWithTitle:(id)arg1;
- (void)startLoadMore;
@end

