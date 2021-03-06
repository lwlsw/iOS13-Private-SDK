//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <DataAccessUI/DADiagnosticSaveNotesDelegate-Protocol.h>

@class UIAlertView;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate>
{
    UIAlertView *_simpleAlert;
    UIAlertView *_savingDataAlert;
    SEL _simpleConfirmSheetDismissedSEL;
}

+ (id)dumpRuntimeStateSpecifiers;
+ (id)linkSpecifier;
+ (BOOL)diagnosticsVisible;
// - (void).cxx_destruct;
- (void)purgeFileAtPath:(id)arg1;
- (id)pathsOfPurgableFiles;
- (id)pathsOfAllLogFiles;
- (void)handleClearAllLogsForSpecifier:(id)arg1;
- (void)suspend;
- (void)handleSaveAllLogsForSpecifier:(id)arg1;
- (void)_dismissSavingDataAlert;
- (void)handleSaveAllLogsStep2;
- (void)_presentNotesController;
- (void)saveNotesInBackground:(id)arg1;
- (void)saveLogsWithNotes:(id)arg1;
- (BOOL)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id )arg4;
- (id)savedLogsDirectoryNameForSpecifier:(id)arg1;
- (void)handleDumpRuntimeStateForSpecifier:(id)arg1;
- (BOOL)isLoggingEnabledForSpecifier:(id)arg1;
- (void)setLoggingEnabled:(BOOL)arg1 forSpecifier:(id)arg2;
- (id)booleanPropertyWithSpecifier:(id)arg1;
- (void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)specifiers;
- (id)diagnosticSpecifiers;

@end

