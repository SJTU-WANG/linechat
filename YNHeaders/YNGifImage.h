//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YNGifImage : NSObject
{
    int _index;
    NSMutableArray *_frames;
}

+ (id)yn_gifImageWithData:(id)arg1;
- (void).cxx_destruct;
- (void)cropImagesInRect:(struct CGRect)arg1;
- (unsigned long long)frameCount;
- (float)frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(nonatomic) int index; // @synthesize index=_index;
- (id)initGifImageWithData:(id)arg1;
- (id)nextFrame;
- (struct CGSize)size;

@end

