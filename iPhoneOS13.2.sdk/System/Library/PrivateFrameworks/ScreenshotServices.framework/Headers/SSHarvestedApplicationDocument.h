//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable>
{
    NSData *_PDFData;
    long long _PDFPage;
    CGRect _PDFVisibleRect;
}

@property(nonatomic) CGRect PDFVisibleRect; // @synthesize PDFVisibleRect=_PDFVisibleRect;
@property(nonatomic) long long PDFPage; // @synthesize PDFPage=_PDFPage;
@property(copy, nonatomic) NSData *PDFData; // @synthesize PDFData=_PDFData;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggableDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

