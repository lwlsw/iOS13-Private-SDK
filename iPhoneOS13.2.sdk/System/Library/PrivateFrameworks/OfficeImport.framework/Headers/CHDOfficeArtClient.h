//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OADClient-Protocol.h>

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor *mAnchor;
}

// - (void).cxx_destruct;
- (CGRect)bounds;
- (BOOL)hasBounds;
- (void)setAnchor:(id)arg1;
- (id)anchor;

@end

