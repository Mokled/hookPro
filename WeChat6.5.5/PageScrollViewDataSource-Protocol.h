//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PageScrollView, UIView;

@protocol PageScrollViewDataSource <NSObject>
- (UIView *)pageScrollView:(PageScrollView *)arg1 viewForItem:(unsigned long long)arg2;
- (unsigned long long)numberOfItems:(PageScrollView *)arg1;
- (unsigned long long)currentIndex:(PageScrollView *)arg1;
@end

