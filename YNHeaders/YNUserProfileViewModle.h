//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YNUserProfileViewModle : NSObject
{
    _Bool _on;
    unsigned long long _modleType;
    NSString *_labelName;
    NSString *_infoStr;
    NSArray *_infoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
@property(retain, nonatomic) NSString *infoStr; // @synthesize infoStr=_infoStr;
- (id)initWithType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) unsigned long long modleType; // @synthesize modleType=_modleType;
@property(nonatomic) _Bool on; // @synthesize on=_on;

@end
