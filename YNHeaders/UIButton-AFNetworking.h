//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (AFNetworking)
+ (void)setSharedImageCache:(id)arg1;
+ (id)sharedImageCache;
- (void)cancelBackgroundImageRequestOperationForState:(unsigned long long)arg1;
- (void)cancelImageRequestOperationForState:(unsigned long long)arg1;
@property(retain, nonatomic) id <AFURLResponseSerialization> imageResponseSerializer;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
@end

