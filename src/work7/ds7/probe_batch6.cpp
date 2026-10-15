#include "range.h"
// 56AEF8 family: handle = (type<<24)|index into a relative-offset table.
struct Tab56 { u32 count; };
static void* lookup56(u8* base, u32 idx) {
    if (*(u32*)base <= idx) return 0;
    return base + *(u32*)(base + idx * 8 + 8);
}
struct S56AEF8 { char pad[0x14]; u32 m14; };
struct S56AF60 { char pad[0x24]; u32 m24; };
struct S56B164 { char pad[0x2c]; u32 m2c; };
struct S56B3E0 { char pad[0x0c]; u32 m0c; };
struct S56B41C { char pad[0x1c]; u32 m1c; };
void* f56AEF8(S56AEF8* o, u32 h) { if ((h >> 24) != 3) return 0; return lookup56((u8*)o + o->m14, h & 0xffffff); }
void* f56AF60(S56AF60* o, u32 h) { if ((h >> 24) != 6) return 0; return lookup56((u8*)o + o->m24, h & 0xffffff); }
void* f56B164(S56B164* o, u32 h) { if ((h >> 24) != 4) return 0; return lookup56((u8*)o + o->m2c, h & 0xffffff); }
void* f56B3E0(S56B3E0* o, u32 h) { if ((h >> 24) != 2) return 0; return lookup56((u8*)o + o->m0c, h & 0xffffff); }
void* f56B41C(S56B41C* o, u32 h) { if ((h >> 24) != 5) return 0; return lookup56((u8*)o + o->m1c, h & 0xffffff); }

// 0x56A2F0 (same table, plus a u16 tag check)
struct O56A2F0 { char pad[0x14]; u32 m14; };
u8* f56A2F0(O56A2F0* o, u32 idx) {
    const u32 k = 0x4902;
    u8* base = (u8*)o + o->m14;
    if (*(u32*)base <= idx) return 0;
    u8* e = base + idx * 8;
    if (*(u16*)(e + 4) == k) return base + *(u32*)(e + 8);
    return 0;
}
