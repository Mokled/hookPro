//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString;

@interface MDDecoration : EtaModel
{
    NSString *_did;
    NSString *_title;
    long long _version;
    NSString *_url;
    long long _size;
    NSString *_origin_url;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSString *origin_url; // @synthesize origin_url=_origin_url;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *did; // @synthesize did=_did;
- (void).cxx_destruct;

@end
