typedef unsigned int u32;
typedef short s16;
typedef float f32;

extern u32 data_00708A18[];

struct Sub94 {
    u32 pad0[6];
    f32 m18;
};

struct Obj {
    u32 pad0[0x94 / 4];
    Sub94* m94;
};

extern "C" f32 func_00554D80(Obj* self) {
    s16 idx = *(s16*)((char*)self + 0x29e);
    if (idx >= 0) {
        if (idx < 1) {
            return *(f32*)&data_00708A18[idx * 5 + 1];
        }
    }
    return self->m94->m18;
}
