//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSRegularExpression;

@interface CDVWhitelistPattern : NSObject
{
    NSRegularExpression *_scheme;
    NSRegularExpression *_host;
    NSNumber *_port;
    NSRegularExpression *_path;
}

+ (id)regexFromPattern:(id)arg1 allowWildcards:(_Bool)arg2;
- (void).cxx_destruct;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
- (_Bool)matches:(id)arg1;

@end

