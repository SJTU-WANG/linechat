//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMapPOIConfig : NSObject
{
    NSString *_appScheme;
    NSString *_appName;
    NSString *_keywords;
    CDStruct_2c43369c _leftTopCoordinate;
    CDStruct_2c43369c _rightBottomCoordinate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (id)description;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) CDStruct_2c43369c leftTopCoordinate; // @synthesize leftTopCoordinate=_leftTopCoordinate;
@property(nonatomic) CDStruct_2c43369c rightBottomCoordinate; // @synthesize rightBottomCoordinate=_rightBottomCoordinate;

@end

