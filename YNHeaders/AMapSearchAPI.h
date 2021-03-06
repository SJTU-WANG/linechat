//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNetworkManager, NSMapTable;

@interface AMapSearchAPI : NSObject
{
    id <AMapSearchDelegate> _delegate;
    long long _timeout;
    long long _language;
    AMapNetworkManager *_networkManager;
    NSMapTable *_requestOperationMapping;
}

+ (SEL)delegateSelectorForRequestClass:(Class)arg1;
+ (id)delegateSelectorMapping;
+ (void)registerDelegateSelector:(SEL)arg1 forRequestClass:(Class)arg2;
+ (void)registerDelegateSelectors;
+ (void)registerResponseClass:(Class)arg1 forRequestClass:(Class)arg2;
+ (void)registerResponseClasses;
+ (Class)responseClassForRequestClass:(Class)arg1;
+ (id)responseClassMapping;
- (void).cxx_destruct;
- (void)AMapBusLineIDSearch:(id)arg1;
- (void)AMapBusLineNameSearch:(id)arg1;
- (void)AMapBusStopSearch:(id)arg1;
- (void)AMapCloudPOIAroundSearch:(id)arg1;
- (void)AMapCloudPOIIDSearch:(id)arg1;
- (void)AMapCloudPOILocalSearch:(id)arg1;
- (void)AMapCloudPOIPolygonSearch:(id)arg1;
- (void)AMapDistrictSearch:(id)arg1;
- (void)AMapDrivingRouteSearch:(id)arg1;
- (void)AMapGeocodeSearch:(id)arg1;
- (void)AMapInputTipsSearch:(id)arg1;
- (void)AMapLocationShareSearch:(id)arg1;
- (void)AMapNavigationShareSearch:(id)arg1;
- (void)AMapNearbySearch:(id)arg1;
- (void)AMapPOIAroundSearch:(id)arg1;
- (void)AMapPOIIDSearch:(id)arg1;
- (void)AMapPOIKeywordsSearch:(id)arg1;
- (void)AMapPOIPolygonSearch:(id)arg1;
- (void)AMapPOIShareSearch:(id)arg1;
- (void)AMapReGoecodeSearch:(id)arg1;
- (void)AMapRouteShareSearch:(id)arg1;
- (void)AMapTransitRouteSearch:(id)arg1;
- (void)AMapWalkingRouteSearch:(id)arg1;
- (void)AMapWeatherSearch:(id)arg1;
- (void)addOperation:(id)arg1 forRequest:(id)arg2;
- (id)additionalParameters;
- (void)cancelAllRequests;
- (void)clearAllOperations;
- (_Bool)containsRequest:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <AMapSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)invokeDelegateWithError:(id)arg1 forRequest:(id)arg2;
- (void)invokeDelegateWithResponse:(id)arg1 request:(id)arg2;
- (void)invokeDelegateWithURLError:(id)arg1 forRequest:(id)arg2;
@property(nonatomic) long long language; // @synthesize language=_language;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (id)operationForRequest:(id)arg1;
- (void)performAOSRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)performPOISearchWithBaseRequest:(id)arg1;
- (void)performRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)removeOperationForRequest:(id)arg1;
@property(retain, nonatomic) NSMapTable *requestOperationMapping; // @synthesize requestOperationMapping=_requestOperationMapping;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;

@end

