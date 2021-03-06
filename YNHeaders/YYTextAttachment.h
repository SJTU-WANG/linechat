//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface YYTextAttachment : NSObject <NSCoding, NSCopying>
{
    id _content;
    long long _contentMode;
    NSDictionary *_userInfo;
    struct UIEdgeInsets _contentInsets;
}

+ (id)attachmentWithContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

@end

