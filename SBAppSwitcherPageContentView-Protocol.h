//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppLayout, SBMainWorkspaceTransitionRequest;

@protocol SBAppSwitcherPageContentView <NSObject>
@property(nonatomic) long long orientation;
@property(nonatomic) double cornerRadius;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)invalidate;

@optional
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2 transitionRequest:(SBMainWorkspaceTransitionRequest *)arg3;
- (void)viewDismissing:(SBAppLayout *)arg1 forTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg2;
- (void)viewPresenting:(SBAppLayout *)arg1 forTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg2;
- (void)setShowingIconOverlayView:(_Bool)arg1;
- (void)setShouldUseBrightMaterial:(_Bool)arg1;
@end

