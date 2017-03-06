//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JHSNavigationProtocol-Protocol.h"

@class NSString;

@interface JHSNavigationTaobaoImpl : NSObject <JHSNavigationProtocol>
{
}

- (void)setBarBackgroundColor:(id)arg1 withContainer:(id)arg2;
- (void)setBarBackgroundImage:(id)arg1 withContainer:(id)arg2;
- (id)backButtonItemOfContainer:(id)arg1 withSelector:(SEL)arg2 withType:(long long)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withContainer:(id)arg3;
- (id)navigationControllerOfContainer:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3 withContainer:(id)arg4;
- (void)popViewControllerAnimated:(_Bool)arg1 withContainer:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithItems:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithItem:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithImage:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;
- (void)updateNavigationItemWithText:(id)arg1 position:(long long)arg2 withContainer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
