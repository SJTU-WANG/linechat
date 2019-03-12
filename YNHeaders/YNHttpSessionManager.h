//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@class AFHTTPRequestSerializer, NSDictionary, NSMutableArray;

@interface YNHttpSessionManager : AFHTTPSessionManager
{
    NSDictionary *_requestSerializersMap;
    NSMutableArray *_certs;
    struct __SecCertificate *_siteCert;
    AFHTTPRequestSerializer *_jsonRequestSerializer;
    AFHTTPRequestSerializer *_httpRequestSerializer;
    AFHTTPRequestSerializer *_singleRequestSerializer;
    AFHTTPRequestSerializer *_gzipJsonRequestSerializer;
    AFHTTPRequestSerializer *_safeJsonRequestSerializer;
    AFHTTPRequestSerializer *_ckHttpRequestSerializer;
    AFHTTPRequestSerializer *_pkHttpRequestSerializer;
    AFHTTPRequestSerializer *_safeGzipJsonRequestSerializer;
}

- (void).cxx_destruct;
- (id)GET:(id)arg1 parameters:(id)arg2 serializer:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 serializer:(id)arg3 progress:(id *)arg4 constructingBodyWithBlock:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)POST:(id)arg1 parameters:(id)arg2 serializer:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) AFHTTPRequestSerializer *ckHttpRequestSerializer; // @synthesize ckHttpRequestSerializer=_ckHttpRequestSerializer;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 serializer:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) AFHTTPRequestSerializer *gzipJsonRequestSerializer; // @synthesize gzipJsonRequestSerializer=_gzipJsonRequestSerializer;
@property(retain, nonatomic) AFHTTPRequestSerializer *httpRequestSerializer; // @synthesize httpRequestSerializer=_httpRequestSerializer;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2;
@property(retain, nonatomic) AFHTTPRequestSerializer *jsonRequestSerializer; // @synthesize jsonRequestSerializer=_jsonRequestSerializer;
@property(retain, nonatomic) AFHTTPRequestSerializer *pkHttpRequestSerializer; // @synthesize pkHttpRequestSerializer=_pkHttpRequestSerializer;
- (id)requestSerializerForRequestOption:(unsigned long long)arg1;
- (id)responseSerializers;
@property(retain, nonatomic) AFHTTPRequestSerializer *safeGzipJsonRequestSerializer; // @synthesize safeGzipJsonRequestSerializer=_safeGzipJsonRequestSerializer;
@property(retain, nonatomic) AFHTTPRequestSerializer *safeJsonRequestSerializer; // @synthesize safeJsonRequestSerializer=_safeJsonRequestSerializer;
- (void)setHeadersForSerializer:(id)arg1;
@property(retain, nonatomic) AFHTTPRequestSerializer *singleRequestSerializer; // @synthesize singleRequestSerializer=_singleRequestSerializer;

@end
