//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNBaseConfig.h"

@class NSArray, NSDictionary;

@interface YNLogUploadConfig : YNBaseConfig
{
    _Bool _allowCellularUpload;
    NSDictionary *_LogConfigDetail;
    NSArray *_logDecType;
    NSArray *_logGzipType;
    long long _logOverdueTime;
    long long _maxFileSize;
    long long _checkUploadIntervalSec;
    long long _tmpFileRollingIntervalSec;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *LogConfigDetail; // @synthesize LogConfigDetail=_LogConfigDetail;
@property _Bool allowCellularUpload; // @synthesize allowCellularUpload=_allowCellularUpload;
@property long long checkUploadIntervalSec; // @synthesize checkUploadIntervalSec=_checkUploadIntervalSec;
- (void)handleConfigData:(id)arg1;
- (id)init;
@property(retain) NSArray *logDecType; // @synthesize logDecType=_logDecType;
@property(retain) NSArray *logGzipType; // @synthesize logGzipType=_logGzipType;
@property long long logOverdueTime; // @synthesize logOverdueTime=_logOverdueTime;
- (unsigned long long)logUploadTypeByCategory:(id)arg1;
@property long long maxFileSize; // @synthesize maxFileSize=_maxFileSize;
@property long long tmpFileRollingIntervalSec; // @synthesize tmpFileRollingIntervalSec=_tmpFileRollingIntervalSec;
- (_Bool)shouldDecryptByCategory:(id)arg1;
- (_Bool)shouldGzipByCategory:(id)arg1;

@end

