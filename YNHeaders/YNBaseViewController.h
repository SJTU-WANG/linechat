//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNViewController.h"

#import "MBProgressHUDDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "YNTransparentWebControllerDelegate.h"

@class NSString, UIButton;

@interface YNBaseViewController : YNViewController <MBProgressHUDDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, YNTransparentWebControllerDelegate>
{
    _Bool _navgationPopEnable;
    _Bool _isChildViewController;
    NSString *_lastTitle;
    UIButton *_baseBackButton;
}

- (void).cxx_destruct;
- (void)addChildViewController:(id)arg1;
@property(retain, nonatomic) UIButton *baseBackButton; // @synthesize baseBackButton=_baseBackButton;
- (void)baseLeftBarButtonItemClicked:(id)arg1;
- (_Bool)checkCarmeraAuthorizationStatus;
- (void)configuraBackBarButtonItemWithTitle:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)disableInsetAdjustmentBehavior:(id)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (id)findHairlineImageViewUnder:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)heightForIOS7Offset;
- (id)init;
- (void)initNavBarButtonItemWithImages:(id)arg1 action:(SEL)arg2 isLeft:(_Bool)arg3;
- (void)initNavBarButtonItemWithTitle:(id)arg1 action:(SEL)arg2 isLeft:(_Bool)arg3;
- (void)initNavBarButtonItemWithTitle:(id)arg1 action:(SEL)arg2 isLeft:(_Bool)arg3 textColor:(id)arg4;
- (void)initNavBarButtonItemWithTitle:(id)arg1 titleFont:(id)arg2 action:(SEL)arg3 isLeft:(_Bool)arg4 textColor:(id)arg5;
@property(nonatomic) _Bool isChildViewController; // @synthesize isChildViewController=_isChildViewController;
@property(copy, nonatomic) NSString *lastTitle; // @synthesize lastTitle=_lastTitle;
@property(nonatomic) _Bool navgationPopEnable; // @synthesize navgationPopEnable=_navgationPopEnable;
- (void)popupWebviewWithPageIndex:(id)arg1;
- (long long)preferredNavigationBarStyle;
- (long long)preferredStatusBarStyle;
- (void)resetBaseBackButtonItemTitle:(id)arg1 action:(SEL)arg2;
- (void)showCameraControllerAllowsEditing:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webControllerWillDisappear:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

