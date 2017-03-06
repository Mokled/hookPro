//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDHotDynamicViewControllerDelegate.h"
#import "JDNewShopDynamicViewControllerDelegate.h"
#import "JDShopCommonErrorViewDelegate.h"
#import "JDShopDynamicSegmentViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class JDButton, JDGoodShopShareModel, JDImageView, JDShopCommonErrorView, JDShopDynamicGetDocModel, JDShopDynamicSegmentView, JDShopDynamicTabListsModel, JDShopMessageButton, JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIScrollView, UIView, UIViewController;

@interface JDShopFeatureViewController : JDViewController <JDShopCommonErrorViewDelegate, JDShopDynamicSegmentViewDelegate, JDNewShopDynamicViewControllerDelegate, JDHotDynamicViewControllerDelegate, UIScrollViewDelegate>
{
    UIViewController *currentViewController;
    UIScrollView *mainScrollView;
    long long lastIndex;
    _Bool isShowMy;
    _Bool isShowMyRedDot;
    JDStoreNetwork *_netWork;
    UIButton *myShopFeatureBtn;
    UIView *myShopRedDotView;
    NSMutableArray *tabArray;
    JDImageView *brandTitleView;
    _Bool _showRedDot;
    int _featureType;
    long long _entranceType;
    NSMutableArray *_vcArray;
    NSMutableDictionary *_params;
    JDShopMessageButton *_messageButton;
    JDButton *_segmentBtn;
    JDShopDynamicSegmentView *_segmentView;
    long long _msgCount;
    JDGoodShopShareModel *_dynamicShareModel;
    JDShopCommonErrorView *_errorView;
    JDShopDynamicGetDocModel *_docModel;
    JDShopDynamicTabListsModel *_tabListModel;
}

@property(retain, nonatomic) JDShopDynamicTabListsModel *tabListModel; // @synthesize tabListModel=_tabListModel;
@property(retain, nonatomic) JDShopDynamicGetDocModel *docModel; // @synthesize docModel=_docModel;
@property(retain, nonatomic) JDShopCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) JDGoodShopShareModel *dynamicShareModel; // @synthesize dynamicShareModel=_dynamicShareModel;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
@property(retain, nonatomic) JDShopDynamicSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) JDButton *segmentBtn; // @synthesize segmentBtn=_segmentBtn;
@property(retain, nonatomic) JDShopMessageButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *vcArray; // @synthesize vcArray=_vcArray;
@property(nonatomic) long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) int featureType; // @synthesize featureType=_featureType;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)turn2GoodShopVC;
- (void)turn2HotVC;
- (void)selectControllerByIndex:(id)arg1;
- (void)batchSetTableViewScrollTopProperty:(long long)arg1;
- (void)segmentButtonSelect:(id)arg1 selectIndex:(long long)arg2;
- (void)reloadDataAfterError;
- (id)transferEntranceType:(long long)arg1;
- (void)selectControllerFromChild:(long long)arg1;
- (void)requestMessageRedDotData;
- (void)getRedDotCompleted:(id)arg1;
- (void)messageButtonTapped:(id)arg1;
- (void)initSegmentView;
- (void)requestBrandHeadLineConfig;
- (void)requestBrandHeadLineTabLists;
- (void)myShopFeatureBtnClick:(id)arg1;
- (void)shopFeatureshareAction:(id)arg1;
- (void)initMainScrollView;
- (void)initNavigationBarButtonItem;
- (void)initCustomTitle;
- (void)viewDidLoad;
- (id)DataTOjsonString:(id)arg1;
- (id)buttonImageFromColor:(id)arg1;
- (void)navBgUnderLineIsShow:(_Bool)arg1;
- (id)initWithControllerWithType:(int)arg1 params:(id)arg2;
- (void)batchSetReportPV;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
