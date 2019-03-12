//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "YNLibraryMediaBaseViewControllerDelegate.h"

@class NSString, YNLibraryMediaBaseViewController, YNPhotoItem;

@interface YNLibraryMediaBaseCollectionViewCell : UICollectionViewCell <YNLibraryMediaBaseViewControllerDelegate>
{
    id <YNLibraryMediaBaseCollectionViewCellDelegate> _delegate;
    YNPhotoItem *_photoItem;
    YNLibraryMediaBaseViewController *_libraryMediaViewController;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)cellDidEndDisplay;
- (void)cellWillDisplayWithOptions:(id)arg1;
- (void)cellWillResignActive;
- (void)configureWithPhotoItem:(id)arg1;
@property(nonatomic) __weak id <YNLibraryMediaBaseCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)libraryMediaBaseViewControllerDidSingleTaped:(id)arg1;
@property(retain, nonatomic) YNLibraryMediaBaseViewController *libraryMediaViewController; // @synthesize libraryMediaViewController=_libraryMediaViewController;
@property(retain, nonatomic) YNPhotoItem *photoItem; // @synthesize photoItem=_photoItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
