//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class MASConstraint, NSString, UIPickerView;

@interface YNUserSexPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    int _currnetSex;
    id <YNUserSexPickerViewDelegate> _delegate;
    MASConstraint *_constraint;
    UIPickerView *_pickerView;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
@property(retain, nonatomic) MASConstraint *constraint; // @synthesize constraint=_constraint;
@property(nonatomic) int currnetSex; // @synthesize currnetSex=_currnetSex;
- (void)dealloc;
@property(nonatomic) __weak id <YNUserSexPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)done:(id)arg1;
- (id)initWithView:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

