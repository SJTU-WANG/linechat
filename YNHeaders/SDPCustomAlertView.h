//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SDPCustomAlertView : UIView
{
    UIView *customView;
    UIView *containerView;
    CDUnknownBlockType clickButton;
    NSArray *buttonTitles;
}

- (void).cxx_destruct;
- (void)addButtonsToView:(id)arg1;
- (void)buttonTapped:(id)arg1;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles;
@property(copy) CDUnknownBlockType clickButton; // @synthesize clickButton;
- (void)close;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
- (struct CGSize)countContainerSize;
- (struct CGSize)countScreenSize;
- (id)createCustomView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView;
- (id)init;
- (void)setSubView:(id)arg1;
- (void)show;

@end

