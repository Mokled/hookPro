//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutSkuItemModel : TBJSONModel
{
    long long _skuId;	// 8 = 0x8
    double _price;	// 16 = 0x10
    long long _quantity;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    long long _amount;	// 40 = 0x28
}

@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;

@end
