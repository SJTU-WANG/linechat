//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface _YYTextKeyboardViewFrameObserver : NSObject
{
    UIView *_keyboardView;
    CDUnknownBlockType _notifyBlock;
}

+ (id)observerForView:(id)arg1;
- (void).cxx_destruct;
- (void)addFrameObserver;
- (void)addToKeyboardView:(id)arg1;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFrameObserver;

@end
