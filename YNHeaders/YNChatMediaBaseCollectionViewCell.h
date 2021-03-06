//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YNChatMediaBaseControllerDelegate.h"

@class NSString, YNChatMediaBaseController, YNChatMessage;

@interface YNChatMediaBaseCollectionViewCell : UICollectionViewCell <YNChatMediaBaseControllerDelegate>
{
    id <YNChatMediaBaseCollectionViewCellDelegate> _delegate;
    YNChatMessage *_message;
    YNChatMediaBaseController *_mediaViewController;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)cellDidEndDisplay;
- (void)cellWillActive;
- (void)cellWillDisplay;
- (void)cellWillResignActive;
- (void)configureWithChatMessage:(id)arg1;
@property(nonatomic) __weak id <YNChatMediaBaseCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mediaBaseViewControllerDidAppear:(id)arg1 withDisplayImageView:(id)arg2;
- (void)mediaBaseViewControllerDidSingleTaped:(id)arg1;
@property(retain, nonatomic) YNChatMediaBaseController *mediaViewController; // @synthesize mediaViewController=_mediaViewController;
@property(retain, nonatomic) YNChatMessage *message; // @synthesize message=_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

