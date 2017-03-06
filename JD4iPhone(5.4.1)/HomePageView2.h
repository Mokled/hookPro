//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JTNumberScrollAnimatedView, NSDictionary, UIImageView, UILabel;

@interface HomePageView2 : UIView
{
    UIImageView *_star;
    UIImageView *_redLine;
    UIImageView *_title;
    JTNumberScrollAnimatedView *_animatedView;
    UIImageView *_leftCircle;
    UIImageView *_rightCircle;
    UILabel *_unit;
    UILabel *_upText;
    UILabel *_downText;
    UIImageView *_upLine;
    UIImageView *_downLine;
    UIImageView *_phone;
    UIImageView *_clock;
    NSDictionary *_model;
    _Bool stopAnimation;
    _Bool isValidDate;
    long long count;
}

- (void)viewAnimation;
- (void)viewWillAnimation;
- (long long)dayCount;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

@end
