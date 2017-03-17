//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "VoicePrintLogicControllerDelegate-Protocol.h"

@class NSString, UIViewController, VoicePrintLogicControllerFactory;
@protocol VoicePrintHandlerDelegate;

__attribute__((visibility("hidden")))
@interface VoicePrintHandler : MMObject <VoicePrintLogicControllerDelegate>
{
    VoicePrintLogicControllerFactory *m_VoicePrintLogicController;
    _Bool m_bPresentViewController;
    id <VoicePrintHandlerDelegate> m_delegate;
    UIViewController *m_viewController;
    NSString *nsTicket;
    unsigned long long uiMaxVerifyTryTimes;
    NSString *nsShowUrlWhenOverMaxVerifyTimes;
}

@property(retain, nonatomic) NSString *nsShowUrlWhenOverMaxVerifyTimes; // @synthesize nsShowUrlWhenOverMaxVerifyTimes;
@property(nonatomic) unsigned long long uiMaxVerifyTryTimes; // @synthesize uiMaxVerifyTryTimes;
@property(retain, nonatomic) NSString *nsTicket; // @synthesize nsTicket;
@property(nonatomic) __weak UIViewController *m_viewController; // @synthesize m_viewController;
@property(nonatomic) __weak id <VoicePrintHandlerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnVerifyOverLimitFromServer;
- (void)OnClickCanNotUnLockBtn;
- (void)OnVerifySuccessful;
- (void)OpenVoicePrintViewForLogin;
- (void)OpenLogin;
- (void)OpenVerify;
- (void)OpenRsaVerify;
- (void)OpenVoicePrintViewWithType:(int)arg1;
- (id)getNavigationController;
- (id)getViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
