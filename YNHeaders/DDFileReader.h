//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString;

@interface DDFileReader : NSObject
{
    NSString *filePath;
    NSFileHandle *fileHandle;
    unsigned long long currentOffset;
    unsigned long long totalFileLength;
    NSString *lineDelimiter;
    unsigned long long chunkSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize;
- (void)dealloc;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithFilePath:(id)arg1;
@property(copy, nonatomic) NSString *lineDelimiter; // @synthesize lineDelimiter;
- (id)readByTrimmedNewCharacterLine;
- (id)readLine;
- (id)readTrimmedLine;

@end
