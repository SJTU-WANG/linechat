//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;

@interface Mp4Writer : NSObject
{
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    NSString *_path;
}

+ (id)encoderForPath:(id)arg1 Height:(int)arg2 width:(int)arg3 frameRate:(int)arg4 channels:(int)arg5 samples:(double)arg6;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)initPath:(id)arg1 Height:(int)arg2 width:(int)arg3 frameRate:(int)arg4 channels:(int)arg5 samples:(double)arg6;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)writeFrame:(struct opaqueCMSampleBuffer *)arg1 isVideo:(_Bool)arg2;
- (_Bool)writePixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;

@end

