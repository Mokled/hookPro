//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMChatBaseCell.h"

#import "TBIMChatLikeViewDelegate-Protocol.h"

@class NSString, TBIMChatLikeView;

@interface TBIMChatReceiveCell : TBIMChatBaseCell <TBIMChatLikeViewDelegate>
{
    TBIMChatLikeView *_tagView;	// 8 = 0x8
}

@property(retain, nonatomic) TBIMChatLikeView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)chatLikeViewLikeDidTapped:(id)arg1;
- (void)updateWithCurrentLikeStatus;
- (void)updateCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
