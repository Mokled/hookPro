//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface WanderShopAlbumListViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_listArray;
    CDUnknownBlockType _assetsProductChange;
    UITableView *_listTableView;
}

@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(copy, nonatomic) CDUnknownBlockType assetsProductChange; // @synthesize assetsProductChange=_assetsProductChange;
@property(retain, nonatomic) NSArray *listArray; // @synthesize listArray=_listArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)WanderShopAlbumListCancel;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
