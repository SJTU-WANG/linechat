//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

@class NSString, YNChatRoom, YNChatRoomBarcodeView;

@interface YNChatRoomQRCodeViewController : YNBaseViewController
{
    YNChatRoom *_chatRoom;
    YNChatRoomBarcodeView *_barcodeInfoView;
    NSString *_qrCodeString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNChatRoomBarcodeView *barcodeInfoView; // @synthesize barcodeInfoView=_barcodeInfoView;
@property(retain, nonatomic) YNChatRoom *chatRoom; // @synthesize chatRoom=_chatRoom;
- (void)chatRoomQRCode;
- (void)didReceiveMemoryWarning;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)initNaviBarItem;
- (id)initWithChatRoom:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
@property(retain, nonatomic) NSString *qrCodeString; // @synthesize qrCodeString=_qrCodeString;
- (id)screenView;
- (void)setupViewConstraints;
- (void)viewDidLoad;

@end
