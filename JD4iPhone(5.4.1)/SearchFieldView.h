//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIColor, UIFont, UIScrollView;

@interface SearchFieldView : JDView <UIScrollViewDelegate>
{
    int startContentOffsetX;
    int willEndContentOffsetX;
    int endContentOffsetX;
    _Bool _isJump;
    _Bool _isScroll;
    UIFont *_font;
    UIScrollView *_scrollView;
    NSMutableArray *_tagViews;
    UIColor *_tagBackgroundColor;
    UIColor *_tagForegroundColor;
    NSMutableArray *_tagInfos;
    double _tagGap;
    CDUnknownBlockType _searchTag;
    CDUnknownBlockType _refreshSearchField;
    CDUnknownBlockType _gotoSearchFieldText;
}

@property(copy, nonatomic) CDUnknownBlockType gotoSearchFieldText; // @synthesize gotoSearchFieldText=_gotoSearchFieldText;
@property(copy, nonatomic) CDUnknownBlockType refreshSearchField; // @synthesize refreshSearchField=_refreshSearchField;
@property(copy, nonatomic) CDUnknownBlockType searchTag; // @synthesize searchTag=_searchTag;
@property(nonatomic) _Bool isScroll; // @synthesize isScroll=_isScroll;
@property(nonatomic) _Bool isJump; // @synthesize isJump=_isJump;
@property(nonatomic) double tagGap; // @synthesize tagGap=_tagGap;
@property(retain, nonatomic) NSMutableArray *tagInfos; // @synthesize tagInfos=_tagInfos;
@property(retain, nonatomic) UIColor *tagForegroundColor; // @synthesize tagForegroundColor=_tagForegroundColor;
@property(retain, nonatomic) UIColor *tagBackgroundColor; // @synthesize tagBackgroundColor=_tagBackgroundColor;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)scrollClick;
- (void)removeAllTag;
- (void)jumpSearchFieldText;
- (void)removeTag:(id)arg1;
- (long long)tagListCount;
- (id)tagButtonWithTag:(id)arg1 posX:(double)arg2;
- (void)restingbtnFrame:(id)arg1 posX:(double)arg2;
- (void)reshScrollView;
- (double)posXForObjectNextToLastTagView;
- (void)addTagToLast:(id)arg1 animated:(_Bool)arg2;
- (void)addTagData:(id)arg1;
- (void)tagResetFrame:(float)arg1;
- (void)refreshSearchFieldInFieldView;
- (void)initTag:(id)arg1 animated:(_Bool)arg2;
- (void)initProperties;
- (void)initControls;
- (void)setScrollFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
