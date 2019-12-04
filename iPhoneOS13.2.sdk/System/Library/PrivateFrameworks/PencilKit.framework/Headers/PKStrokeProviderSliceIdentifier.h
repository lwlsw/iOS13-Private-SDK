//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeIdentifier-Protocol.h>

@class NSString, NSUUID;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier>
{
    double _tStart;
    double _tEnd;
    NSUUID *_strokeUUID;
    struct _PKStrokeID _version;
}

@property(readonly, nonatomic) struct _PKStrokeID version; // @synthesize version=_version;
@property(readonly, nonatomic) NSUUID *strokeUUID; // @synthesize strokeUUID=_strokeUUID;
@property(readonly, nonatomic) double tEnd; // @synthesize tEnd=_tEnd;
@property(readonly, nonatomic) double tStart; // @synthesize tStart=_tStart;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 version:(struct _PKStrokeID)arg2 tStart:(double)arg3 tEnd:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
