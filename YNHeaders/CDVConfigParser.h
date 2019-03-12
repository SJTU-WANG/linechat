//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CDVConfigParser : NSObject <NSXMLParserDelegate>
{
    NSString *featureName;
    NSMutableDictionary *pluginsDict;
    NSMutableDictionary *settings;
    NSMutableArray *whitelistHosts;
    NSString *startPage;
    NSMutableArray *startupPluginNames;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *pluginsDict; // @synthesize pluginsDict;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings;
@property(retain, nonatomic) NSString *startPage; // @synthesize startPage;
@property(retain, nonatomic) NSMutableArray *startupPluginNames; // @synthesize startupPluginNames;
@property(retain, nonatomic) NSMutableArray *whitelistHosts; // @synthesize whitelistHosts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
