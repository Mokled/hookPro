//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CellMaker : NSObject
{
    NSString *_defaultReuseKey;	// 8 = 0x8
    Class _cellClass;	// 16 = 0x10
}

@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) NSString *defaultReuseKey; // @synthesize defaultReuseKey=_defaultReuseKey;
- (void).cxx_destruct;
- (id)createCell:(id)arg1 withCollView:(id)arg2 withIndex:(id)arg3 withData:(id)arg4 withTimestamp:(long long)arg5 withDelegater:(id)arg6;
- (id)getReuseKey:(id)arg1 withSectionInfo:(id)arg2;

@end
