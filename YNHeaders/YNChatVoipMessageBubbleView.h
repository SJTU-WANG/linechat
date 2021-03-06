//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel, YNChatMessage;

@interface YNChatVoipMessageBubbleView : UIImageView
{
    UIImageView *_videoCallIcon;
    UILabel *_statusLabel;
    YNChatMessage *_message;
}

+ (struct CGSize)bubbleSizeForVoipMessage:(id)arg1;
- (void).cxx_destruct;
- (void)configureWithChatMessage:(id)arg1;
- (id)init;
@property(retain, nonatomic) YNChatMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *videoCallIcon; // @synthesize videoCallIcon=_videoCallIcon;
- (void)updateLayout;

@end

