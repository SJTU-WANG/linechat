//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YNPeopleNearbyManager : NSObject
{
    _Bool _locateFinished;
}

+ (id)sharedManager;
- (void)clearLastUasgeTime;
- (_Bool)isLastUsageTimeWithin6Hour;
@property(nonatomic) _Bool locateFinished; // @synthesize locateFinished=_locateFinished;
- (void)updateLastUsageTime;

@end
