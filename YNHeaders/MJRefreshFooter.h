//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshComponent.h"

@interface MJRefreshFooter : MJRefreshComponent
{
    _Bool _automaticallyHidden;
    double _ignoredScrollViewContentInsetBottom;
}

+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
+ (id)footerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)endRefreshingWithNoMoreData;
@property(nonatomic) double ignoredScrollViewContentInsetBottom; // @synthesize ignoredScrollViewContentInsetBottom=_ignoredScrollViewContentInsetBottom;
@property(nonatomic, getter=isAutomaticallyHidden) _Bool automaticallyHidden; // @synthesize automaticallyHidden=_automaticallyHidden;
- (void)noticeNoMoreData;
- (void)prepare;
- (void)resetNoMoreData;
- (void)willMoveToSuperview:(id)arg1;

@end

