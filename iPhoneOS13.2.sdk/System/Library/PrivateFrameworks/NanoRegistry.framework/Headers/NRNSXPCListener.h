//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>

@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol>
{
    id <NRNSXPCListenerDelegate> _listenerDelegate;
}

// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

@end

