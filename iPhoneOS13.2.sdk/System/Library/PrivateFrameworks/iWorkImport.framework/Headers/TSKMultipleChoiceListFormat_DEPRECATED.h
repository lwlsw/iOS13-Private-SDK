//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>


@protocol TSUMultipleChoiceListChoiceProviding;

__attribute__((visibility("hidden")))
@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>
{
    int _initialValue;
    unsigned int _multipleChoiceListFormatID;
    id <TSUMultipleChoiceListChoiceProviding> _popupModel;
}

@property(readonly, nonatomic) id <TSUMultipleChoiceListChoiceProviding> popupModel; // @synthesize popupModel=_popupModel;
@property(readonly, nonatomic) unsigned int multipleChoiceListFormatID; // @synthesize multipleChoiceListFormatID=_multipleChoiceListFormatID;
@property(readonly, nonatomic) int initialValue; // @synthesize initialValue=_initialValue;
// - (void).cxx_destruct;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (id)asMultipleChoiceListFormat;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithInitialValue:(int)arg1 multipleChoiceListFormatID:(unsigned int)arg2 popupModel:(id)arg3;

@end

