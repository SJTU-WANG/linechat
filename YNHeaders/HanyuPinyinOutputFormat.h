//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HanyuPinyinOutputFormat : NSObject
{
    int _vCharType;
    int _caseType;
    int _toneType;
}

@property(nonatomic) int caseType; // @synthesize caseType=_caseType;
- (id)init;
- (void)restoreDefault;
@property(nonatomic) int toneType; // @synthesize toneType=_toneType;
@property(nonatomic) int vCharType; // @synthesize vCharType=_vCharType;

@end

