//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface STSummationView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2;

@end
