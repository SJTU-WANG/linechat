//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBJsonStreamParserAdapterDelegate.h"

@interface SBJsonStreamParserAccumulator : NSObject <SBJsonStreamParserAdapterDelegate>
{
    id value;
}

- (void)dealloc;
- (void)parser:(id)arg1 foundArray:(id)arg2;
- (void)parser:(id)arg1 foundObject:(id)arg2;
@property(readonly, copy) id value; // @synthesize value;

@end

