//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXButtonComponentTextProvider-Protocol.h>

@protocol SXSubscriptionButtonTextProviding;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>
{
    id <SXSubscriptionButtonTextProviding> _textProvider;
}

@property(readonly, nonatomic) id <SXSubscriptionButtonTextProviding> textProvider; // @synthesize textProvider=_textProvider;
// - (void).cxx_destruct;
- (id)buttonText;
- (id)initWithTextProvider:(id)arg1;

@end

