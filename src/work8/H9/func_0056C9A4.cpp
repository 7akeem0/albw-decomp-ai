// u32 f(self, idx): if (!self->m0c) return 0; t = self->m4; if (t->a <= idx) return 0;
// if (self->m8) return self->m8[idx]; return func_0056AC94(self->m0) + 8 + t[idx].m8 (12-byte records).
typedef unsigned u32;
typedef unsigned char u8;
struct Rec12 { u32 a; u32 b; u32 m8; };
struct Owner { void* m0; Rec12* m4; u32* m8; u8 m0c; };
u32 func_0056AC94(void* p);
u32 func_0056C9A4(Owner* self, u32 idx) {
    if (self->m0c == 0) return 0;
    Rec12* t = self->m4;
    if (t->a <= idx) return 0;
    if (self->m8 != 0) return self->m8[idx];
    Rec12* e = &t[idx];
    u32 k = e->m8;
    u32 base = func_0056AC94(self->m0) + 8;
    return base + k;
}
