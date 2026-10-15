typedef unsigned int u32;
typedef int s32;

struct Ent {
    u32 m0;
    u32 m4;
    u32 m8;
    u32 mc;
    u32 m10;
};
struct Tbl {
    u32 m0;
    s32 m4;
};

extern "C" void func_0056B678(Tbl* self, u32* out) {
    Ent* e = (Ent*)((char*)self + self->m4); __schedule_barrier();
    if (e->m0 == 0) out[0] = 0xffffffff; else out[0] = e->m4;
    if (e->m0 <= 1) out[1] = 0xffffffff; else out[1] = e->m8;
    if (e->m0 <= 2) out[2] = 0xffffffff; else out[2] = e->mc;
    if (e->m0 <= 3) out[3] = 0xffffffff; else out[3] = e->m10;
}
