//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTStrokeSelection;

__attribute__((visibility("hidden")))
@interface TSTArchivedStrokeSelection : TSPObject <TSKArchivedSelection>
{
    TSTStrokeSelection *mStrokeSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mStrokeSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;

@end

