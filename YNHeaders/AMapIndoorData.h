//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapIndoorData : AMapSearchObject
{
    long long _floor;
    NSString *_floorName;
    NSString *_pid;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
- (id)init;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;

@end

