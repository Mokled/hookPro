//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FinderCellModelProtocol.h"

@class NSAttributedString, NSString;

@interface FinderArticleDetailMovieModel : NSObject <FinderCellModelProtocol>
{
    NSString *_movieName;
    NSString *_movieId;
    NSString *_releaseDate;
    NSString *_jdPicAddr;
    NSString *_grade;
    NSString *_actors;
    NSString *_director;
    NSAttributedString *_movieRate;
    long long _releaseStatus;
}

@property(nonatomic) long long releaseStatus; // @synthesize releaseStatus=_releaseStatus;
@property(copy, nonatomic) NSAttributedString *movieRate; // @synthesize movieRate=_movieRate;
@property(copy, nonatomic) NSString *director; // @synthesize director=_director;
@property(copy, nonatomic) NSString *actors; // @synthesize actors=_actors;
@property(copy, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(copy, nonatomic) NSString *jdPicAddr; // @synthesize jdPicAddr=_jdPicAddr;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(copy, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
- (void).cxx_destruct;
- (_Bool)isValidModel;
@property(readonly, nonatomic) double cellHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
