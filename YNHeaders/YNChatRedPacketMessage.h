//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YNChatMessage.h"

@interface YNChatRedPacketMessage : YNChatMessage
{
}

- (id)init;
- (id)initWithFMResultSet:(id)arg1;
- (id)notificationBody;
- (id)reportInfo;
- (void)setRedId:(id)arg1;
- (void)setRedRemark:(id)arg1;
- (void)setRedStatus:(unsigned long long)arg1;
- (void)setRedType:(long long)arg1;
- (void)setRedVcode:(id)arg1;
- (id)showText;
- (id)showTextLocalizationKey;
- (id)textWithSending;
- (id)toProtobufMessageBuilder;

@end

