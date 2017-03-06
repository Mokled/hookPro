//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "BBMediaMovieAssetProvider.h"
#import "BBMediaStickerAdjustmentViewDelegate.h"
#import "MDMomentEditBottomToolBarDelegate.h"
#import "MDMomentEditTopToolViewDelegate.h"
#import "MDMomentTopicSelectManagerDelegate.h"
#import "UIAlertViewDelegate.h"

@class BBGPUImageMediaEditorPreviewFilter, BBMediaStickerAdjustmentView, BBMediaTextOverlayEditorView, MDMomentEditBottomToolBar, MDMomentEditSettingCardController, MDMomentEditTopToolView, MDMomentExpressionViewController, MDMomentSendButton, MDMomentTopicEntranceView, MDMomentTopicSelectManager, MDMomentVideoResult, MLCVPixelBufferView, MLGPUImageCVPixelBufferOutput, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, SDDownloadProgressView, UIButton, UIImage, UIImageView, UIView;

@interface MDTimelineEditViewController : MDViewController <BBMediaStickerAdjustmentViewDelegate, MDMomentEditTopToolViewDelegate, MDMomentEditBottomToolBarDelegate, UIAlertViewDelegate, MDMomentTopicSelectManagerDelegate, BBMediaMovieAssetProvider>
{
    _Bool _needDeleteSticker;
    _Bool _isRenderingOutput;
    _Bool _isSending;
    _Bool _hasShowedGuideTip;
    _Bool _isBackground;
    MDMomentVideoResult *_videoinfo;
    MLCVPixelBufferView *_previewView;
    MDMomentEditTopToolView *_topToolView;
    BBMediaStickerAdjustmentView *_stickerEditView;
    BBMediaTextOverlayEditorView *_textEditView;
    UIImageView *_graffitiCanvasView;
    MDMomentEditBottomToolBar *_bottomToolBar;
    UIButton *_stickerButton;
    MDMomentEditSettingCardController *_settingCard;
    MDMomentExpressionViewController *_stickerChooseView;
    UIImageView *_deleteStickerView;
    MDMomentSendButton *_sendButton;
    UIView *_costumContentView;
    UIButton *_cancelButton;
    NSOperationQueue *_renderQueue;
    UIImage *_stickerOverlaySnapshot;
    UIImage *_textOverlaySnapshot;
    UIImage *_previewViewSnapshot;
    long long _stickerCount;
    NSMutableArray *_stickers;
    SDDownloadProgressView *_processingHUD;
    id <BBMediaEditorMedia> _media;
    BBGPUImageMediaEditorPreviewFilter *_previewFilter;
    MLGPUImageCVPixelBufferOutput *_pixelBufferOutput;
    NSObject<OS_dispatch_queue> *_pixelBufferOutputCallbackQueue;
    MDMomentTopicEntranceView *_topicEntranceView;
    MDMomentTopicSelectManager *_momentTopicSelectManager;
}

@property(retain, nonatomic) MDMomentTopicSelectManager *momentTopicSelectManager; // @synthesize momentTopicSelectManager=_momentTopicSelectManager;
@property(retain, nonatomic) MDMomentTopicEntranceView *topicEntranceView; // @synthesize topicEntranceView=_topicEntranceView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pixelBufferOutputCallbackQueue; // @synthesize pixelBufferOutputCallbackQueue=_pixelBufferOutputCallbackQueue;
@property(retain, nonatomic) MLGPUImageCVPixelBufferOutput *pixelBufferOutput; // @synthesize pixelBufferOutput=_pixelBufferOutput;
@property(retain, nonatomic) BBGPUImageMediaEditorPreviewFilter *previewFilter; // @synthesize previewFilter=_previewFilter;
@property(copy, nonatomic) id <BBMediaEditorMedia> media; // @synthesize media=_media;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool hasShowedGuideTip; // @synthesize hasShowedGuideTip=_hasShowedGuideTip;
@property(nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(nonatomic) _Bool isRenderingOutput; // @synthesize isRenderingOutput=_isRenderingOutput;
@property(retain, nonatomic) SDDownloadProgressView *processingHUD; // @synthesize processingHUD=_processingHUD;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) long long stickerCount; // @synthesize stickerCount=_stickerCount;
@property(retain, nonatomic) UIImage *previewViewSnapshot; // @synthesize previewViewSnapshot=_previewViewSnapshot;
@property(retain, nonatomic) UIImage *textOverlaySnapshot; // @synthesize textOverlaySnapshot=_textOverlaySnapshot;
@property(retain, nonatomic) UIImage *stickerOverlaySnapshot; // @synthesize stickerOverlaySnapshot=_stickerOverlaySnapshot;
@property(nonatomic) _Bool needDeleteSticker; // @synthesize needDeleteSticker=_needDeleteSticker;
@property(retain, nonatomic) NSOperationQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *costumContentView; // @synthesize costumContentView=_costumContentView;
@property(retain, nonatomic) MDMomentSendButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIImageView *deleteStickerView; // @synthesize deleteStickerView=_deleteStickerView;
@property(retain, nonatomic) MDMomentExpressionViewController *stickerChooseView; // @synthesize stickerChooseView=_stickerChooseView;
@property(retain, nonatomic) MDMomentEditSettingCardController *settingCard; // @synthesize settingCard=_settingCard;
@property(retain, nonatomic) UIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(retain, nonatomic) MDMomentEditBottomToolBar *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
@property(retain, nonatomic) UIImageView *graffitiCanvasView; // @synthesize graffitiCanvasView=_graffitiCanvasView;
@property(retain, nonatomic) BBMediaTextOverlayEditorView *textEditView; // @synthesize textEditView=_textEditView;
@property(retain, nonatomic) BBMediaStickerAdjustmentView *stickerEditView; // @synthesize stickerEditView=_stickerEditView;
@property(retain, nonatomic) MDMomentEditTopToolView *topToolView; // @synthesize topToolView=_topToolView;
@property(retain, nonatomic) MLCVPixelBufferView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) MDMomentVideoResult *videoinfo; // @synthesize videoinfo=_videoinfo;
- (void).cxx_destruct;
- (void)selectManagerDidCloseSelectTable:(id)arg1;
- (void)selectManager:(id)arg1 didFinishSelectWithTopicID:(id)arg2 topicName:(id)arg3;
- (void)showTopicSelectTable:(id)arg1;
- (void)updateProcessing:(double)arg1;
- (void)hideProcessingHUD;
- (void)showProcessingHUD;
- (void)startTransitionAnimation;
- (void)mediaStickerAdjustmentView:(id)arg1 stickerDidEndChange:(id)arg2 frame:(struct CGRect)arg3;
- (void)mediaStickerAdjustmentView:(id)arg1 stickerDidMove:(id)arg2 frame:(struct CGRect)arg3 touchPoint:(struct CGPoint)arg4;
- (void)mediaStickerAdjustmentView:(id)arg1 stickerWillBeginChange:(id)arg2 frame:(struct CGRect)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCancelAlert;
- (void)sendButtonTapped;
- (void)availableSettingButtonTapped;
- (void)saveButtonTapped;
- (void)showPainterViewController:(id)arg1;
- (void)painterEditButtonTapped;
- (void)textEditButtonTapped;
- (void)didTappedView:(id)arg1;
- (void)stickerEditButtonTapped;
- (void)cancelButtonTapped;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)renderOverlaySnapshot:(id)arg1 forDownload:(_Bool)arg2;
- (id)getPreviewImageFromVideoURL:(id)arg1;
- (id)generateMomentInfo;
- (void)renderMediaForFinalOutputWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configurateFilters;
- (void)updateViewElementsWithAlpha:(double)arg1;
- (void)addGuideBubble;
- (id)coverViewWithFrame:(struct CGRect)arg1 startAlpha:(double)arg2 toBottom:(_Bool)arg3;
- (void)configureSubviews;
- (void)addNotificationObserver;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)keyboardDidHide;
- (void)publishMomentFinish:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)renderPreview;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)movieAssetForMedia:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
