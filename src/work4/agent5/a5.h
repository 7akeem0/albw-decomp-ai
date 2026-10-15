#ifndef A5_H
#define A5_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;

// 12-byte state slot (Cls+0x694, 3 entries); see GPT state_slot.h
struct StateSlot {
    void* owner;   // +0
    s8 mode;       // +4
    s8 current;    // +5
    s8 pending;    // +6
    u8 unk7;
    u8 gate8;
    u8 gate9;
    u8 unkA[2];
};

#endif
