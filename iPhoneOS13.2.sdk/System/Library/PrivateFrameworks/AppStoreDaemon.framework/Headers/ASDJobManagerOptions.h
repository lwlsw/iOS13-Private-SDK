//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _shouldFilterExternalOriginatedDownloads;
    BOOL _shouldReportDownloadProgress;
    NSString *_persistenceIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldReportDownloadProgress; // @synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress;
@property(nonatomic) BOOL shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

