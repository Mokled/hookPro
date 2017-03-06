//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDImageView, UIButton, UIImageView, UILabel;

@interface JDJPFlightListTableViewCell : UITableViewCell
{
    UILabel *depTimeLabel;
    UILabel *arrTimeLabel;
    UILabel *depAirdromeLabel;
    UILabel *arrAirdromeLabel;
    JDImageView *flightIconView;
    UILabel *airwaysLabel;
    UILabel *flightNoLabel;
    UILabel *planeStyleLabel;
    UILabel *flightClassTypeLabel;
    UILabel *priceLabel;
    UILabel *bestPriceLabel;
    UIImageView *disclosureIndicatorImgView;
    UILabel *stopLabel;
    UILabel *_dayChangeLabel;
    UIButton *_seatNumLabel;
    UIImageView *_separatorLine2;
}

@property(retain, nonatomic) UIImageView *separatorLine2; // @synthesize separatorLine2=_separatorLine2;
@property(retain, nonatomic) UIButton *seatNumLabel; // @synthesize seatNumLabel=_seatNumLabel;
@property(retain, nonatomic) UILabel *dayChangeLabel; // @synthesize dayChangeLabel=_dayChangeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel;
@property(retain, nonatomic) UILabel *flightClassTypeLabel; // @synthesize flightClassTypeLabel;
@property(retain, nonatomic) UILabel *planeStyleLabel; // @synthesize planeStyleLabel;
@property(retain, nonatomic) UILabel *flightNoLabel; // @synthesize flightNoLabel;
@property(retain, nonatomic) UILabel *airwaysLabel; // @synthesize airwaysLabel;
@property(retain, nonatomic) UILabel *arrAirdromeLabel; // @synthesize arrAirdromeLabel;
@property(retain, nonatomic) UILabel *depAirdromeLabel; // @synthesize depAirdromeLabel;
@property(retain, nonatomic) UILabel *arrTimeLabel; // @synthesize arrTimeLabel;
@property(retain, nonatomic) UILabel *depTimeLabel; // @synthesize depTimeLabel;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSeatNumLabelText:(id)arg1;
- (void)setStopView:(_Bool)arg1;
- (void)setFlightClassTypeLabelText:(id)arg1 discount:(id)arg2;
- (void)layoutSubviews;
- (void)setBestPriceLabelText:(id)arg1;
- (void)setPlaneStyleLabelText:(id)arg1;
- (void)setFlightNoLabelText:(id)arg1;
- (void)setAirWaysLabelText:(id)arg1;
- (void)setAirLogoUrl:(id)arg1;
- (void)setArrAirdromeLabelText:(id)arg1;
- (void)setDepAirdromeLabelText:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
