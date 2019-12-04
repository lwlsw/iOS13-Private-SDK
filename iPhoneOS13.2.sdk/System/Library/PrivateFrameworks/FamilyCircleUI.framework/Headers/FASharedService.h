//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FASharedService : NSObject
{
    _Bool _isSeparator;
    _Bool _isDefault;
    NSString *_name;
    NSNumber *_order;
    NSString *_displayLabel;
    NSString *_subLabel;
    NSString *_detailLabel;
    NSString *_iconURLString;
    NSString *_iconURLStringx2;
    NSString *_iconURLStringx3;
    NSString *_actionURLString;
}

@property(readonly, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property(readonly, nonatomic) NSString *iconURLStringx3; // @synthesize iconURLStringx3=_iconURLStringx3;
@property(readonly, nonatomic) NSString *iconURLStringx2; // @synthesize iconURLStringx2=_iconURLStringx2;
@property(readonly, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, nonatomic) NSString *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) NSString *subLabel; // @synthesize subLabel=_subLabel;
@property(readonly, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(readonly, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, nonatomic) _Bool isSeparator; // @synthesize isSeparator=_isSeparator;
- (_Bool)isEqualToSharedService:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
