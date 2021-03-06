//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKConversationListStandardCell.h>

#import <ChatKit/CKConversationSearchCellProtocol-Protocol.h>

@interface CKConversationListSearchCell : CKConversationListStandardCell <CKConversationSearchCellProtocol>
{
    UIEdgeInsets _marginInsets;
}

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;
@property(nonatomic) UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (double)leadingLayoutMargin;
- (void)prepareForReuse;
- (id)fromLabel;
- (void)layoutSubviews;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;

@end

