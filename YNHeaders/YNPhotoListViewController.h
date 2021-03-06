//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YNChatMediaContainerViewControllerDelegate.h"
#import "YNPhotoListCollectionViewFlowLayoutDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UICollectionView, YNDataLoadingView;

@interface YNPhotoListViewController : YNBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, YNPhotoListCollectionViewFlowLayoutDelegate, YNChatMediaContainerViewControllerDelegate>
{
    NSString *currentTitle;
    long long currentSectionIndex;
    long long currentItemIndex;
    _Bool isDidLayoutSubviews;
    _Bool isResetNavgation;
    _Bool _isFromChatInfo;
    NSArray *_dataSourceArray;
    long long _currentIndex;
    id <YNPhotoListViewControllerDelegate> _delegate;
    YNDataLoadingView *_loadingView;
    UICollectionView *_collectionView;
    NSMutableDictionary *_imageDictionary;
    NSArray *_imageDateKeyArray;
}

- (void).cxx_destruct;
- (id)chatMediaContainerDidTaped:(id)arg1 withMessage:(id)arg2;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 numberOfColumnsInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
- (id)dateStartOfWeek:(id)arg1;
@property(nonatomic) __weak id <YNPhotoListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *imageDateKeyArray; // @synthesize imageDateKeyArray=_imageDateKeyArray;
@property(retain, nonatomic) NSMutableDictionary *imageDictionary; // @synthesize imageDictionary=_imageDictionary;
- (void)initNaviBarItem;
- (void)initTabelSource;
@property(nonatomic) _Bool isFromChatInfo; // @synthesize isFromChatInfo=_isFromChatInfo;
- (void)leftBarButtonItemClick:(id)arg1;
@property(retain, nonatomic) YNDataLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)seeImageForChatImageDisplayViewControllerWithImageView:(id)arg1 withImageMessage:(id)arg2;
- (void)setupViewConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

