//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCalendarDataContainerProvider-Protocol.h>

@class NSString;

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>
{
}

+ (id)sharedInstance;
- (id)_calendarGroupContainer;
- (void)_performBlockAsPersonaWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (id)_containerForPersonaIdentifier:(id)arg1 containerProviderBlock:(id /* block */)arg2;
- (id)containerForPersonaIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
