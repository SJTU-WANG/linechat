//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVViewController.h"

@class NSString;

@interface YNTransparentWebController : CDVViewController
{
    id <YNTransparentWebControllerDelegate> _delegate;
    NSString *_url;
    NSString *_pageIndex;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <YNTransparentWebControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithUrl:(id)arg1 pageIndex:(id)arg2;
@property(retain, nonatomic) NSString *pageIndex; // @synthesize pageIndex=_pageIndex;
- (void)popTransparentWebViewFromViewController:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;

@end

