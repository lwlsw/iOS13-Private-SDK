//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, PKNFCTagReaderSession;

@protocol PKNFCTagReaderSessionDelegate 

@optional
- (void)nfcTagReaderSessionDidEndUnexpectedly:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSession:(PKNFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end
