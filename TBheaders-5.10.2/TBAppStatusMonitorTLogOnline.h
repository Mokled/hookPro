//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBAppStatusMonitor;

@interface TBAppStatusMonitorTLogOnline : NSObject
{
    _Bool _isEnableTLog;	// 8 = 0x8
    TBAppStatusMonitor *_appStatusMonitor;	// 16 = 0x10
    id _runtimeTLogService;	// 24 = 0x18
}

@property(retain, nonatomic) id runtimeTLogService; // @synthesize runtimeTLogService=_runtimeTLogService;
@property(nonatomic) __weak TBAppStatusMonitor *appStatusMonitor; // @synthesize appStatusMonitor=_appStatusMonitor;
@property(nonatomic) _Bool isEnableTLog; // @synthesize isEnableTLog=_isEnableTLog;
- (void).cxx_destruct;
- (id)invokeWithTarget:(id)arg1 selector:(SEL)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5;
- (void)handleTLogSwitchChanged:(id)arg1;
- (void)setTraceDict:(id)arg1;
- (void)makeSnapshot:(id)arg1 pageURL:(id)arg2;
- (void)checkShouldBeginTLogMonitor;
- (void)dealloc;
- (id)init;

@end
