#ifndef GPT21_RANGE_H
#define GPT21_RANGE_H
// Recovered partial types for ladder list 7; descriptive names only.
#include "albw_types.h"
struct Vec3 { f32 x,y,z; };
struct VecCopy {
    f32 x,y,z;
    VecCopy& operator=(const VecCopy& o) { x=o.x; y=o.y; z=o.z; return *this; }
};
struct Object580 {
    u32 m0;
    VecCopy m4;
    u32 m10;
    VecCopy m14;
    u32 m20;
    VecCopy m24;
    u32 m30;
    VecCopy m34;
};
struct Object569 {
    char pad0[0xa4];
    void* mA4;
    char padA8[0xcd-0xa8];
    u8 mCD;
    char padCE[0xf8-0xce];
    void* mF8;
};
struct Entry53 { u8 a,b; u16 pad2; u32 flags; char pad8[8]; };
extern Entry53 data_007111A8[];
struct Actor53Indices { char pad[0x40]; s16 index40, index42; };
struct Entry54D16 { u32 words[4]; };
struct Entry54D28 { u32 words[7]; };
struct Entry54D56 { u32 words[14]; };
struct Tables54D { char pad[0x20]; Entry54D16 entries[4]; Entry54D28 records[4]; Entry54D56 larger[4]; };
extern Entry54D16 bss_0072AA58;
struct Resource54D { char pad[0x18]; Tables54D tables; };
struct Owner54D { u32 m0,m4; char pad8[0x2d0-8]; Resource54D* resource; };
struct Actor53Proxy14 { char pad[0x14]; Actor53Indices* actor; };
// StateSlot layout confirmed in KB66 and cls_1DE.h: owner0,mode4,current5.
struct StateSlot21 { void* owner; s8 mode,current,pending; u8 gate7,gate8,gate9; u8 padA[2]; };
struct PlayerSlots21 { char pad[0x694]; StateSlot21 slots[3]; };
struct PlayerProxy21 { char pad[0x10]; PlayerSlots21* player; };
// 588xxx wrappers share child +24 and child node +140.
struct Child588 {char pad[0x140];void* node;};
struct Owner588 {char pad[0x24];Child588* child;void* value;};
// Request callback5605CC: two-word input and bounded target table.
struct Request560Pair {u32 index,value;};
struct Request560 {char pad[0xc];Request560Pair data;};
struct Target560 {char pad[0x98];u32 value;};
struct Targets560 {char pad[0x18a4];Target560* items[4];};
// Shared 340-byte record stride in584CA8 and566C10.
struct Record340 {char pad[0x24];u32 values[76];};
struct RecordData340 {Record340*data;};
struct NodeRef566 {u32 pad[2];void*node;};
struct Owner566 {char pad[0x20];RecordData340*records;char pad24[0x50-0x24];NodeRef566*child;};
// Nullable wrapper subobject4 with resource4; output sizes from callee copies.
struct Resource56C {void*gate;void*resource;};
struct Owner56C {u32 m0;Resource56C sub;};
struct Output56C56 {u32 words[14];};
struct Output56C38 {u8 bytes[0x26];};
struct Output56C6 {u32 word;u16 flag;};
struct Command588 {u32 m0,flags,m8,mC,m10;};
struct Commands588 {u32 m0,m4;Command588 commands[4];u32 index,m5C;void*value;};
// Bounded array at(0) keeps count load in nullable float getters (KB139/611).
struct FloatValue21 {u32 pad[2];f32 value;};
struct FloatContext21 {char pad[0xc];u32 count,capacity;FloatValue21*data;FloatValue21*at(u32 i){if(i<count)return data+i;return data;}};
// Neighbor547xxx record views; full block-copy size2c4, known fields only.
struct Child547 {char pad[0x21];u8 mode;};
struct Owner547 {Child547*child;char pad4[0x30-4];u8 bytes[2];u16 halves[2];u8 kind,pad37;u16 id;char pad3A[0x56-0x3a];s16 index;char tail[0x2c4-0x58];};
// Five-argument command4B250C: slot index, on word, signed position mode, optional Vec3.
extern void func_004B250C(void*,u32,u32,s32,const Vec3*);
struct CallbackWord54F {char pad[0xc];u32 value;};
struct CallbackRequest54F {char pad[0xc];Vec3 pos;u32 value;s8 mode;};
// 58EE secondary-base D1 family: 19-slot primary and secondary at +38.
struct DtorPrimary19 {
    virtual ~DtorPrimary19();
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16();
    char pad[0x34];
};
struct DtorSecondary21 {virtual ~DtorSecondary21(){};};
// 54F9/5502 bounded 20-record table, record size34.
struct Record54F52 {char pad[0x18];Vec3 pos;char pad24[0x30-0x24];s8 kind;char pad31[3];};
struct Records54F52 {Record54F52 data[20];Record54F52&at(u32 i){if(i<20)return data[i];return data[0];}};
struct Owner54F52 {Vec3 defaultPos;u32 count;Records54F52 records;};
// 569C64 virtual output view; seven-word extent inferred from both caller frames.
struct ResourceOutput569 {u32 words[7];};
extern bool func_00569C64(void*,ResourceOutput569*);
#endif
