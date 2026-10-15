typedef unsigned int u32;
typedef unsigned char u8;
typedef float f32;

struct Self;
typedef f32* (*GetFn)(Self*);

struct Self {
    void** vt;
    u8 pad0[0x478 - 4];
    f32 f478;
    f32 f47c;
    f32 f480;
};

extern "C" u32 func_0054E370(Self* self) {
    f32* P = ((GetFn)self->vt[30])(self);
    if (P[0] == self->f478) {
        f32* Q = ((GetFn)self->vt[30])(self);
        if (Q[2] == self->f480) return 1;
    }
    return 0;
}
