//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LogCategory {
    int _field1;
    int _field2;
    char _field3;
    unsigned int _field4;
    char _field5;
    char _field6;
    int _field7;
    struct LogCategory _field8;
    struct LogOutput _field9;
    struct LogOutput _field10;
    NSUInteger _field11;
    NSUInteger _field12;
    unsigned int _field13;
    unsigned int _field14;
    char _field15;
    struct LogCategoryPrivate _field16;
};

struct LogCategoryPrivate;

struct LogOutput;

struct PairingSubstate {
    int contacts;
    int homeKit;
    int visual;
    int pairVerify;
    int pin;
};

struct __SecKey {
    struct __CFRuntimeBase {
        NSUInteger _field1;
        _Atomic NSUInteger _field2;
    } _field1;
    struct __SecKeyDescriptor _field2;
    void _field3;
};

struct __sbuf {
    char _field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
} CDStruct_56cc8428;

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

