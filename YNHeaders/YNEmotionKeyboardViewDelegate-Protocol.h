//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YNEmotionKeyboardKeyItem, YNEmotionKeyboardView;

@protocol YNEmotionKeyboardViewDelegate <NSObject>
- (void)emotionKeyboardView:(YNEmotionKeyboardView *)arg1 didClickedSendButton:(id)arg2;
- (void)emotionKeyboardView:(YNEmotionKeyboardView *)arg1 didSelectEmotionKeyItem:(YNEmotionKeyboardKeyItem *)arg2;
@end

