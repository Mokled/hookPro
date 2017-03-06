//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

#import "AudioSearchViewControllerDelegate.h"
#import "SearchHistoryViewDelegate.h"
#import "UITextFieldDelegate.h"

@class AudioSearchViewController, FinalSearchBarViewModel, NSString, SearchFieldText, SearchFieldView, SearchHistoryView, UIButton, UIImageView;

@interface FinalSearchProductListSearchBar : JDView <AudioSearchViewControllerDelegate, UITextFieldDelegate, SearchHistoryViewDelegate>
{
    _Bool _isComeFromClick;
    _Bool _isEdit;
    id <FinalSearchProductListSearchBarDelegate> _pdSearchDelegate;
    UIButton *_changeListGridBtn;
    UIButton *_cancelBtn;
    SearchFieldText *_searchField;
    SearchFieldView *_searchFlagField;
    UIButton *_audioButton;
    UIImageView *_searchFieldBg;
    NSString *_maidian;
    SearchHistoryView *_cancelHistory;
    AudioSearchViewController *_audioCtr;
    UIButton *_clearButton;
    NSString *_pvid;
    FinalSearchBarViewModel *_viewModel;
}

@property(retain, nonatomic) FinalSearchBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) AudioSearchViewController *audioCtr; // @synthesize audioCtr=_audioCtr;
@property(retain, nonatomic) SearchHistoryView *cancelHistory; // @synthesize cancelHistory=_cancelHistory;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool isComeFromClick; // @synthesize isComeFromClick=_isComeFromClick;
@property(copy, nonatomic) NSString *maidian; // @synthesize maidian=_maidian;
@property(retain, nonatomic) UIImageView *searchFieldBg; // @synthesize searchFieldBg=_searchFieldBg;
@property(retain, nonatomic) UIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) SearchFieldView *searchFlagField; // @synthesize searchFlagField=_searchFlagField;
@property(retain, nonatomic) SearchFieldText *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *changeListGridBtn; // @synthesize changeListGridBtn=_changeListGridBtn;
@property(nonatomic) __weak id <FinalSearchProductListSearchBarDelegate> pdSearchDelegate; // @synthesize pdSearchDelegate=_pdSearchDelegate;
- (void).cxx_destruct;
- (void)searchBarIconTypeChange:(id)arg1;
- (void)searchBarGotoSearchText:(id)arg1 showInputView:(_Bool)arg2;
- (void)reShowTagView;
- (void)addTagData:(id)arg1;
- (void)searchBarClick:(id)arg1 withSaveKeyword:(_Bool)arg2 withBoxWord:(id)arg3;
- (void)searchBarClick:(id)arg1;
- (void)audioSearchViewController:(id)arg1 FinishRequestWithKey:(id)arg2;
- (void)adhesionWords:(id)arg1;
- (void)adhesionWordsFrame;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)flagJumpField:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)suggestViewDidScroll:(id)arg1;
- (void)showHistoryView;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)changeCancelBtn:(_Bool)arg1;
- (void)cancelInput;
- (void)checkAudioButtonIsShow;
- (void)cancelAction;
- (void)cancelInputClick;
- (void)changeListGrid;
- (void)audioAction;
- (void)historyTableViwDidScroll:(id)arg1;
- (void)resetSelfFrameToOrigin:(_Bool)arg1;
- (void)keywordSelected:(id)arg1 forSearchType:(int)arg2 forSearchCid:(id)arg3;
- (void)handleAudioButtonShowNotification:(id)arg1;
- (void)textEditBegin;
- (void)dealloc;
- (void)clearClick;
- (void)createSearchBar;
- (id)initWithViewModel:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
