//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPTopicRecord.h>

@class NSString, PPSource, PPTopic, PPTopicMetadata;

@interface PPMutableTopicRecord : PPTopicRecord
{
}

@property(nonatomic) double sentimentScore; // @dynamic sentimentScore;
@property(retain, nonatomic) PPTopicMetadata *metadata; // @dynamic metadata;
@property(nonatomic) NSUInteger extractionAssetVersion; // @dynamic extractionAssetVersion;
@property(retain, nonatomic) NSString *extractionOsBuild; // @dynamic extractionOsBuild;
@property(nonatomic) BOOL isLocal; // @dynamic isLocal;
@property(nonatomic) double decayRate; // @dynamic decayRate;
@property(nonatomic) double initialScore; // @dynamic initialScore;
@property(nonatomic) NSUInteger algorithm; // @dynamic algorithm;
@property(retain, nonatomic) PPSource *source; // @dynamic source;
@property(retain, nonatomic) PPTopic *topic; // @dynamic topic;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

