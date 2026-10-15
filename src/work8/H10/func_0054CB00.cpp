typedef unsigned int u32;
typedef int s32;

struct Flags { u32 m0; };
struct Desc { char p0[4]; float m4; };
struct Obj {
    char p0[0x14];
    Flags* m14;
    char p1[0x24 - 0x18];
    float m24;
    char p2[0x2c - 0x28];
    u32 m2c;
};
struct Glob { char p0[0x14]; u32 m14; };
extern Glob data_00710DA8;

extern "C" s32 func_0054CB00(Obj* self, u32* out, u32 v, Desc* d) {
    u32 r = v;
    if ((self->m14->m0 & 2) == 0) {
        *out = v;
        return -1;
    }
    if (d->m4 == 1.0f) {
        if (self->m24 > 0.0f) r = data_00710DA8.m14 + self->m2c;
    }
    *out = r;
    return 0;
}
