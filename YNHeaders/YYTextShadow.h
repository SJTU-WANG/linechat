//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor;

@interface YYTextShadow : NSObject <NSCoding, NSCopying>
{
    int _blendMode;
    UIColor *_color;
    double _radius;
    YYTextShadow *_subShadow;
    struct CGSize _offset;
}

+ (id)shadowWithColor:(id)arg1 offset:(struct CGSize)arg2 radius:(double)arg3;
+ (id)shadowWithNSShadow:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nsShadow;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) YYTextShadow *subShadow; // @synthesize subShadow=_subShadow;

@end

