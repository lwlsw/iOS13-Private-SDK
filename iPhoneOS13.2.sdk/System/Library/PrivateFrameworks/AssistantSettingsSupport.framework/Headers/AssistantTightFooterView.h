//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AssistantSettingsSupport/PSHeaderFooterView-Protocol.h>

@class NSString, UILabel;

@interface AssistantTightFooterView : UIView <PSHeaderFooterView>
{
    UILabel *_textLabel;
    NSString *_text;
}

// - (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) NSString *text;
- (void)layoutSubviews;
- (UIEdgeInsets)textInsets;
- (void)_formatText;
- (id)initWithSpecifier:(id)arg1;

@end

