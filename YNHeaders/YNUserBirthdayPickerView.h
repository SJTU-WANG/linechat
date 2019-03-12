//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MASConstraint, NSString, UIDatePicker;

@interface YNUserBirthdayPickerView : UIView
{
    id <YNUserBirthdayPickerViewDelegate> _delegate;
    MASConstraint *_constraint;
    UIDatePicker *_pickerView;
    NSString *_currentBirthday;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
@property(retain, nonatomic) MASConstraint *constraint; // @synthesize constraint=_constraint;
@property(retain, nonatomic) NSString *currentBirthday; // @synthesize currentBirthday=_currentBirthday;
- (void)dealloc;
@property(nonatomic) __weak id <YNUserBirthdayPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)done:(id)arg1;
- (void)initCurrentDate;
- (void)initSubviews;
- (id)initWithView:(id)arg1 currentBirthday:(id)arg2;
@property(retain, nonatomic) UIDatePicker *pickerView; // @synthesize pickerView=_pickerView;
- (void)show;

@end
