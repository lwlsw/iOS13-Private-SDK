//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition
{
    long long _characterIndex;
    double _relativeTextOffset;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double relativeTextOffset; // @synthesize relativeTextOffset=_relativeTextOffset;
@property(nonatomic) long long characterIndex; // @synthesize characterIndex=_characterIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

