typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Node { u32 m0; u32 m4; };
struct Head { u32 m0; u32 m4; u32 m8; u32 mc; };
struct Obj { char pad0[0x3f8]; Head head; };

s32 func_00527794(u32 off, s32 x);

s32 func_00520EF0(Obj* self, s32 x) {
    u32 first = self->head.m4;
    u32 base = self->head.mc;
    Head*head5=&self->head;u32 cur=first-base;__memory_changed();u32 end=(u32)head5-head5->mc;
    if (cur == end) return 0;
    do {
        if (func_00527794(cur, x) != 0) return 1;
        cur = ((Node*)(cur + base))->m4 - base;
    } while (cur != end);
    return 0;
}
