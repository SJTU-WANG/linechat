//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapSuggestion, NSArray;

@interface AMapBusStopSearchResponse : AMapSearchObject
{
    long long _count;
    AMapSuggestion *_suggestion;
    NSArray *_busstops;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *busstops; // @synthesize busstops=_busstops;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) AMapSuggestion *suggestion; // @synthesize suggestion=_suggestion;

@end

