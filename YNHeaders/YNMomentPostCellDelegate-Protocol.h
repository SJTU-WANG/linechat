//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNMomentPostCell, YNWebsiteInfo;

@protocol YNMomentPostCellDelegate <NSObject>
- (void)postCell:(YNMomentPostCell *)arg1 didTapImageAtIndex:(unsigned long long)arg2;
- (void)postCell:(YNMomentPostCell *)arg1 didTapWebsiteInfo:(YNWebsiteInfo *)arg2;
- (void)postCellDidTapAddButton:(YNMomentPostCell *)arg1;
- (void)postCellDidTapVideo:(YNMomentPostCell *)arg1;
@end
