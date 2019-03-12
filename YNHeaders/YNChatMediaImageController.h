//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatMediaBaseController.h"

#import "YNImageScrollViewDelegate.h"
#import "YNRecentChatPickerViewControllerDelegate.h"
#import "YNScanNotFoundViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, YNImageScrollView;

@interface YNChatMediaImageController : YNChatMediaBaseController <YNScanNotFoundViewDelegate, YNImageScrollViewDelegate, YNRecentChatPickerViewControllerDelegate>
{
    _Bool isDidAppear;
    UIImageView *_errorImageView;
    UILabel *_errorLabel;
    YNImageScrollView *_scrollView;
    UIButton *_originalImageDownLoadButton;
    UIImageView *_cancelImageView;
    UILongPressGestureRecognizer *_longpressGesture;
}

- (void).cxx_destruct;
- (void)addChatRoomWithRoomQRCode:(id)arg1;
- (void)addFriendWithUid:(id)arg1 scanedCode:(id)arg2;
- (void)cancelDownloadOperation:(id)arg1;
@property(retain, nonatomic) UIImageView *cancelImageView; // @synthesize cancelImageView=_cancelImageView;
- (void)completeSaveImageSuccessed:(_Bool)arg1;
- (void)configOriginalImage;
- (void)configScrollViewImage;
- (void)dealloc;
- (void)didFinishForward:(id)arg1 toTargets:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)didSingleTaped:(id)arg1;
- (void)drawView;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (id)getDisplayImageView;
- (void)handleScanedResult:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imageWithImage:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)longPressGesture:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longpressGesture; // @synthesize longpressGesture=_longpressGesture;
@property(retain, nonatomic) UIButton *originalImageDownLoadButton; // @synthesize originalImageDownLoadButton=_originalImageDownLoadButton;
- (void)originalImageDownLoadButtonClicked:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)saveImage:(id)arg1;
- (void)saveImageToAlbulm:(id)arg1;
@property(retain, nonatomic) YNImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setupViewConstraints;
- (_Bool)shouldAutorotate;
- (void)showQRCodeInfo:(id)arg1;
- (void)showResouceExpiredViews:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateDownloadOperationForMessage:(id)arg1;
- (void)updateOriginalImageButtonStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)webLoginWithUuid:(id)arg1;
- (_Bool)ynCodePicture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
