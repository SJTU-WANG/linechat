//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZMRTCCapture;

@protocol ZMRTCCaptureOutput <NSObject>
- (void)camera:(ZMRTCCapture *)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;

@optional
- (void)camera:(ZMRTCCapture *)arg1 adjustingFocus:(_Bool)arg2 focusPoint:(struct CGPoint)arg3;
@end

