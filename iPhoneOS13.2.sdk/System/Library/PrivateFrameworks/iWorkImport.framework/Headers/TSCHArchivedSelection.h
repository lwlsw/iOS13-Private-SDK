//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class TSCHSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSCHArchivedSelection : TSPObject <TSKArchivedSelection>
{
    TSCHSelection *mSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mSelection;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

