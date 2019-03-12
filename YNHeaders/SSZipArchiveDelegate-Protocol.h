//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SSZipArchiveDelegate <NSObject>

@optional
- (void)zipArchiveDidUnzipArchiveAtPath:(NSString *)arg1 zipInfo:(struct unz_global_info_s)arg2 unzippedPath:(NSString *)arg3;
- (void)zipArchiveDidUnzipFileAtIndex:(long long)arg1 totalFiles:(long long)arg2 archivePath:(NSString *)arg3 fileInfo:(struct unz_file_info_s)arg4;
- (void)zipArchiveProgressEvent:(long long)arg1 total:(long long)arg2;
- (void)zipArchiveWillUnzipArchiveAtPath:(NSString *)arg1 zipInfo:(struct unz_global_info_s)arg2;
- (void)zipArchiveWillUnzipFileAtIndex:(long long)arg1 totalFiles:(long long)arg2 archivePath:(NSString *)arg3 fileInfo:(struct unz_file_info_s)arg4;
@end
