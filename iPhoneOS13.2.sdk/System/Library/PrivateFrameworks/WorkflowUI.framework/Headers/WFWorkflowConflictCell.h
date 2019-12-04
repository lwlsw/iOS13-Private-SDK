//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface WFWorkflowConflictCell : UITableViewCell
{
    UIImageView *_iconImageView;
}

+ (id)checkedImage;
+ (id)uncheckedImage;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateImages;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setConflictedWorkflow:(id)arg1 fromDevice:(id)arg2 isRemote:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
