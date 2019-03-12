//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSQMessagesBubbleImage, JSQMessagesBubbleImageFactory, UIImage;

@interface YNChatImageMessageBubbleMaskMaker : NSObject
{
    JSQMessagesBubbleImage *_sendBubbleImageData;
    JSQMessagesBubbleImage *_roundBubbleImageData;
    JSQMessagesBubbleImage *_receiveBubbleImageData;
    UIImage *_sendBubbleBorderImage;
    UIImage *_receiveBubbleBorderImage;
    JSQMessagesBubbleImageFactory *_bubbleImageFactory;
}

+ (id)sharedMaker;
- (void).cxx_destruct;
@property(retain, nonatomic) JSQMessagesBubbleImageFactory *bubbleImageFactory; // @synthesize bubbleImageFactory=_bubbleImageFactory;
- (id)init;
@property(retain, nonatomic) UIImage *receiveBubbleBorderImage; // @synthesize receiveBubbleBorderImage=_receiveBubbleBorderImage;
@property(retain, nonatomic) JSQMessagesBubbleImage *receiveBubbleImageData; // @synthesize receiveBubbleImageData=_receiveBubbleImageData;
@property(retain, nonatomic) JSQMessagesBubbleImage *roundBubbleImageData; // @synthesize roundBubbleImageData=_roundBubbleImageData;
@property(retain, nonatomic) UIImage *sendBubbleBorderImage; // @synthesize sendBubbleBorderImage=_sendBubbleBorderImage;
@property(retain, nonatomic) JSQMessagesBubbleImage *sendBubbleImageData; // @synthesize sendBubbleImageData=_sendBubbleImageData;

@end
