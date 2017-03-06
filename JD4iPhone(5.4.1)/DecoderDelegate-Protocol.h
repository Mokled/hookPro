//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Decoder, NSString, TwoDDecoderResult, UIImage;

@protocol DecoderDelegate <NSObject>

@optional
- (void)decoder:(Decoder *)arg1 foundPossibleResultPoint:(struct CGPoint)arg2;
- (void)decoder:(Decoder *)arg1 failedToDecodeImage:(UIImage *)arg2 usingSubset:(UIImage *)arg3 reason:(NSString *)arg4;
- (void)decoder:(Decoder *)arg1 didDecodeImage:(UIImage *)arg2 usingSubset:(UIImage *)arg3 withResult:(TwoDDecoderResult *)arg4;
- (void)decoder:(Decoder *)arg1 willDecodeImage:(UIImage *)arg2 usingSubset:(UIImage *)arg3;
@end
