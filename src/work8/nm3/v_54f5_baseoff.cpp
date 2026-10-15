#include "range.h"
struct O54F518 { char pad[0xc]; s32 mC; u32 m10; u32 m14; u32 m18; };
struct P54F518 { char pad[0x48]; u32 m48; u32 m4c; u32 m50; };
struct B54F518 { char pad[0x1418]; P54F518* arr[0x10]; };
void f54F518(O54F518* o, B54F518* b) {
    char* base = (char*)b + 0x1418;
    u32 i = o->mC;
    if (i < 0x10) base += i * 4;
    P54F518* p = *(P54F518**)base;
    if (p == 0) return;
    p->m48 = o->m10;
    p->m4c = o->m14;
    p->m50 = o->m18;
}
