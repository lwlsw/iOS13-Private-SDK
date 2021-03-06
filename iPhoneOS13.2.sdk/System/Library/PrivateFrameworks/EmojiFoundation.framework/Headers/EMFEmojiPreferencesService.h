//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class EMFEmojiPreferences, NSXPCListener;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    EMFEmojiPreferences *_preferences;
}

+ (id)sharedServiceWithMachName:(id)arg1;
@property(retain, nonatomic) EMFEmojiPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_createPreferencesIfNecessary;
- (void)dealloc;
- (id)initWithMachName:(id)arg1;

@end

