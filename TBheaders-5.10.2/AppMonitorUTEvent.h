//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AppMonitorUTEvent : NSObject
{
    NSString *_eventId;	// 8 = 0x8
    NSString *_page;	// 16 = 0x10
    NSString *_arg1;	// 24 = 0x18
    NSString *_arg2;	// 32 = 0x20
    NSString *_arg3;	// 40 = 0x28
    NSString *_access;	// 48 = 0x30
    NSString *_subAccess;	// 56 = 0x38
    NSMutableDictionary *_args;	// 64 = 0x40
}

@property(retain, nonatomic) NSMutableDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *subAccess; // @synthesize subAccess=_subAccess;
@property(retain, nonatomic) NSString *access; // @synthesize access=_access;
@property(retain, nonatomic) NSString *arg3; // @synthesize arg3=_arg3;
@property(retain, nonatomic) NSString *arg2; // @synthesize arg2=_arg2;
@property(retain, nonatomic) NSString *arg1; // @synthesize arg1=_arg1;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)toUTDictionary;

@end
