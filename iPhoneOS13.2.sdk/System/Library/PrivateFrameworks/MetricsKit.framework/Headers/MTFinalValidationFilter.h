//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/MTEventFilter-Protocol.h>

@interface MTFinalValidationFilter : MTObject <MTEventFilter>
{
    BOOL _shouldApplyDeRes;
}

@property(nonatomic) BOOL shouldApplyDeRes; // @synthesize shouldApplyDeRes=_shouldApplyDeRes;
- (id)apply:(id)arg1;
- (void)validateFields:(id)arg1;

@end

