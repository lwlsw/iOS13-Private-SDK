//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement
{
    BOOL _paged;
}

@property(readonly, nonatomic, getter=isPaged) BOOL paged; // @synthesize paged=_paged;
@property(readonly, nonatomic) NSUInteger rowCount;
@property(readonly, nonatomic) NSString *rowHeight;
@property(readonly, nonatomic) NSUInteger columnCount;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

