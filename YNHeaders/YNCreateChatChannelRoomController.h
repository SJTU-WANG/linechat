//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CLLocation, NSString, UIButton, UIImage, UILabel, YNLineInputView, YNTextInputHelper;

@interface YNCreateChatChannelRoomController : YNBaseViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    CLLocation *_lbsLocation;
    UILabel *_titleLabel;
    UILabel *_avatarDescribeLabel;
    UIButton *_avatarAddButton;
    UILabel *_nameDescribeLabel;
    YNLineInputView *_nameInputView;
    UILabel *_createTitleLabel;
    UILabel *_createDescribeLabel;
    UIButton *_createButton;
    YNTextInputHelper *_textInputHelper;
    UIImage *_uploadAvatarImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *avatarAddButton; // @synthesize avatarAddButton=_avatarAddButton;
- (void)avatarAddButtonClick:(id)arg1;
@property(retain, nonatomic) UILabel *avatarDescribeLabel; // @synthesize avatarDescribeLabel=_avatarDescribeLabel;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
- (void)createButtonClick:(id)arg1;
@property(retain, nonatomic) UILabel *createDescribeLabel; // @synthesize createDescribeLabel=_createDescribeLabel;
@property(retain, nonatomic) UILabel *createTitleLabel; // @synthesize createTitleLabel=_createTitleLabel;
- (void)drawView;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)initNavigationItem;
@property(retain, nonatomic) CLLocation *lbsLocation; // @synthesize lbsLocation=_lbsLocation;
@property(retain, nonatomic) UILabel *nameDescribeLabel; // @synthesize nameDescribeLabel=_nameDescribeLabel;
@property(retain, nonatomic) YNLineInputView *nameInputView; // @synthesize nameInputView=_nameInputView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(retain, nonatomic) YNTextInputHelper *textInputHelper; // @synthesize textInputHelper=_textInputHelper;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *uploadAvatarImage; // @synthesize uploadAvatarImage=_uploadAvatarImage;
- (void)setupViewConstraints;
- (void)tapBackgroudView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
