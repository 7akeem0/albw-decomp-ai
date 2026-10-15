#include "range.h"
struct OId { char pad[0x42]; s16 m42; };

// 0x540084 (sparse switch)
bool f540084(OId* o) {
    switch (o->m42) {
    case 0x59: case 0x5d: case 0x63: case 0x64: case 0x65: case 0x66: case 0x89:
        return false;
    default:
        return true;
    }
}

// 0x542AE4
struct X542 { char pad[4]; u8 m4; };
bool f542AE4(X542* o, u32 a) {
    if (a >= 0x21) return false;
    u8 v = o->m4;
    if (v == 0) return true;
    if (v >= 0x15) return false;
    if (a == 3 && v > 3) return false;
    return true;
}

// 0x556DC0
struct Inner556 { char pad[0x70]; void* m70; };
struct X556 { char pad[0x14]; Inner556* m14; };
struct G556 { char pad[0x44]; void* m44; };
struct Leaf556 { char pad[0x7c]; u8 m7C; };
extern G556* data_0070B728;
bool f556DC0(X556* o) {
    Leaf556* p = (Leaf556*)o->m14->m70;
    if (data_0070B728->m44 && data_0070B728->m44 == (void*)p) {
        Leaf556* q = p;
        return q->m7C == 1;
    }
    return false;
}

// 0x56AA40
struct X56AA { char pad[8]; void* m8; };
bool f56AA40(X56AA* o, u32* out, u32 idx) {
    u8* base = (u8*)o->m8;
    if (base && *(u32*)base > idx) {
        u8* p = base + *(u32*)(base + idx * 8 + 8);
        if (p) {
            ((u32*)out)[0] = ((u32*)p)[0];
            ((u32*)out)[1] = ((u32*)p)[1];
            return true;
        }
    }
    return false;
}

// 0x563710
u32 func_00563220(void*);
u32 func_005632B0(void*, u32, u32);
u32 func_00563548(void*, u32, u32);
void func_0056374C(void*, u32, u32);
void f563710(void* o) {
    u32 a = func_00563220(o);
    u32 b = func_005632B0(o, a, 0);
    u32 c = func_00563548((u8*)o + 0x3c, b, 0);
    func_0056374C((u8*)o + 0x60, c, 0);
}
