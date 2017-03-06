//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SeePeopleNearByLogicController.h"

@interface SeePeopleNearbyViewController

@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;

- (void)viewDidLayoutSubviews;	// IMP=0x017bdae9
- (void)viewWillAppear:(BOOL)arg1;	// IMP=0x017bda9d
- (void)bindPhoneReturn;	// IMP=0x017bda7f
- (void)onBindQQBtnClicked;	// IMP=0x017bd9f7
- (void)onUploadAddressbookBtnClicked;	// IMP=0x017bd817
- (void)onBindPhoneBtnClicked;	// IMP=0x017bd77b
- (void)adjustSubviewRects;	// IMP=0x017bd737
- (void)onChatRoomNearByBtnClicked;	// IMP=0x017bd6af
- (void)onClickTipsBtn:(unsigned int)arg1;	// IMP=0x017bd5f7
- (void)confirmClearMyLbsData:(id)arg1;	// IMP=0x017bd415
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;	// IMP=0x017bca93
- (void)SettingMyAccountExtInfoExit;	// IMP=0x017bca1f
- (void)onJoinChatRoomFailed;	// IMP=0x017bca0f
- (void)onJoinChatRoomFinishedWithResult:(id)arg1;	// IMP=0x017bc73b
- (void)onJoinChatRoomStart;	// IMP=0x017bc681
- (void)onGetCertificationFinish;	// IMP=0x017bc63b
- (void)onSelectedWithLbsPoiItem:(id)arg1;	// IMP=0x017bc4e3
- (void)onSelectedWithLbsContactInfo:(id)arg1;	// IMP=0x017bc491
- (void)showPeopleInfoView:(id)arg1;	// IMP=0x017bbe9b
- (void)showContactInfoView:(id)arg1;	// IMP=0x017bbb5f
- (void)onUpdateLbsContactInfoError:(int)arg1;	// IMP=0x017bb899
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;	// IMP=0x017bb6f3
- (void)onGetLBSRecommendPoiList:(id)arg1;	// IMP=0x017bb6d5
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;	// IMP=0x017bb149
- (void)onClearMyLbsDataFinishedWithResult:(BOOL)arg1;	// IMP=0x017badd1
- (void)goBackToRootView;	// IMP=0x017bad59
- (void)showMessage:(id)arg1;	// IMP=0x017bad57
- (void)onRefreshMyFriends;	// IMP=0x017bad1d
- (void)onClearMyLbsData;	// IMP=0x017babf9
- (void)willAppear;	// IMP=0x017baad5
- (void)viewDidLoad;	// IMP=0x017ba53b
- (void)setTitleNavView;	// IMP=0x017b9dd3
- (id)getSexImage;	// IMP=0x017b9c8f
- (void)setRightNavBtn;	// IMP=0x017b9b63
- (void)setRightNavBtnNil;	// IMP=0x017b9ae9
- (void)showOperationMenu:(id)arg1;	// IMP=0x017b97a3
- (void)promptForLBSUsageWarnning;	// IMP=0x017b9601
- (void)onClickNeverPromptForAgree:(id)arg1;	// IMP=0x017b95bd
- (void)promptForProfileExtInfo;	// IMP=0x017b93f9
- (BOOL)isProfileExtInfoOK;	// IMP=0x017b935f
- (void)stopLoading;	// IMP=0x017b9295
- (void)startLoading;	// IMP=0x017b9283
- (void)startLoadingWithText:(id)arg1;	// IMP=0x017b8ff9
- (void)dealloc;	// IMP=0x017b8e45
- (id)init;	// IMP=0x017b8d99

@end
