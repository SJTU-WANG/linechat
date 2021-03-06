//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIView;

@interface YNQRCodeScanner : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    NSString *_scanedBarcode;
    _Bool _proccessing;
    id <YNQRScanOutPutDelegate> _delegate;
    UIView *_parentView;
    NSString *_sessionPreset;
    unsigned long long _type;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureOutput *_output;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_preview;
    struct CGRect _scanViewRect;
}

+ (id)scanResultencode:(id)arg1;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)clearScanedBarcodeStr;
- (void)dealloc;
@property(nonatomic) __weak id <YNQRScanOutPutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
- (struct CGRect)getScanCrop:(struct CGRect)arg1 readerViewBounds:(struct CGRect)arg2;
- (struct CGRect)getScanCropRect:(id)arg1;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *preview; // @synthesize preview=_preview;
@property(nonatomic) _Bool proccessing; // @synthesize proccessing=_proccessing;
- (void)processScanResult;
@property(nonatomic) struct CGRect scanViewRect; // @synthesize scanViewRect=_scanViewRect;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)startQRScan;
- (void)stopQRScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

