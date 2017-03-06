//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableArray, UILabel, UIView;

@interface JDIMBaseVC : UIViewController
{
    _Bool _alreadyAppear;
    _Bool _isOldHideNav;
    UIViewController *_doModelViewController;
    UILabel *_titleLable;
    UIView *_navigationView;
    NSMutableArray *_networks;
    UIViewController *_parentPresentVC;
}

@property(nonatomic) _Bool isOldHideNav; // @synthesize isOldHideNav=_isOldHideNav;
@property(nonatomic) _Bool alreadyAppear; // @synthesize alreadyAppear=_alreadyAppear;
@property(nonatomic) __weak UIViewController *parentPresentVC; // @synthesize parentPresentVC=_parentPresentVC;
@property(retain, nonatomic) NSMutableArray *networks; // @synthesize networks=_networks;
@property(retain, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) __weak UIViewController *doModelViewController; // @synthesize doModelViewController=_doModelViewController;
- (void).cxx_destruct;
- (void)jump2Root:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBack:(id)arg1;
- (void)addNetWork:(id)arg1;
- (void)removeNetWork:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)isShowNetworkAlertView;
- (void)hideBackBtn:(_Bool)arg1;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end
