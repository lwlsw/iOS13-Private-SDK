//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class EMObjectID, NSSet;

@protocol EMVIPManagerObserver 
- (void)observer:(EMObjectID *)arg1 updatedVIPs:(NSSet *)arg2 removedVIPs:(NSSet *)arg3;
- (void)observer:(EMObjectID *)arg1 gotVIPs:(NSSet *)arg2;
@end
