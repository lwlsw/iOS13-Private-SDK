//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NULayoutContextSizerAttribute-Protocol.h>

@class NSString;

@interface NULayoutContextSizerUserInterfaceSizeClassAttribute : NSObject <NULayoutContextSizerAttribute>
{
    long long _widthUserInterfaceSizeClass;
    long long _heightUserInterfaceSizeClass;
}

@property(readonly, nonatomic) long long heightUserInterfaceSizeClass; // @synthesize heightUserInterfaceSizeClass=_heightUserInterfaceSizeClass;
@property(readonly, nonatomic) long long widthUserInterfaceSizeClass; // @synthesize widthUserInterfaceSizeClass=_widthUserInterfaceSizeClass;
- (BOOL)matchForLayoutContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithWidthUserInterfaceSizeClass:(long long)arg1 heightUserInterfaceSizeClass:(long long)arg2;

@end

