//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface YNPieChartView : UIView
{
    double _currentSpaceScale;
    double _didUseSpaceScale;
    double _availableSpaceScale;
    double _progress;
}

@property(nonatomic) double availableSpaceScale; // @synthesize availableSpaceScale=_availableSpaceScale;
@property(nonatomic) double currentSpaceScale; // @synthesize currentSpaceScale=_currentSpaceScale;
@property(nonatomic) double didUseSpaceScale; // @synthesize didUseSpaceScale=_didUseSpaceScale;
- (void)drawRect:(struct CGRect)arg1;
- (void)paintpie:(struct CGContext *)arg1 start:(double)arg2 capacity:(double)arg3 pointx:(double)arg4 pointy:(double)arg5 radius:(double)arg6 piecolor:(id)arg7;
@property(nonatomic) double progress; // @synthesize progress=_progress;

@end
