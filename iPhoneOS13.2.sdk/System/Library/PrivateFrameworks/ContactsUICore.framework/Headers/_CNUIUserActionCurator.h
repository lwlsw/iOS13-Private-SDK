//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionCurator-Protocol.h>

@class CNContactStore, NSString;
@protocol CNLSApplicationWorkspace;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator>
{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
}

@property(retain, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)curateUserAction:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
