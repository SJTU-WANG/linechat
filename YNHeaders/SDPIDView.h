//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImage;

@interface SDPIDView : UIView
{
    CDUnknownBlockType _btnAction;
    UIImage *_headerImage;
    NSString *_titleText;
    NSArray *_tipTitles;
    NSArray *_cellDatas;
    NSString *_buttonTitile;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType btnAction; // @synthesize btnAction=_btnAction;
- (void)btnAction:(id)arg1;
@property(copy, nonatomic) NSString *buttonTitile; // @synthesize buttonTitile=_buttonTitile;
@property(retain, nonatomic) NSArray *cellDatas; // @synthesize cellDatas=_cellDatas;
- (id)cellViewWithDictionary:(id)arg1;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
- (id)initWithFrame:(struct CGRect)arg1 headerImage:(id)arg2 title:(id)arg3 tipTitles:(id)arg4 cellDatas:(id)arg5 buttonTitle:(id)arg6;
@property(retain, nonatomic) NSArray *tipTitles; // @synthesize tipTitles=_tipTitles;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)setup;

@end

