//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class PXGadgetSpec, PXPhotosGlobalFooterView;
@protocol PXGadgetDelegate;

@interface PXForYouFooterGadget : NSObject <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    PXPhotosGlobalFooterView *_footerView;
}

@property(retain, nonatomic) PXPhotosGlobalFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
// - (void).cxx_destruct;
- (NSObject )contentView;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
- (id)initWithViewModel:(id)arg1;

@end

