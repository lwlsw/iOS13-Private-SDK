//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessExpress/DAOofParams.h>

@class NSString;
@protocol DAOofResponseDelegate;

@interface DAOofSettingsInfo : DAOofParams
{
    NSString *_requestID;
    id <DAOofResponseDelegate> _consumer;
}

@property(nonatomic) __weak id <DAOofResponseDelegate> consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
// - (void).cxx_destruct;

@end

