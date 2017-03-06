//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TBOrderBannerComponent, TBOrderDoOpInfo, TBOrderDoPayInfo, TBOrderGalleryComponent, TBOrderPageComponent, TBOrderTailInfo, TBOrderTemplateComponent;

@interface TBOrderStructure : NSObject
{
    _Bool _isFirstPage;	// 8 = 0x8
    NSMutableDictionary *_endpoint;	// 16 = 0x10
    NSMutableArray *_data;	// 24 = 0x18
    NSMutableArray *_components;	// 32 = 0x20
    NSMutableArray *_incrementalComponents;	// 40 = 0x28
    TBOrderPageComponent *_page;	// 48 = 0x30
    TBOrderBannerComponent *_banner;	// 56 = 0x38
    TBOrderGalleryComponent *_gallery;	// 64 = 0x40
    TBOrderTemplateComponent *_template;	// 72 = 0x48
    TBOrderDoPayInfo *_doPayInfo;	// 80 = 0x50
    TBOrderDoOpInfo *_doOpInfo;	// 88 = 0x58
    TBOrderTailInfo *_tailInfo;	// 96 = 0x60
}

@property _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(retain) TBOrderTailInfo *tailInfo; // @synthesize tailInfo=_tailInfo;
@property(retain) TBOrderDoOpInfo *doOpInfo; // @synthesize doOpInfo=_doOpInfo;
@property(retain) TBOrderDoPayInfo *doPayInfo; // @synthesize doPayInfo=_doPayInfo;
@property(retain) TBOrderTemplateComponent *template; // @synthesize template=_template;
@property(retain) TBOrderGalleryComponent *gallery; // @synthesize gallery=_gallery;
@property(retain) TBOrderBannerComponent *banner; // @synthesize banner=_banner;
@property(retain) TBOrderPageComponent *page; // @synthesize page=_page;
@property(retain) NSMutableArray *incrementalComponents; // @synthesize incrementalComponents=_incrementalComponents;
@property(retain) NSMutableArray *components; // @synthesize components=_components;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
@property(retain) NSMutableDictionary *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (_Bool)isPaging;
- (id)init;

@end
