//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, YNDataDetector;

@interface YNLinkParser : NSObject
{
    YNDataDetector *_aTagDetector;
    NSArray *_linkDetectors;
}

+ (id)sharedParser;
- (void).cxx_destruct;
@property(retain, nonatomic) YNDataDetector *aTagDetector; // @synthesize aTagDetector=_aTagDetector;
@property(retain, nonatomic) NSArray *linkDetectors; // @synthesize linkDetectors=_linkDetectors;
- (id)parseCommonLinksFromText:(id)arg1;
- (id)parseExtensionActionWithData:(id)arg1;
- (id)parseTextLinkWithBody:(id)arg1 toText:(id *)arg2;
- (void)parseTextLinksFromText:(id)arg1 toResults:(id)arg2 withDetecotr:(id)arg3;

@end
