//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDTableViewCell.h"

@class JDImageView, JDWareTitleLabel, PicSearchWareModel, UIImage;

@interface PicSearchCell : JDTableViewCell
{
    PicSearchWareModel *picModel_;
    JDImageView *cellImageView_;
    UIImage *img_;
    JDWareTitleLabel *wareTitleLabel_;
    JDWareTitleLabel *descripLable_;
}

@property(retain, nonatomic) UIImage *img; // @synthesize img=img_;
@property(retain, nonatomic) JDWareTitleLabel *descripLable; // @synthesize descripLable=descripLable_;
@property(retain, nonatomic) JDWareTitleLabel *wareTitleLabel; // @synthesize wareTitleLabel=wareTitleLabel_;
@property(retain, nonatomic) JDImageView *cellImageView; // @synthesize cellImageView=cellImageView_;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
