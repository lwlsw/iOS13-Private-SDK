//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentInsert;
@protocol SXBlueprintMarker;

@interface SXComponentInsertionResult : NSObject
{
    SXComponentInsert *_insert;
    id <SXBlueprintMarker> _marker;
}

@property(readonly, nonatomic) id <SXBlueprintMarker> marker; // @synthesize marker=_marker;
@property(readonly, nonatomic) SXComponentInsert *insert; // @synthesize insert=_insert;
// - (void).cxx_destruct;
- (id)initWithInsert:(id)arg1 marker:(id)arg2;

@end

