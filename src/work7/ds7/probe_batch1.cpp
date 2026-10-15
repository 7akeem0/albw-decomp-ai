#include "range.h"

// 0x58A404
struct O58A404 { char pad[0x508]; s16 m508; s16 m50A; };
f32 f58A404(O58A404* o) {
    f32 r = 0.0f;
    s16 a = o->m508;
    s16 b = o->m50A;
    if (a > 0 && b > 0) r = (f32)a / (f32)b;
    return r;
}

// 0x58D808 / 0x58DC54
struct P58D { char pad[0xd]; u8 m0D; u8 m0E; };
struct O58D { char pad[0x54]; P58D* m54; u16 m58; };
bool f58D808(O58D* o) {
    if (o->m58 != 3) return true;
    if (o->m54 == 0) return true;
    if (o->m54->m0D != 0 || o->m54->m0E != 0) return false;
    return true;
}
bool f58DC54(O58D* o) {
    if (o->m58 != 2) return true;
    if (o->m54 == 0) return true;
    if (o->m54->m0D != 0 || o->m54->m0E != 0) return false;
    return true;
}

// 0x58E15C
struct O58E15C { char pad[0x70]; P58D* m70; u16 m74; };
bool f58E15C(O58E15C* o) {
    if (o->m70 == 0) return false;
    if (!(o->m70->m0D || o->m70->m0E)) return false;
    return o->m74 == 0;
}

// 0x53F4BC
struct Obj53 { char pad[0x42]; s16 m42; u32 m44; };
struct E53 { u32 w0; u32 m4; u32 w8; u32 wC; };
extern Obj53* data_0070B728;
extern E53 data_007111A8[];
bool f53F4BC(Obj53* o) {
    if (data_0070B728->m44 != 0) return true;
    u8 r = (u8)(data_007111A8[o->m42].m4 & 0x40);
    if (r) r = 1;
    return r;
}
