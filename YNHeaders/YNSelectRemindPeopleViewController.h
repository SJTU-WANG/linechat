//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNPersonListViewController.h"

@class NSArray, YNChatRoom;

@interface YNSelectRemindPeopleViewController : YNPersonListViewController
{
    id <YNSelectRemindPeopleViewControllerDelegate> _delegate;
    YNChatRoom *_chatRoom;
    NSArray *_memberArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YNChatRoom *chatRoom; // @synthesize chatRoom=_chatRoom;
@property(nonatomic) __weak id <YNSelectRemindPeopleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectCellWithObject:(id)arg1;
- (_Bool)filterObject:(id)arg1 withSearchString:(id)arg2;
- (void)initDataSource;
- (void)initNavigationBarItem;
- (void)leftBarButtonItemAction:(id)arg1;
@property(retain, nonatomic) NSArray *memberArray; // @synthesize memberArray=_memberArray;
- (id)prepareDataSource;
- (id)returnAfterDeleteSelfFromArray:(id)arg1;
- (void)viewDidLoad;

@end
