//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIFont;

@interface TLKImageAttachment : NSTextAttachment
{
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
// - (void).cxx_destruct;
- (CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(NSUInteger)arg4;

@end

