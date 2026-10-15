typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef unsigned long long u64;

u32 func_00111A64(void* r);
void* func_0058A7D4(void* a);

inline s32 randRange(void* r, u32 max) {
    return (s32)(((u64)func_00111A64(r) * max) >> 32);
}

struct Obj {
    char pad0[0x48];
    void* m48;
    char pad1[0x60 - 0x4c];
    u16 m60;
    u8 m62;
    u8 m63;
};

bool func_003B23E0(Obj* self) {
    s16 n = (s16)(self->m60 - 1);
    self->m62 = 0;
    self->m63 = 0;
    self->m60 = n;
    if (n <= 0) {
        if (randRange(func_0058A7D4(self->m48), 0x65) >= 0x32) {
            self->m60 = randRange(func_0058A7D4(self->m48), 0xb) + 0x1e;
        }
    }
    return true;
}
