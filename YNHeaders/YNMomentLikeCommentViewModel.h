//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, YNMomentLikeViewModel;

@interface YNMomentLikeCommentViewModel : NSObject
{
    NSArray *_likeItemsArray;
    NSArray *_commentItemsArray;
    double _totalHeight;
    YNMomentLikeViewModel *_likeViewModel;
    NSMutableArray *_commentViewModelArray;
}

+ (id)attributedShowText:(id)arg1 withColor:(id)arg2 withFont:(id)arg3 withEmojiSize:(double)arg4;
+ (id)getViewModelWithLikeItemsArray:(id)arg1 commentItemsArray:(id)arg2 viewWidth:(double)arg3;
+ (double)heightWithLikeItemsArray:(id)arg1 commentItemsArray:(id)arg2 viewWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *commentItemsArray; // @synthesize commentItemsArray=_commentItemsArray;
@property(retain, nonatomic) NSMutableArray *commentViewModelArray; // @synthesize commentViewModelArray=_commentViewModelArray;
@property(retain, nonatomic) NSArray *likeItemsArray; // @synthesize likeItemsArray=_likeItemsArray;
@property(retain, nonatomic) YNMomentLikeViewModel *likeViewModel; // @synthesize likeViewModel=_likeViewModel;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;

@end
