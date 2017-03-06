//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISREngineDelegate.h"

@class IFlyISRParam, ISREngine, NSDate, NSString;

@interface IFlyStreamRecognizer : NSObject <ISREngineDelegate>
{
    ISREngine *_isrEngine;
    long long _audioCount;
    long long _resultCount;
    int _netTimeout;
    NSDate *_startDate;
    NSDate *_stopDate;
    int _state;
    int _error;
    NSString *_params;
    NSString *_grammar;
    NSString *_appid;
    id <IFlySpeechRecognizerDelegate> _delegate;
    IFlyISRParam *_sessionConfig;
}

@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) IFlyISRParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property id <IFlySpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *grammar; // @synthesize grammar=_grammar;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
- (void)onEnd:(int)arg1;
- (void)onResult:(id)arg1 isLast:(_Bool)arg2;
- (void)onEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(id)arg4;
- (void)onStop;
- (void)dealloc;
- (void)setSessionInfo;
- (void)cancel;
- (_Bool)stopWrite;
- (_Bool)writeAudio:(id)arg1;
- (void)setState:(int)arg1;
- (_Bool)startListening:(id)arg1 grammar:(id)arg2;
- (id)init:(id)arg1 config:(id)arg2;

@end
