//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol UITextFieldDelegate;

@interface TXDelegateProxy : NSObject <UITextFieldDelegate>
{
    id <UITextFieldDelegate> _phoneNumTextFieldDelegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <UITextFieldDelegate> phoneNumTextFieldDelegate; // @synthesize phoneNumTextFieldDelegate=_phoneNumTextFieldDelegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
