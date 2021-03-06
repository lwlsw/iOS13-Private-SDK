//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPCitationRecord : TSPObject
{
    NSString *_endNoteXML;
    BOOL _hideAuthorNames;
    BOOL _hideYear;
    NSString *_pageRange;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_authorsString;
    NSString *_title;
    NSString *_year;
    NSString *_type;
    BOOL _shouldRemove;
    BOOL _recordXMLApplied;
}

@property(nonatomic) BOOL recordXMLApplied; // @synthesize recordXMLApplied=_recordXMLApplied;
@property(nonatomic) BOOL shouldRemove; // @synthesize shouldRemove=_shouldRemove;
// - (void).cxx_destruct;
- (id)p_endNoteXMLForComparison;
- (void)p_copyPropertiesToObject:(id)arg1;
- (id)description;
- (id)authorYearString;
- (BOOL)isRecordEqual:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (id)copyWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *year;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *authorsString;
@property(copy, nonatomic) NSString *suffix;
@property(copy, nonatomic) NSString *prefix;
@property(copy, nonatomic) NSString *pageRange;
@property(nonatomic) BOOL hideYear;
@property(nonatomic) BOOL hideAuthorNames;
@property(copy, nonatomic) NSString *endNoteXML;

@end

