//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString;

@protocol NCAuxiliaryOptionsProviding 
- (void)configureOptionButtons:(NSArray *)arg1;

@optional
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@property(readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property(readonly, copy, nonatomic) NSString *optionsSummaryText;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@end
