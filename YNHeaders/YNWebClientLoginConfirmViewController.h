//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

@class NSString, UIButton, UILabel;

@interface YNWebClientLoginConfirmViewController : YNBaseViewController
{
    _Bool _loginSuccess;
    NSString *_UUID;
    UILabel *_infoLabel;
    UIButton *_loginButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void)close;
- (void)doLogin;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void)initSubviews;
- (id)initWithUUID:(id)arg1 login:(_Bool)arg2;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
- (void)loginDidFailed;
@property(nonatomic) _Bool loginSuccess; // @synthesize loginSuccess=_loginSuccess;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

@end

