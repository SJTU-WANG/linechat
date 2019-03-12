//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JSWKAuthWebViewDelegate.h"
#import "JS_WKAuthLoginDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKAuthWebViewProgressDelegate.h"

@class NSString, NSURL, UIWKWebView, WKAuthWebViewProgress, WKAuthWebViewProgressView;

@interface WXAuthLoginWebViewController : UIViewController <UIAlertViewDelegate, JS_WKAuthLoginDelegate, JSWKAuthWebViewDelegate, UIWebViewDelegate, WKAuthWebViewProgressDelegate>
{
    int _errCode;
    CDUnknownBlockType _whenFinished;
    UIWKWebView *_webView;
    NSURL *_requestURL;
    NSString *_errStr;
    WKAuthWebViewProgress *_progressProxy;
    WKAuthWebViewProgressView *_progressView;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)disMissAction;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
- (id)getcltInfo:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadErrorPageWithMessage:(id)arg1;
@property(retain, nonatomic) WKAuthWebViewProgress *progressProxy; // @synthesize progressProxy=_progressProxy;
@property(retain, nonatomic) WKAuthWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void)setUpProgressView;
@property(retain, nonatomic) UIWKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType whenFinished; // @synthesize whenFinished=_whenFinished;
- (void)showAlert;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webAuthorLogin:(id)arg1;
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

