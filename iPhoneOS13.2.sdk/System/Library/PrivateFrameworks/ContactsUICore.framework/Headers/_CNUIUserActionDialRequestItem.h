//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem
{
    id <CNTUDialRequest> _dialRequest;
}

@property(readonly, nonatomic) id <CNTUDialRequest> dialRequest; // @synthesize dialRequest=_dialRequest;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(NSUInteger)arg6;

@end

