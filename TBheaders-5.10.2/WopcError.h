//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WopcError : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_code;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
}

+ (id)errorWithType:(unsigned long long)arg1 code:(id)arg2 message:(id)arg3;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end
