//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRegularExpression.h"

@class NSArray;

@interface DPLRegularExpression : NSRegularExpression
{
    NSArray *_groupNames;
}

+ (id)namedGroupTokensForString:(id)arg1;
+ (id)namedGroupsForString:(id)arg1;
+ (id)regularExpressionWithPattern:(id)arg1;
+ (id)stringByRemovingNamedGroupsFromString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *groupNames; // @synthesize groupNames=_groupNames;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)matchResultForString:(id)arg1;

@end
