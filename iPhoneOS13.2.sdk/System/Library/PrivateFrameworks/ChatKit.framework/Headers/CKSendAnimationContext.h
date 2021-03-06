//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKSendAnimationContext-Protocol.h>

@class CABackdropLayer, NSArray, NSString, UIView;

@interface CKSendAnimationContext : NSObject <CKSendAnimationContext>
{
    BOOL _shouldRepeat;
    BOOL _isSender;
    NSArray *_animatableViews;
    NSArray *_animatableTextViews;
    NSString *_impactIdentifier;
    NSArray *_throwBalloonViews;
    UIView *_containerView;
    NSArray *_framesOfAddedChatItems;
    CABackdropLayer *_backdropLayer;
    NSArray *_messages;
    NSArray *_throwBalloonViewAttributesCollection;
}

@property(copy, nonatomic) NSArray *throwBalloonViewAttributesCollection; // @synthesize throwBalloonViewAttributesCollection=_throwBalloonViewAttributesCollection;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) CABackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(copy, nonatomic) NSArray *framesOfAddedChatItems; // @synthesize framesOfAddedChatItems=_framesOfAddedChatItems;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *throwBalloonViews; // @synthesize throwBalloonViews=_throwBalloonViews;
@property(nonatomic) BOOL isSender; // @synthesize isSender=_isSender;
@property(nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(retain, nonatomic) NSString *impactIdentifier; // @synthesize impactIdentifier=_impactIdentifier;
@property(copy, nonatomic) NSArray *animatableTextViews; // @synthesize animatableTextViews=_animatableTextViews;
@property(copy, nonatomic) NSArray *animatableViews; // @synthesize animatableViews=_animatableViews;
// - (void).cxx_destruct;

@end

