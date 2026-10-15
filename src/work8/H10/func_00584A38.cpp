typedef unsigned int u32;

struct Obj {
    char p0[0x20];
    u32 m20;
    u32 m24;
    u32 m28;
    u32 m2c;
};

struct Self { char p0[0x44]; u32 m44; };

extern "C" bool func_00584A38(Self* self, Obj* other) {
    u32 a = self->m44;
    if (a != 0) {
        if (a == (u32)other) return 0;
    }
    if (other->m24 != 0) return 0;
    if (other->m20 != 0) return 0;
    if (other->m2c != 0) return 0;
    if (other->m28 != 0) return 0;
    return 1;
}
