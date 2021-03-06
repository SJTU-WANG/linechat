//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface SDPCommonActionSheet : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _needRedPoint;
    UIView *_maskView;
    UITableView *_tableView;
    NSArray *_titleArray;
    NSString *_cancelTitle;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _cancelBlock;
    double _duration;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (void)dismiss;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)initUI;
- (id)initWithTitleArray:(id)arg1 cancelTitle:(id)arg2 duration:(double)arg3 needRedPoint:(_Bool)arg4 selectedBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool needRedPoint; // @synthesize needRedPoint=_needRedPoint;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
- (void)show;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

