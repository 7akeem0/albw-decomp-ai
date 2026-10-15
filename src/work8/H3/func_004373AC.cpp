// func_004373AC: if (o->m46) self->m4 = f(self->mC, self->m4, o, self->m14, self->m10, self->m8);
// then return (o->m44 & 2) ? (o->m45 != 0) : 1.

typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

struct Obj {
    char p0[0x44];
    u8 m44;
    u8 m45;
    u8 m46;
};

struct Self {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mC;
    u32 m10;
    u32 m14;
};

extern "C" u32 func_00503388(u32 a, u32 b, Obj* c, u32 d, u32 e, u32 f);

s32 func_004373AC(Self* self, Obj* o) {
    if (o->m46 != 0) {
        self->m4 = func_00503388(self->mC, self->m4, o, self->m14, self->m10, self->m8);
    }
    if ((o->m44 & 2) == 0) {
        return 1;
    }
    return o->m45 != 0;
}
