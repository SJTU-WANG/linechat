//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNCustomSticker, YNStickerManager;

@protocol YNStickerManagerDelegate <NSObject>
- (void)stickerManager:(YNStickerManager *)arg1 didAddSticker:(YNCustomSticker *)arg2;
- (void)stickerManager:(YNStickerManager *)arg1 didUpdateSticker:(YNCustomSticker *)arg2;
@end
