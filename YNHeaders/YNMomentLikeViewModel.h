//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableAttributedString;

@interface YNMomentLikeViewModel : NSObject
{
    NSMutableAttributedString *_likeLabelStr;
    double _likeLabelHeight;
    NSMutableArray *_likeLinksArray;
}

+ (id)appendZansStr:(id)arg1;
+ (double)getZansLabelHeight:(id)arg1 width:(double)arg2;
+ (id)setZansLabelAttribute:(id)arg1 toLinkParseResult:(id)arg2;
+ (id)zansLabelFont;
+ (id)zansLabelLightFont;
- (void).cxx_destruct;
@property(nonatomic) double likeLabelHeight; // @synthesize likeLabelHeight=_likeLabelHeight;
@property(retain, nonatomic) NSMutableAttributedString *likeLabelStr; // @synthesize likeLabelStr=_likeLabelStr;
@property(retain, nonatomic) NSMutableArray *likeLinksArray; // @synthesize likeLinksArray=_likeLinksArray;

@end

