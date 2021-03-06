//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, NSString;
@protocol IKAppBrowser;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature>
{
    double _cornerRadius;
    double _interitemSpacing;
    IKAppContext *_appContext;
    NSString *_featureName;
    id <IKAppBrowser> _appBrowser;
    UIEdgeInsets _maskInset;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak id <IKAppBrowser> appBrowser; // @synthesize appBrowser=_appBrowser;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) UIEdgeInsets maskInset; // @synthesize maskInset=_maskInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
// - (void).cxx_destruct;
- (void)present;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end

