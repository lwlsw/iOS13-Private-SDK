//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderPipelineFunction.h>

@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction
{
    NSDictionary *_params;
    NSString *_source;
}

// - (void).cxx_destruct;
- (BOOL)isEqualToFunction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)evaluate:(id)arg1 error:(out id )arg2;
- (id)description;
- (id)initWithParameters:(id)arg1 source:(id)arg2;
- (id)init;

@end

