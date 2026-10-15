// func_0056CC94: p = func_0056AF9C(self->m3c); if (!p) return 0;
// out->m0 = p->m0; out->m4 = p->m4; out->m10 = p->m8 (byte); out->m14 = (u8)f1(p); out->m15 = (u8)f2(p);
// out->mc = f3(p); out->m8 = f4(p); out->m16 = (u8)f5(p); return 1;

typedef unsigned char u8;
typedef unsigned int u32;

struct Src {
    u32 m0;
    u32 m4;
    u8 m8;
};

struct Self {
    char p0[0x3c];
    Src* m3c;
};

struct Dst {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mc;
    u32 m10;
    u8 m14;
    u8 m15;
    u8 m16;
};

Src* func_0056AF9C(Src* p);
u8 func_0056B884(Src* p);
u8 func_0056B8A8(Src* p);
u32 func_0056B9D0(Src* p);
u32 func_0056B998(Src* p);
u8 func_0056B928(Src* p);

u32 func_0056CC94(Self* self, u32 unused, Dst* out) {
    Src* p = func_0056AF9C(self->m3c);
    if (p == 0) {
        return 0;
    }
    out->m0 = p->m0;
    out->m4 = p->m4;
    out->m10 = p->m8;
    out->m14 = func_0056B884(p);
    out->m15 = func_0056B8A8(p);
    out->mc = func_0056B9D0(p);
    out->m8 = func_0056B998(p);
    out->m16 = func_0056B928(p);
    return 1;
}
