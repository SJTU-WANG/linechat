//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapBusinessArea : AMapSearchObject
{
    NSString *_name;
    AMapGeoPoint *_location;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)init;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

