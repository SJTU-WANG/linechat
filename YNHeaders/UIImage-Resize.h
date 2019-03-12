//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Resize)
+ (id)yn_createBubbleImage:(id)arg1;
+ (id)yn_imageWithColor:(id)arg1;
- (struct CGRect)centerRectForDisplay;
- (id)croppedImage:(struct CGRect)arg1;
- (id)generalResizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (id)generalResizableImageWithCenter;
- (id)generalResizableImageWithCenterForInsets:(struct UIEdgeInsets)arg1 withFixedWidth:(double)arg2;
- (id)mergeImage:(id)arg1 withRect:(struct CGRect)arg2;
- (id)resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)resizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(_Bool)arg3 interpolationQuality:(int)arg4;
- (id)resizedImageFitToSize:(struct CGSize)arg1;
- (id)resizedImageLetterThan:(struct CGSize)arg1;
- (id)resizedImageWithContentMode:(long long)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)resizedLongImg;
- (id)resizedThumbImageData:(struct CGSize)arg1 lessThan:(double)arg2;
- (id)thumbnailImage:(long long)arg1 transparentBorder:(unsigned long long)arg2 cornerRadius:(unsigned long long)arg3 interpolationQuality:(int)arg4;
- (struct CGAffineTransform)youniTransformForOrientation:(struct CGSize)arg1;
@end
