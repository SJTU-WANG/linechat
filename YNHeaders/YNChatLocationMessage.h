//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatMessage.h"

@class UIImage;

@interface YNChatLocationMessage : YNChatMessage
{
    UIImage *_thumbnailImage;
}

+ (id)getStaticMapImageUrlWithLongitude:(double)arg1 withLatitude:(double)arg2;
- (void).cxx_destruct;
- (void)clearCacheResource;
- (void)clearMediaResource;
- (void)confitureFromInfo;
- (void)copyMessageResourceToMessage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deleteLocalImageData;
- (id)forwardShowText;
- (struct CGSize)imageShowSize;
- (id)notificationBody;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)reportInfo;
- (void)setImageThumbnailUrl:(id)arg1;
- (void)setLocationAddress:(id)arg1;
- (void)setLocationCity:(id)arg1;
- (void)setLocationCityCode:(id)arg1;
- (void)setLocationCountry:(id)arg1;
- (void)setLocationCountryCode:(id)arg1;
- (void)setLocationDirection:(double)arg1;
- (void)setLocationDistrict:(id)arg1;
- (void)setLocationFloor:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationName:(id)arg1;
- (void)setLocationProvince:(id)arg1;
- (void)setLocationRadius:(double)arg1;
- (void)setLocationSpeed:(double)arg1;
- (void)setLocationStreet:(id)arg1;
- (void)setLocationStreetNumber:(id)arg1;
- (void)setLocationType:(id)arg1;
- (void)setShortURL:(id)arg1;
- (id)showText;
- (id)showTextLocalizationKey;
- (id)textWithSending;
- (id)thumbnailImage;
- (id)thumbnailImageLocalPath;
- (id)toNSXMLElement;
- (id)toProtobufMessageBuilder;

@end

