//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject
{
    NSMutableDictionary *__loadHandlers;
}

+ (id)providerWithItem:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *_loadHandlers; // @synthesize _loadHandlers=__loadHandlers;
- (void)registerItem:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic) NSSet *registeredIdentifiers;
- (id)itemForIdentifier:(id)arg1;
- (_Bool)hasItemForIdentifier:(id)arg1;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (id)init;

@end
