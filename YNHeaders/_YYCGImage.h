//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface _YYCGImage : NSObject <NSCoding, NSCopying>
{
    struct CGImage *_CGImage;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1;
@property(nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

