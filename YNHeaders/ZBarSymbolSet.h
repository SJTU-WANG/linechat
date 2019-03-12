//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@interface ZBarSymbolSet : NSObject <NSFastEnumeration>
{
    const struct zbar_symbol_set_s *set;
    _Bool filterSymbols;
}

@property(readonly, nonatomic) int count; // @dynamic count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
@property(nonatomic) _Bool filterSymbols; // @synthesize filterSymbols;
- (id)initWithSymbolSet:(const struct zbar_symbol_set_s *)arg1;
@property(readonly, nonatomic) const struct zbar_symbol_set_s *zbarSymbolSet; // @dynamic zbarSymbolSet;

@end

