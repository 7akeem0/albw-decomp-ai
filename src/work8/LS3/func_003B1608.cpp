typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;

extern "C" u32 func_004F8998(void*, u32, u32);

struct VTable3B1608 {
    u8 pad0[0xec];
    void (*mec)(void*);
    void (*mf0)(void*);
    void (*mf4)(void*);
    u8 padf8[0x10c - 0xf8];
    void (*m10c)(void*);
    u8 pad110[0x128 - 0x110];
    u32 (*m128)(void*);
    void (*m12c)(void*);
    u8 pad130[0x138 - 0x130];
    void (*m138)(void*, u32, u32);
};

struct Obj3B1608 {
    VTable3B1608* vptr;
    u8 pad4[0x48 - 4];
    void* m48;
    u8 pad4c[0x5e - 0x4c];
    u16 m5e;
    u8 pad60[2];
    u8 m62;
    u8 m63;
};

extern "C" void func_003B1608(Obj3B1608* self) {
    self->m62 = 1;
    self->m63 = 1;
    if (self->vptr->m128(self)) {
        if (func_004F8998(self->m48, 0, 0))
            return self->vptr->m138(self, 3, 1);
    }

    void* owner = *(void**)((u8*)*(void**)((u8*)self->m48 + 0x93c) + 4);
    if (owner == self) self->vptr->mf4(self);
    owner = *(void**)((u8*)*(void**)((u8*)self->m48 + 0x93c) + 4);
    if (owner == self) self->vptr->mec(self);
    owner = *(void**)((u8*)*(void**)((u8*)self->m48 + 0x93c) + 4);
    if (owner == self) self->vptr->mf0(self);
    owner = *(void**)((u8*)*(void**)((u8*)self->m48 + 0x93c) + 4);
    if (owner != self) return;
    if (self->m62 == 0) return;
    s16 value = (s16)(self->m5e - 1);
    self->m5e = (u16)value;
    if (value > 0) return;
    self->vptr->m12c(self);
    return self->vptr->m10c(self);
}
