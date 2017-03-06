//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class InviteModel, JDWareTitleLabel, NSString, UIButton, UIImageView, UILabel, UITextField;

@interface InviteView : UIView <UITextFieldDelegate>
{
    UIImageView *_iconImgView;
    JDWareTitleLabel *_firstWord;
    JDWareTitleLabel *_secondWord;
    UILabel *_helpLabel;
    UILabel *_stepTitleLabel;
    UILabel *_step1Label;
    UITextField *_step1Field;
    UILabel *_step2Label;
    UITextField *_step2Field;
    UIImageView *_captchaImgView;
    UILabel *_captchaFailedLabel;
    UIButton *_applyBtn;
    InviteModel *_inviteModel;
    id <InviteViewDelegate> _delegate;
}

@property(nonatomic) id <InviteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)taped;
- (void)clicked:(id)arg1;
- (void)refreshViews;
- (void)setupSubViews;
- (void)hideKeyBoard;
- (void)updateCaptchaImage:(id)arg1;
- (void)setModel:(id)arg1;
@property(readonly, nonatomic) InviteModel *model;
@property(readonly, nonatomic) NSString *captcha;
@property(readonly, nonatomic) NSString *invitationCode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
