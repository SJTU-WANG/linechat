//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YNPhotoItemCellDelegate.h"

@class NSArray, NSString, UIButton, UICollectionView, UILabel, YNPhotoGroup;

@interface YNPhotoSelectViewController : YNBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, YNPhotoItemCellDelegate>
{
    _Bool _viewAppeared;
    UICollectionView *_collectionView;
    UIButton *_previewButton;
    UIButton *_originButton;
    UIButton *_sendButton;
    UILabel *_selectedCountBadgeLabel;
    YNPhotoGroup *_group;
    NSArray *_photoItems;
    unsigned long long _selectEnableTypes;
}

- (void).cxx_destruct;
- (void)cancelButtonAction:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) YNPhotoGroup *group; // @synthesize group=_group;
- (void)initSubviews;
- (id)initWithPhotoGroup:(id)arg1;
- (void)loadPhotosOfGroup;
@property(retain, nonatomic) UIButton *originButton; // @synthesize originButton=_originButton;
- (void)originalButtonClicked:(id)arg1;
- (void)photoItemCellDidTapCheckBoxButton:(id)arg1;
@property(retain, nonatomic) NSArray *photoItems; // @synthesize photoItems=_photoItems;
@property(retain, nonatomic) UIButton *previewButton; // @synthesize previewButton=_previewButton;
- (void)previewButtonAction:(id)arg1;
- (void)reloadData;
- (void)scrollToBottom;
@property(nonatomic) unsigned long long selectEnableTypes; // @synthesize selectEnableTypes=_selectEnableTypes;
- (void)selectItem:(id)arg1 forCell:(id)arg2;
@property(retain, nonatomic) UILabel *selectedCountBadgeLabel; // @synthesize selectedCountBadgeLabel=_selectedCountBadgeLabel;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
- (void)sendButtonAction:(id)arg1;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
- (void)showPhotoAuthorizationDeniedView;
- (void)showPhotosWithIndex:(unsigned long long)arg1;
- (void)updateOriginalTitle;
- (void)updateSelectedCount:(long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

