//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FGItem.h"

@class FGFlexboxLayout, NSArray, NSMutableDictionary, UIColor;

@interface FGBox : FGItem
{
    unsigned long long _display;	// 8 = 0x8
    UIColor *_background_color;	// 16 = 0x10
    FGFlexboxLayout *_flexLayout;	// 24 = 0x18
    NSArray *_subviews;	// 32 = 0x20
    FGBox *_parentBox;	// 40 = 0x28
    CDUnknownBlockType _actionBlock;	// 48 = 0x30
    NSMutableDictionary *_itemView2ActionMap;	// 56 = 0x38
}

+ (id)parseWithPlist:(id)arg1;
+ (id)parseWithDataOfBox:(id)arg1 layout:(id)arg2 style:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *itemView2ActionMap; // @synthesize itemView2ActionMap=_itemView2ActionMap;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) FGBox *parentBox; // @synthesize parentBox=_parentBox;
@property(retain, nonatomic) NSArray *subviews; // @synthesize subviews=_subviews;
@property(retain, nonatomic) FGFlexboxLayout *flexLayout; // @synthesize flexLayout=_flexLayout;
@property(retain, nonatomic) UIColor *background_color; // @synthesize background_color=_background_color;
@property(nonatomic) unsigned long long display; // @synthesize display=_display;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1;
- (void)handleButtonClicked:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)addSubViews4BoxView:(id)arg1;
- (void)addAction:(id)arg1 forItemView:(id)arg2;
- (id)render2View;
- (id)init;

@end
