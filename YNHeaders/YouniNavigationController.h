//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseNavigationController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIViewController;

@interface YouniNavigationController : YNBaseNavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UINavigationBarDelegate>
{
    unsigned long long _navState;
    UIViewController *_navigatingVC;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) unsigned long long navState; // @synthesize navState=_navState;
@property(nonatomic) __weak UIViewController *navigatingVC; // @synthesize navigatingVC=_navigatingVC;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)resetNextViewControllerLogPagePath:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

