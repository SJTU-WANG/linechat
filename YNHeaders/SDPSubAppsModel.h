//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SDPSubAppsModel : NSObject
{
    _Bool _isInnerApp;
    _Bool _isNeedLogin;
    NSString *_status;
    long long _order;
    NSString *_link;
    NSString *_version;
    NSString *_type;
    NSString *_icon;
    NSString *_name;
    NSString *_subTitle;
    NSString *_tag;
}

+ (id)modelWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) _Bool isInnerApp; // @synthesize isInnerApp=_isInnerApp;
@property(nonatomic) _Bool isNeedLogin; // @synthesize isNeedLogin=_isNeedLogin;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;

@end

