//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADOrientedBounds, OADTextBody;

__attribute__((visibility("hidden")))
@interface PMShapeTextMapper : CMMapper
{
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}

// - (void).cxx_destruct;
- (unsigned char)textAnchor;
- (BOOL)isTableCellContent;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setRectangular:(BOOL)arg1;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;

@end

