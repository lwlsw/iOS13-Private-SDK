//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/CCUIContentModule-Protocol.h>

@class CCUICAPackageDescription, CCUIContentModuleContext, NSHashTable, NSString, UIColor, UIImage;

@interface CCUIToggleModule : NSObject <CCUIContentModule>
{
    NSHashTable *_contentViewControllers;
    CCUIContentModuleContext *_contentModuleContext;
    CCUICAPackageDescription *_glyphPackageDescription;
}

@property(readonly, copy, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
// - (void).cxx_destruct;
- (id)contentViewControllerForContext:(id)arg1;
- (void)reconfigureView;
- (void)refreshState;
@property(readonly, nonatomic) double glyphScale;
@property(readonly, copy, nonatomic) NSString *glyphState;
- (id)glyphPackage;
@property(readonly, copy, nonatomic) UIColor *selectedColor; // @dynamic selectedColor;
@property(readonly, copy, nonatomic) UIImage *selectedIconGlyph; // @dynamic selectedIconGlyph;
@property(readonly, copy, nonatomic) UIImage *iconGlyph; // @dynamic iconGlyph;
@property(nonatomic, getter=isSelected) BOOL selected; // @dynamic selected;

@end

