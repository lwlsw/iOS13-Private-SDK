//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

@class DOMNamedNodeMap, NSString;

@interface DOMDocumentType : DOMNode
{
}

- (void)remove;
@property(readonly, copy) NSString *internalSubset;
@property(readonly, copy) NSString *systemId;
@property(readonly, copy) NSString *publicId;
@property(readonly) DOMNamedNodeMap *notations;
@property(readonly) DOMNamedNodeMap *entities;
@property(readonly, copy) NSString *name;

@end

