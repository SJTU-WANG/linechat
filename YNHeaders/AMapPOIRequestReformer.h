//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapRESTRequestReformer.h"

@class NSMutableDictionary, NSString;

@interface AMapPOIRequestReformer : AMapRESTRequestReformer
{
    NSMutableDictionary *_parameters;
    NSString *_subPath;
}

- (void).cxx_destruct;
- (id)URLPath;
- (id)baseURL;
- (id)initWithPOISearchRequest:(id)arg1;
- (id)parameters;

@end

