//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, YNSexZoneView;

@interface YNUserSexSelectView : UIView <UIGestureRecognizerDelegate>
{
    int _sex;
    id <YNUserSexSelectViewDelegate> _delegate;
    YNSexZoneView *_leftActionView;
    YNSexZoneView *_rightActionView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YNUserSexSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YNSexZoneView *leftActionView; // @synthesize leftActionView=_leftActionView;
@property(retain, nonatomic) YNSexZoneView *rightActionView; // @synthesize rightActionView=_rightActionView;
@property(nonatomic) int sex; // @synthesize sex=_sex;
- (void)updateUI:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
