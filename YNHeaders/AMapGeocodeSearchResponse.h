//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray;

@interface AMapGeocodeSearchResponse : AMapSearchObject
{
    long long _count;
    NSArray *_geocodes;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray *geocodes; // @synthesize geocodes=_geocodes;

@end

