typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32;
struct Color { u8 r, g, b, a; };
const Color* func_002AF840();
const Color* func_002AF830();
struct Elem { u16 m0; u8 pad[0x154 - 2]; };
struct Arr { Elem* data; s32 num; };
struct BitFlag32 { u32 v; void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; } void set(u32 m) { change(m, true); } void set2(const u32& m) { v |= m; } };
struct Obj;
void func_004D00E4(Obj* o, s32 i, s32 k, Color* c);
struct Obj { u8 pad[0x20]; Arr* m20; u8 pad24[0x164 - 0x24]; BitFlag32 m164; };
static inline void rev(Color* d, const Color* s) { u8 aa = s->a; u8 gg = s->g; u8 bb = s->b; u8 rr = s->r; d->r = aa; d->g = bb; d->b = gg; d->a = rr; }
static inline void rev2(Color* d, const Color* s) { u8 aa = s->a; u8 bb = s->b; u8 gg = s->g; u8 rr = s->r; d->r = aa; d->g = bb; d->b = gg; d->a = rr; }
extern "C" void func_0014ED58(Obj* o) {
    if (!o) return;
    const Color* c1 = func_002AF840();
    const Color* c2 = func_002AF830();
    Color a, b;
    rev(&a, c1);
    rev2(&b, c2);
    o->m164.set(0x80000); o->m164.set(0x10000);
    for (s32 i = 0; i < o->m20->num; i++) {
        Arr* ar = o->m20; Elem* e = &ar->data[i];
        if (e) {
            func_004D00E4(o, i, 1, &a);
            func_004D00E4(o, i, 0, &b);
            e->m0 |= 0x400;
        }
    }
}
