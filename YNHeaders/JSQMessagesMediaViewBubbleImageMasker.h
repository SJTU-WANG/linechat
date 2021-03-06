//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSQMessagesBubbleImageFactory;

@interface JSQMessagesMediaViewBubbleImageMasker : NSObject
{
    JSQMessagesBubbleImageFactory *_bubbleImageFactory;
}

+ (void)applyBubbleImageMaskToMediaView:(id)arg1 isOutgoing:(_Bool)arg2;
- (void).cxx_destruct;
- (void)applyIncomingBubbleImageMaskToMediaView:(id)arg1;
- (void)applyOutgoingBubbleImageMaskToMediaView:(id)arg1;
@property(readonly, nonatomic) JSQMessagesBubbleImageFactory *bubbleImageFactory; // @synthesize bubbleImageFactory=_bubbleImageFactory;
- (id)init;
- (id)initWithBubbleImageFactory:(id)arg1;
- (void)jsq_maskView:(id)arg1 withImage:(id)arg2;

@end

