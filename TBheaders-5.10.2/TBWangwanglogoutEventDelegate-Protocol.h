//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TBWangwangLogoutEvent;

@protocol TBWangwanglogoutEventDelegate <NSObject>
- (void)wangwangLogoutFinish:(TBWangwangLogoutEvent *)arg1 isSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)wangwangLogoutStart:(TBWangwangLogoutEvent *)arg1;
@end
