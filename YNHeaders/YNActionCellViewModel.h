//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatCellViewModel.h"

@class NSAttributedString;

@interface YNActionCellViewModel : YNChatCellViewModel
{
    NSAttributedString *_attributedActionBody;
}

+ (Class)cellForClass;
+ (id)cellForIdentifier;
+ (id)findParamUidStringFromUrl:(id)arg1;
+ (id)findParamUidsFromUrl:(id)arg1;
+ (long long)findTypeFromUrl:(id)arg1;
+ (id)paramsFromUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attributedActionBody; // @synthesize attributedActionBody=_attributedActionBody;
- (double)heightForChatCell;
- (id)initWithMessage:(id)arg1 conversation:(id)arg2;

@end

