//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JDMTicketAgentShopsThirdShopModel : JDModel
{
    NSString *_shopId;
    NSString *_shopAddress;
    NSString *_shopOpenTime;
    NSString *_shopName;
    NSString *_shopTip;
    double _shopState;
    NSString *_shopPhoneNo;
}

@property(retain, nonatomic) NSString *shopPhoneNo; // @synthesize shopPhoneNo=_shopPhoneNo;
@property(nonatomic) double shopState; // @synthesize shopState=_shopState;
@property(retain, nonatomic) NSString *shopTip; // @synthesize shopTip=_shopTip;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *shopOpenTime; // @synthesize shopOpenTime=_shopOpenTime;
@property(retain, nonatomic) NSString *shopAddress; // @synthesize shopAddress=_shopAddress;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
