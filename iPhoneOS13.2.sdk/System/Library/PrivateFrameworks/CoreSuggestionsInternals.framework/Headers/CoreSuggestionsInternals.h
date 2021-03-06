#import <CoreSuggestionsInternals/APSConnectionDelegate-Protocol.h>
#import <CoreSuggestionsInternals/CDStructures.h>
#import <CoreSuggestionsInternals/CLLocation-schema.h>
#import <CoreSuggestionsInternals/CLPlacemark-schema.h>
#import <CoreSuggestionsInternals/CNContact-AttributePresence.h>
#import <CoreSuggestionsInternals/CNPostalAddress-schema.h>
#import <CoreSuggestionsInternals/CSSearchableIndexDelegate-Protocol.h>
#import <CoreSuggestionsInternals/EKEvent-Suggestions.h>
#import <CoreSuggestionsInternals/EKEventStore-Suggestions.h>
#import <CoreSuggestionsInternals/FIAPPlugin-Protocol.h>
#import <CoreSuggestionsInternals/ICSDate-SGCalendarAttachmentDissector.h>
#import <CoreSuggestionsInternals/ICSEvent-SGCalendarAttachmentDissectorUtility.h>
#import <CoreSuggestionsInternals/INDateComponentsRange-schema.h>
#import <CoreSuggestionsInternals/INFlightReservation-schema.h>
#import <CoreSuggestionsInternals/INGetReservationDetailsIntentResponse-schema.h>
#import <CoreSuggestionsInternals/INInteraction-schema.h>
#import <CoreSuggestionsInternals/INLodgingReservation-schema.h>
#import <CoreSuggestionsInternals/INRentalCarReservation-schema.h>
#import <CoreSuggestionsInternals/INReservation-schema.h>
#import <CoreSuggestionsInternals/INRestaurantReservation-schema.h>
#import <CoreSuggestionsInternals/INSeat-schema.h>
#import <CoreSuggestionsInternals/INTicketedEventReservation-schema.h>
#import <CoreSuggestionsInternals/INTrainReservation-schema.h>
#import <CoreSuggestionsInternals/JSExport-Protocol.h>
#import <CoreSuggestionsInternals/LSApplicationProxy-Suggestions.h>
#import <CoreSuggestionsInternals/MFMailMessage-SGUtility.h>
#import <CoreSuggestionsInternals/MFMessageHeaders-SuggestionsExtensions.h>
#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>
#import <CoreSuggestionsInternals/NSDateComponents-schema.h>
#import <CoreSuggestionsInternals/NSFileHandle-Compression.h>
#import <CoreSuggestionsInternals/NSMapTable-SGHeadersMapTable.h>
#import <CoreSuggestionsInternals/NSString-SGEntityMatchingTransformer.h>
#import <CoreSuggestionsInternals/NSTimeZone-SGCalendarAttachmentDissector.h>
#import <CoreSuggestionsInternals/NSUserActivity-Suggestions.h>
#import <CoreSuggestionsInternals/NSXPCConnection-SGDXPCConnectionUtilities.h>
#import <CoreSuggestionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>
#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>
#import <CoreSuggestionsInternals/PPPortraitStringDonationProtocol-Protocol.h>
#import <CoreSuggestionsInternals/PREQuickTypeProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGAccountsAdapter.h>
#import <CoreSuggestionsInternals/SGAddressCoalescingState.h>
#import <CoreSuggestionsInternals/SGAggregateLogging.h>
#import <CoreSuggestionsInternals/SGAhoCorasick.h>
#import <CoreSuggestionsInternals/SGAppIconState.h>
#import <CoreSuggestionsInternals/SGAppLaunchHistory.h>
#import <CoreSuggestionsInternals/SGAsset.h>
#import <CoreSuggestionsInternals/SGBigUTF8String.h>
#import <CoreSuggestionsInternals/SGBloomFilter.h>
#import <CoreSuggestionsInternals/SGBloomFilterChunk-Protocol.h>
#import <CoreSuggestionsInternals/SGBloomFilterChunkInMemory.h>
#import <CoreSuggestionsInternals/SGBloomFilterChunkInMemorySparse.h>
#import <CoreSuggestionsInternals/SGBloomFilterChunkMmap.h>
#import <CoreSuggestionsInternals/SGBundleIdBlacklist.h>
#import <CoreSuggestionsInternals/SGCalendarAttachmentDissector.h>
#import <CoreSuggestionsInternals/SGChatLengthEstimator.h>
#import <CoreSuggestionsInternals/SGCoalescingDropBox.h>
#import <CoreSuggestionsInternals/SGContactAggregator.h>
#import <CoreSuggestionsInternals/SGContactDetail.h>
#import <CoreSuggestionsInternals/SGContactDetailKey.h>
#import <CoreSuggestionsInternals/SGContactDetailSummary.h>
#import <CoreSuggestionsInternals/SGContactDetailSupervision.h>
#import <CoreSuggestionsInternals/SGContactDetailsHolder.h>
#import <CoreSuggestionsInternals/SGContactEntity.h>
#import <CoreSuggestionsInternals/SGContactPipelineHelper.h>
#import <CoreSuggestionsInternals/SGContactSharingML.h>
#import <CoreSuggestionsInternals/SGContactSharingModelHelper.h>
#import <CoreSuggestionsInternals/SGContactSharingTransformer.h>
#import <CoreSuggestionsInternals/SGContactStoreFactory.h>
#import <CoreSuggestionsInternals/SGContactsInterface.h>
#import <CoreSuggestionsInternals/SGContentAdmission.h>
#import <CoreSuggestionsInternals/SGContentAdmissionKVOObserver.h>
#import <CoreSuggestionsInternals/SGConversationFlatteningTransformer.h>
#import <CoreSuggestionsInternals/SGConversationHistory.h>
#import <CoreSuggestionsInternals/SGCuratedChangeNotifications.h>
#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsAddressBookListener.h>
#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>
#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsCalendarListener.h>
#import <CoreSuggestionsInternals/SGCuratedContactKey.h>
#import <CoreSuggestionsInternals/SGCuratedContactMatcher.h>
#import <CoreSuggestionsInternals/SGCuratedEventKey.h>
#import <CoreSuggestionsInternals/SGDCKEvent.h>
#import <CoreSuggestionsInternals/SGDCKInteractionInfo.h>
#import <CoreSuggestionsInternals/SGDCKLocation.h>
#import <CoreSuggestionsInternals/SGDCKTimeRange.h>
#import <CoreSuggestionsInternals/SGDCloudKitSync.h>
#import <CoreSuggestionsInternals/SGDCloudKitSyncObserver.h>
#import <CoreSuggestionsInternals/SGDHarvestQueue.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueCombo.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueFileReader.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueFileRegistry.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueFileWriter.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueInMemory.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueItemInMemory.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueItemLegacy.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueItemOnDisk.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueLegacy.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueNop.h>
#import <CoreSuggestionsInternals/SGDHarvestQueueOnDisk.h>
#import <CoreSuggestionsInternals/SGDManagerForCTS.h>
#import <CoreSuggestionsInternals/SGDNotificationBroadcaster.h>
#import <CoreSuggestionsInternals/SGDPWordRecorder.h>
#import <CoreSuggestionsInternals/SGDPluginManager.h>
#import <CoreSuggestionsInternals/SGDPowerBudget.h>
#import <CoreSuggestionsInternals/SGDPowerBudgetThrottlingState.h>
#import <CoreSuggestionsInternals/SGDPowerLog.h>
#import <CoreSuggestionsInternals/SGDSpotlightCommander.h>
#import <CoreSuggestionsInternals/SGDSpotlightReceiver.h>
#import <CoreSuggestionsInternals/SGDSqlHarvestQueueStore.h>
#import <CoreSuggestionsInternals/SGDSuggestManager.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerAllProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerContactsProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerEventsProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerFidesProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerInternalProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerIpsosProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerMailProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerMessagesProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerRemindersProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDSuggestManagerURLsProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGDWorkQueue.h>
#import <CoreSuggestionsInternals/SGDWorkQueueFile.h>
#import <CoreSuggestionsInternals/SGDWorkQueueItem.h>
#import <CoreSuggestionsInternals/SGDWorkQueueName.h>
#import <CoreSuggestionsInternals/SGDataDetectorDissector.h>
#import <CoreSuggestionsInternals/SGDataDetectorMatch.h>
#import <CoreSuggestionsInternals/SGDataNormalization.h>
#import <CoreSuggestionsInternals/SGDatabaseJournal.h>
#import <CoreSuggestionsInternals/SGDatabaseJournalFile.h>
#import <CoreSuggestionsInternals/SGDatabaseMigratorEntities.h>
#import <CoreSuggestionsInternals/SGDatabaseMigratorSnippets.h>
#import <CoreSuggestionsInternals/SGDeduper.h>
#import <CoreSuggestionsInternals/SGDetectedAttributeDissector.h>
#import <CoreSuggestionsInternals/SGDetectedAttributeML.h>
#import <CoreSuggestionsInternals/SGDetectedAttributeMetrics.h>
#import <CoreSuggestionsInternals/SGDetection.h>
#import <CoreSuggestionsInternals/SGDonatedContactDissector.h>
#import <CoreSuggestionsInternals/SGDuplicateKey.h>
#import <CoreSuggestionsInternals/SGEKCalendarAdapter.h>
#import <CoreSuggestionsInternals/SGEmailKey.h>
#import <CoreSuggestionsInternals/SGEntity.h>
#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>
#import <CoreSuggestionsInternals/SGEntityMappingTransformer.h>
#import <CoreSuggestionsInternals/SGEntityMatchingTransformer.h>
#import <CoreSuggestionsInternals/SGEventForGeocode-Protocol.h>
#import <CoreSuggestionsInternals/SGEventLocationForGeocode-Protocol.h>
#import <CoreSuggestionsInternals/SGExternalEnrichment-Protocol.h>
#import <CoreSuggestionsInternals/SGExtractionDissector.h>
#import <CoreSuggestionsInternals/SGFirstPersonAddressSharingModel.h>
#import <CoreSuggestionsInternals/SGFirstPersonEmailSharingModel.h>
#import <CoreSuggestionsInternals/SGFirstPersonPhoneSharingModel.h>
#import <CoreSuggestionsInternals/SGFlight.h>
#import <CoreSuggestionsInternals/SGFlightData.h>
#import <CoreSuggestionsInternals/SGHKHealthStore.h>
#import <CoreSuggestionsInternals/SGHeaderCollection-Protocol.h>
#import <CoreSuggestionsInternals/SGHistoryObserver.h>
#import <CoreSuggestionsInternals/SGHistorySharedData.h>
#import <CoreSuggestionsInternals/SGHtmlEntities.h>
#import <CoreSuggestionsInternals/SGHtmlParserDissector.h>
#import <CoreSuggestionsInternals/SGHtmlParserDissectorTask.h>
#import <CoreSuggestionsInternals/SGIconLocation.h>
#import <CoreSuggestionsInternals/SGIdentityEdge.h>
#import <CoreSuggestionsInternals/SGIdentityKey.h>
#import <CoreSuggestionsInternals/SGIdentityName.h>
#import <CoreSuggestionsInternals/SGInMemoryAdapter.h>
#import <CoreSuggestionsInternals/SGInhumanDissector.h>
#import <CoreSuggestionsInternals/SGInhumans.h>
#import <CoreSuggestionsInternals/SGInteractionKey.h>
#import <CoreSuggestionsInternals/SGJSBurstTrie.h>
#import <CoreSuggestionsInternals/SGJSBurstTrieExports-Protocol.h>
#import <CoreSuggestionsInternals/SGJournal.h>
#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGJournalEntry.h>
#import <CoreSuggestionsInternals/SGJournalRemindersObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGKeyValueCacheManager.h>
#import <CoreSuggestionsInternals/SGLabeledValue.h>
#import <CoreSuggestionsInternals/SGLevenshtein.h>
#import <CoreSuggestionsInternals/SGLexicon.h>
#import <CoreSuggestionsInternals/SGLongRunningTask.h>
#import <CoreSuggestionsInternals/SGLongRunningTaskManager.h>
#import <CoreSuggestionsInternals/SGM2AutocompleteUserSelectedContact.h>
#import <CoreSuggestionsInternals/SGM2BirthdayExtractionWithSupervision.h>
#import <CoreSuggestionsInternals/SGM2BundleIdsTrackedAsOther.h>
#import <CoreSuggestionsInternals/SGM2ContactCreated.h>
#import <CoreSuggestionsInternals/SGM2ContactDetailExtraction.h>
#import <CoreSuggestionsInternals/SGM2ContactDetailSent.h>
#import <CoreSuggestionsInternals/SGM2ContactsInterfaceCacheCount.h>
#import <CoreSuggestionsInternals/SGM2ContactsInterfaceCacheHit.h>
#import <CoreSuggestionsInternals/SGM2FoundInMailModelScore.h>
#import <CoreSuggestionsInternals/SGM2MailClientInMailApp.h>
#import <CoreSuggestionsInternals/SGM2PerfXPCLatency.h>
#import <CoreSuggestionsInternals/SGM2SearchResultsIncludedPureSuggestion.h>
#import <CoreSuggestionsInternals/SGM2SearchResultsUserSelectedContact.h>
#import <CoreSuggestionsInternals/SGM2SelfIdModelScore.h>
#import <CoreSuggestionsInternals/SGM2SerializedContactsCacheHit.h>
#import <CoreSuggestionsInternals/SGM2SqliteErrors.h>
#import <CoreSuggestionsInternals/SGM2SuggestdExitReason.h>
#import <CoreSuggestionsInternals/SGM2SuggestedContactDetailShown.h>
#import <CoreSuggestionsInternals/SGM2SuggestedContactDetailUsed.h>
#import <CoreSuggestionsInternals/SGM2UnknownContactInformationShown.h>
#import <CoreSuggestionsInternals/SGMailAttachment.h>
#import <CoreSuggestionsInternals/SGMailPatterns.h>
#import <CoreSuggestionsInternals/SGMailQuoteDissector.h>
#import <CoreSuggestionsInternals/SGMailUtils.h>
#import <CoreSuggestionsInternals/SGMeCardDissector.h>
#import <CoreSuggestionsInternals/SGMeContact.h>
#import <CoreSuggestionsInternals/SGMessage.h>
#import <CoreSuggestionsInternals/SGMessageKey.h>
#import <CoreSuggestionsInternals/SGMetricsDissector.h>
#import <CoreSuggestionsInternals/SGMetricsHelper.h>
#import <CoreSuggestionsInternals/SGMicrodataDocument.h>
#import <CoreSuggestionsInternals/SGMicrodataItem.h>
#import <CoreSuggestionsInternals/SGMicrodataItemProp.h>
#import <CoreSuggestionsInternals/SGMicrodataItemScope.h>
#import <CoreSuggestionsInternals/SGMicrodataParser.h>
#import <CoreSuggestionsInternals/SGMicrodataParserStackItem.h>
#import <CoreSuggestionsInternals/SGModel.h>
#import <CoreSuggestionsInternals/SGModelMappingHelper.h>
#import <CoreSuggestionsInternals/SGModelRules.h>
#import <CoreSuggestionsInternals/SGMonochrome.h>
#import <CoreSuggestionsInternals/SGNLPDetection.h>
#import <CoreSuggestionsInternals/SGNameInversionPredictor.h>
#import <CoreSuggestionsInternals/SGNameMappingTransformer.h>
#import <CoreSuggestionsInternals/SGNamedEntityDissector.h>
#import <CoreSuggestionsInternals/SGNamedEntityDissectorGuardedData.h>
#import <CoreSuggestionsInternals/SGNamedEntityExtractionPlugin.h>
#import <CoreSuggestionsInternals/SGNamedEntityStringDonationHandler.h>
#import <CoreSuggestionsInternals/SGNames.h>
#import <CoreSuggestionsInternals/SGNaturalLanguageDissector.h>
#import <CoreSuggestionsInternals/SGNicknames.h>
#import <CoreSuggestionsInternals/SGNoCloudNSUbiquitousKeyValueStore.h>
#import <CoreSuggestionsInternals/SGOffsetDictionary.h>
#import <CoreSuggestionsInternals/SGOrigin-Internal.h>
#import <CoreSuggestionsInternals/SGOutput.h>
#import <CoreSuggestionsInternals/SGPOSTaggerDissector.h>
#import <CoreSuggestionsInternals/SGParsedPersonFromInteraction.h>
#import <CoreSuggestionsInternals/SGPaths.h>
#import <CoreSuggestionsInternals/SGPatternDataFile.h>
#import <CoreSuggestionsInternals/SGPatternGlobalData.h>
#import <CoreSuggestionsInternals/SGPatterns.h>
#import <CoreSuggestionsInternals/SGPipeline.h>
#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <CoreSuggestionsInternals/SGPipelineEntity.h>
#import <CoreSuggestionsInternals/SGPlainTextContentCursor.h>
#import <CoreSuggestionsInternals/SGPortraitExtractionContainer.h>
#import <CoreSuggestionsInternals/SGPortraitRequestClient.h>
#import <CoreSuggestionsInternals/SGPortraitRequestHandler.h>
#import <CoreSuggestionsInternals/SGPortraitRequestProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGPortraitRequestServerDelegate.h>
#import <CoreSuggestionsInternals/SGPortraitRequestServerHandlerCache.h>
#import <CoreSuggestionsInternals/SGPortraitUtils.h>
#import <CoreSuggestionsInternals/SGPseudoContactKey.h>
#import <CoreSuggestionsInternals/SGPseudoEventKey.h>
#import <CoreSuggestionsInternals/SGPseudoReminderKey.h>
#import <CoreSuggestionsInternals/SGQuickResponsesML.h>
#import <CoreSuggestionsInternals/SGQuickTypeServerDelegate.h>
#import <CoreSuggestionsInternals/SGQuickTypeServerRequestHandler.h>
#import <CoreSuggestionsInternals/SGRTCLogging.h>
#import <CoreSuggestionsInternals/SGRawKey.h>
#import <CoreSuggestionsInternals/SGRe2.h>
#import <CoreSuggestionsInternals/SGRe2Basic.h>
#import <CoreSuggestionsInternals/SGRe2Lazy.h>
#import <CoreSuggestionsInternals/SGRe2PrefilterTree.h>
#import <CoreSuggestionsInternals/SGRe2Subregexps.h>
#import <CoreSuggestionsInternals/SGRealtimeEventResponse.h>
#import <CoreSuggestionsInternals/SGRealtimeSuggestionsTuple.h>
#import <CoreSuggestionsInternals/SGRecordId-Internal.h>
#import <CoreSuggestionsInternals/SGReminderDissector.h>
#import <CoreSuggestionsInternals/SGReminderDueLocation.h>
#import <CoreSuggestionsInternals/SGReminderExtractionModel.h>
#import <CoreSuggestionsInternals/SGReminderMessage.h>
#import <CoreSuggestionsInternals/SGReminderModelCoreMLInputWrapper.h>
#import <CoreSuggestionsInternals/SGReminderModelCoreMLOutputWrapper.h>
#import <CoreSuggestionsInternals/SGRemindersAdapter.h>
#import <CoreSuggestionsInternals/SGReplyParserDissector.h>
#import <CoreSuggestionsInternals/SGRequestContext.h>
#import <CoreSuggestionsInternals/SGReverseTemplateJS-Protocol.h>
#import <CoreSuggestionsInternals/SGReverseTemplateJS.h>
#import <CoreSuggestionsInternals/SGReverseTemplatesJSDataDetectors.h>
#import <CoreSuggestionsInternals/SGSGtoCNContactsCacheUpdateAdapter.h>
#import <CoreSuggestionsInternals/SGSchemaConversionProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGSchemaKeys.h>
#import <CoreSuggestionsInternals/SGSchemaOrgKey.h>
#import <CoreSuggestionsInternals/SGSearchableItemIdTriple.h>
#import <CoreSuggestionsInternals/SGSeekable-Protocol.h>
#import <CoreSuggestionsInternals/SGSeekableData.h>
#import <CoreSuggestionsInternals/SGSelfIDSupervision.h>
#import <CoreSuggestionsInternals/SGSelfIdentification.h>
#import <CoreSuggestionsInternals/SGSelfIdentificationDetection.h>
#import <CoreSuggestionsInternals/SGSelfIdentificationModel.h>
#import <CoreSuggestionsInternals/SGServiceContext.h>
#import <CoreSuggestionsInternals/SGSignatureDissector.h>
#import <CoreSuggestionsInternals/SGSignificantAddressModel.h>
#import <CoreSuggestionsInternals/SGSignificantAddressModelForIMessage.h>
#import <CoreSuggestionsInternals/SGSignificantEmailAddressModel.h>
#import <CoreSuggestionsInternals/SGSignificantEmailAddressModelForIMessage.h>
#import <CoreSuggestionsInternals/SGSignificantPhonenumberModel.h>
#import <CoreSuggestionsInternals/SGSimpleMailHeaderKeyValue.h>
#import <CoreSuggestionsInternals/SGSimpleMailMessage.h>
#import <CoreSuggestionsInternals/SGSlice.h>
#import <CoreSuggestionsInternals/SGSpotlightContactsAdapter.h>
#import <CoreSuggestionsInternals/SGSpotlightIdentifiers-Protocol.h>
#import <CoreSuggestionsInternals/SGSqlEntityStore.h>
#import <CoreSuggestionsInternals/SGSqliteDatabase.h>
#import <CoreSuggestionsInternals/SGSqliteDatabaseImpl.h>
#import <CoreSuggestionsInternals/SGSqliteExitOnDeviceLockErrorHandler.h>
#import <CoreSuggestionsInternals/SGStorageContact.h>
#import <CoreSuggestionsInternals/SGStorageEvent.h>
#import <CoreSuggestionsInternals/SGStorageLocation.h>
#import <CoreSuggestionsInternals/SGStorageReminder.h>
#import <CoreSuggestionsInternals/SGStringMappingTransformer.h>
#import <CoreSuggestionsInternals/SGSuggestHistory.h>
#import <CoreSuggestionsInternals/SGSuggestHistoryObserver-Protocol.h>
#import <CoreSuggestionsInternals/SGSymbolicMappingTransformer.h>
#import <CoreSuggestionsInternals/SGTaggedMallocCompressionBuffer.h>
#import <CoreSuggestionsInternals/SGTaggedMallocEmailHtml.h>
#import <CoreSuggestionsInternals/SGTaggedMallocLevenshteinDistanceBuffer.h>
#import <CoreSuggestionsInternals/SGTaggedMallocWorkQueueItemPart.h>
#import <CoreSuggestionsInternals/SGTextMessage.h>
#import <CoreSuggestionsInternals/SGTextMessageBirthdayCongratsModel.h>
#import <CoreSuggestionsInternals/SGTextMessageConversationTracker.h>
#import <CoreSuggestionsInternals/SGTextMessageItem.h>
#import <CoreSuggestionsInternals/SGTextMessageKey.h>
#import <CoreSuggestionsInternals/SGThirdPersonAddressSharingModel.h>
#import <CoreSuggestionsInternals/SGThirdPersonEmailSharingModel.h>
#import <CoreSuggestionsInternals/SGThirdPersonPhoneSharingModel.h>
#import <CoreSuggestionsInternals/SGThreadParser.h>
#import <CoreSuggestionsInternals/SGTokenDistanceMappingTransformer.h>
#import <CoreSuggestionsInternals/SGTokenString.h>
#import <CoreSuggestionsInternals/SGTokenizer.h>
#import <CoreSuggestionsInternals/SGTokenizerMappingTransformer.h>
#import <CoreSuggestionsInternals/SGTopicDissector.h>
#import <CoreSuggestionsInternals/SGTopicExtractionPlugin.h>
#import <CoreSuggestionsInternals/SGTransformerInstance.h>
#import <CoreSuggestionsInternals/SGURLContainer.h>
#import <CoreSuggestionsInternals/SGURLDissector.h>
#import <CoreSuggestionsInternals/SGURLPlugin.h>
#import <CoreSuggestionsInternals/SGUnrecognizedContactKey.h>
#import <CoreSuggestionsInternals/SGWebPageKey.h>
#import <CoreSuggestionsInternals/SGWords.h>
#import <CoreSuggestionsInternals/SGXPCActivityManager.h>
#import <CoreSuggestionsInternals/SGXPCActivityManagerProtocol-Protocol.h>
#import <CoreSuggestionsInternals/SGXPCServer.h>
#import <CoreSuggestionsInternals/SGXpcTransaction.h>
#import <CoreSuggestionsInternals/SpotlightReceiver-Protocol.h>
#import <CoreSuggestionsInternals/_SGDCloudKitSyncPersistedState.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerInternalHarvestProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerMetricsProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGSuggestManagerFoundInAppsProtocol-Protocol.h>
