//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SDPBannerModel : NSObject
{
    NSString *_id;
    long long _order;
    NSString *_src;
    NSString *_link;
}

+ (id)modelWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;

@end
