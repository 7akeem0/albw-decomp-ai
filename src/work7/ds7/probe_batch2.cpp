#include "range.h"

// shared inner object for 0x53Fxxx: m42 s16 id, m48 pointer
struct Inner53 { char pad[0x42]; s16 m42; char pad2[0x2]; void* m48; };
struct Obj14 { Inner53* getM14(); };

// 0x53F480
struct E16 { u8 m0; u8 pad[0xf]; };
extern E16 data_007111A8[];
bool f53F480(Obj14* o) {
    Inner53* p = o->getM14();
    if (data_007111A8[p->m42].m0 == 2) {
        if (*(s8*)((char*)p->m48 + 0x74) != -1) return true;
    }
    return false;
}

// 0x53F224
bool func_005593EC(void*);
bool func_005594B8(void*);
bool f53F224(Obj14* o) {
    Inner53* p = o->getM14();
    s16 v = p->m42;
    if (v == 0x50 || v == 0x52) return func_005593EC(p->m48);
    if (v == 0x75 || v == 0x77) return func_005594B8(p->m48);
    return false;
}

struct Inner53x { char pad[0x42]; s16 m42; char pad2[0x2]; void* m48; };
struct Obj14x { char pad[0x14]; Inner53x* m14; };
bool f53F480x(Obj14x* o) {
    Inner53x* p = o->m14;
    if (data_007111A8[p->m42].m0 == 2) {
        if (*(s8*)((char*)p->m48 + 0x74) != -1) return true;
    }
    return false;
}
bool f53F224x(Obj14x* o) {
    Inner53x* p = o->m14;
    s16 v = p->m42;
    if (v == 0x50 || v == 0x52) return func_005593EC(p->m48);
    if (v == 0x75 || v == 0x77) return func_005594B8(p->m48);
    return false;
}

// 0x54000C
struct P54000C { char pad[0x438]; void* m438; char pad2[0x174]; f32 m5B0; };
struct O54000C { char pad[0x10]; P54000C* m10; char pad2[0x70]; u8 m84; char pad3[0x3e]; u8 mC3; };
bool f54000C(O54000C* o) {
    if (o->mC3 != 0) return false;
    P54000C* p = o->m10;
    if (p->m438 == 0) return false;
    if (p->m5B0 == 1.0f && o->m84 == 0) return true;
    return false;
}

// 0x546CC0
struct V3 { f32 x, y, z; };
struct Inner546 { char pad[0x42]; s16 m42; };
struct O546CC0 { char pad[0x2c]; Inner546* m2C; char pad2[0xd0]; u32 m100; u32 m104; u32 m108; };
bool func_005467C0(O546CC0* o, V3* out);
bool f546CC0(O546CC0* o, V3* out) {
    s16 v = o->m2C->m42;
    if ((u32)(v - 0x89) > 4) goto outl;
    ((u32*)out)[0] = o->m100;
    ((u32*)out)[1] = o->m104;
    ((u32*)out)[2] = o->m108;
    return false;
outl:
    return func_005467C0(o, out);
}
