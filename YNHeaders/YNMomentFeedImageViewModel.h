//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNMomentFeedViewModel.h"

@class NSArray;

@interface YNMomentFeedImageViewModel : YNMomentFeedViewModel
{
    int _numberInRow;
    int _rows;
    NSArray *_imageInfos;
    struct CGSize _imageSize;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)caculateProperties;
- (struct CGSize)getAttachmentViewSize;
@property(retain, nonatomic) NSArray *imageInfos; // @synthesize imageInfos=_imageInfos;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) int numberInRow; // @synthesize numberInRow=_numberInRow;
@property(nonatomic) int rows; // @synthesize rows=_rows;

@end
