//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAnalyticsStateMachineEventHandler.h"

@class PETGoalConversionEventTracker;

@interface SBSystemGestureMetric : SBAnalyticsStateMachineEventHandler
{
    PETGoalConversionEventTracker *_goalTracker;
    unsigned long long _beganLocation;
}

- (void).cxx_destruct;
- (id)initForType:(unsigned long long)arg1 parentMetric:(id)arg2;

@end
