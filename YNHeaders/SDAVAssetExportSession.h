//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAudioMix, AVVideoComposition, NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SDAVAssetExportSession : NSObject
{
    NSError *_error;
    double duration;
    CDStruct_1b6d18a9 lastSamplePresentationTime;
    _Bool _shouldOptimizeForNetworkUse;
    float _progress;
    id <SDAVAssetExportSessionDelegate> _delegate;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSString *_outputFileType;
    NSURL *_outputURL;
    NSDictionary *_videoInputSettings;
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    NSArray *_metadata;
    AVAssetReader *_reader;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetReaderAudioMixOutput *_audioOutput;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    AVAssetWriterInput *_audioInput;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDUnknownBlockType _completionHandler;
    CDStruct_e83c9415 _timeRange;
}

+ (id)exportSessionWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(copy, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
- (id)buildDefaultVideoComposition;
- (void)cancelExport;
- (void)complete;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <SDAVAssetExportSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
@property(readonly, nonatomic) NSError *error;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finish;
- (id)initWithAsset:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
- (void)reset;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(copy, nonatomic) NSDictionary *videoInputSettings; // @synthesize videoInputSettings=_videoInputSettings;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoPixelBufferAdaptor; // @synthesize videoPixelBufferAdaptor=_videoPixelBufferAdaptor;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(readonly, nonatomic) long long status;

@end

