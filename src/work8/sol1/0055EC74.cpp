typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

struct Obj {
    u8 pad0[0xc];
    u32 mc;
    Vec3 m10;
    Vec3 m1c;
};

struct Tgt {
    u8 pad0[0x4c];
    Vec3 m4c;
    u8 pad58[0x8c - 0x58];
    Vec3 m8c;
};

static inline void copyVec(Vec3* d, const Vec3& s) {
    *d = s;
}

static inline void copyBoth(Vec3* d,Vec3* e,Vec3 s,Vec3 t){*d=s;*e=t;}
extern "C" void func_0055EC74(Obj* o, u8* g) {
    u32 idx = o->mc;
    u8* slot = g + 0x18a4;
    Vec3 a = o->m1c;
    if (idx < 4) {
        slot += idx * 4;
    }
    Tgt* p = *(Tgt**)slot;
    if (p != 0) {
        Vec3*const&d=&p->m4c;Vec3*const&e=&p->m8c;copyBoth(d,e,o->m10,a);
    }
}
