//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PBExtensionRegistry : NSObject
{
    NSDictionary *classMap;
}

+ (id)emptyRegistry;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSDictionary *classMap; // @synthesize classMap;
- (id)getExtension:(Class)arg1 fieldNumber:(int)arg2;
- (id)initWithClassMap:(id)arg1;
- (id)keyForClass:(Class)arg1;

@end

