//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIActionGroupable-Protocol.h>

@class NSString, UIImage;

@interface _UIAction : NSObject <_UIActionGroupable>
{
    NSUInteger _options;
    long long _type;
    NSString *_title;
    UIImage *_image;
    long long _style;
    id /* CDUnknownBlockType */ _handler;
}

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)performAction;
- (id)_initWithWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_apiRepresentation;

@end
