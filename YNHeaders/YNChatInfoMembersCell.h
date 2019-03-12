//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "YNChatInfoMemberItemCellDelegate.h"

@class NSArray, NSString, UICollectionView;

@interface YNChatInfoMembersCell : UITableViewCell <UICollectionViewDataSource, YNChatInfoMemberItemCellDelegate>
{
    id <YNChatInfoMembersCellDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_items;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)chatInfoMemberItemCellDidTapAtIndex:(long long)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithItems:(id)arg1;
@property(nonatomic) __weak id <YNChatInfoMembersCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
