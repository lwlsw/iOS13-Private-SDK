//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@protocol _UIIVCInterface;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterfaceClient : NSExtensionContext
{
    id <_UIIVCInterface> _forwardingInterface;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(retain, nonatomic) id <_UIIVCInterface> forwardingInterface; // @synthesize forwardingInterface=_forwardingInterface;
- (void)dealloc;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (id)responseDelegate;

@end
