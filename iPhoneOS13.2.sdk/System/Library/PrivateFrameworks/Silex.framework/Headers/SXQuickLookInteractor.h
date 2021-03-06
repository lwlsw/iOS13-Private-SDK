//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookInteractor-Protocol.h>

@class SXQuickLookFile;
@protocol SXQuickLookInteractorDelegate, SXQuickLookService;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor>
{
    id <SXQuickLookInteractorDelegate> delegate;
    SXQuickLookFile *_file;
    id <SXQuickLookService> _service;
}

@property(readonly, nonatomic) id <SXQuickLookService> service; // @synthesize service=_service;
@property(readonly, nonatomic) SXQuickLookFile *file; // @synthesize file=_file;
@property(nonatomic) __weak id <SXQuickLookInteractorDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (void)loadThumbnailWithSize:(CGSize)arg1;
- (id)initWithFile:(id)arg1 service:(id)arg2;

@end

