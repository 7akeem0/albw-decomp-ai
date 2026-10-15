typedef unsigned int u32;
typedef int s32;

struct Ent { u32 m0; u32 m4; };
struct Tbl {
    u32 m0;
    s32 m4;
    Ent* m8;
};

s32 func_0010FBAC(u32 key, u32 arg);

extern "C" s32 func_00581048(Tbl* self, u32 arg) {
    for (s32 i = 0; i < self->m4; i++) {
        Ent* e = &self->m8[i];
        if (!func_0010FBAC(e->m0, arg)) return e->m4;
    }
    return -1;
}
