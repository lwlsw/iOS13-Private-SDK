//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class PKPassGroupView;

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem>
{
    PKPassGroupView *_groupView;
}

@property(readonly, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
// - (void).cxx_destruct;
- (id)initWithGroupView:(id)arg1;

@end

