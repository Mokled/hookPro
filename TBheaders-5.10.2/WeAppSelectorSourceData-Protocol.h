//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol WeAppSelectorSourceData <NSObject>

@optional
- (void)setSelectorFrame:(UIView *)arg1 buttonWidth:(void *)arg2 buttonHeight:(void *)arg3;
- (NSString *)selectorView:(UIView *)arg1 selectorNameRowAtIndex:(unsigned long long)arg2;
- (void)setSelectorFrame:(UIView *)arg1;
- (void)changeSelectorViewProperty:(UIView *)arg1 itemView:(id)arg2 withIndex:(unsigned long long)arg3 isSelect:(_Bool)arg4;
- (void)setSelectorViewProperty:(UIView *)arg1 itemView:(id)arg2 withIndex:(unsigned long long)arg3 isSelect:(_Bool)arg4;
@end

