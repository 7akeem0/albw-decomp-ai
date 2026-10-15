
typedef unsigned int u32;
typedef float f32;
typedef unsigned char u8;

extern "C" void func_0014E138(void*);
extern "C" void func_004CF478(void*, u32, u32);
extern void* data_0070FB60;

struct T {
    char pad0[0x3d4];
    f32  m3d4;   
    char pad1[0x410 - 0x3d8];
    u8   m410;   
    char pad2[0x430 - 0x411];
    void* m430;  
};

void f(T* self) {
    func_0014E138(self);
    if (self->m410 == 2)
        return;
    void* g = data_0070FB60;
    if (g == 0)
        return;
    if (!(self)) { g = *(void**)((u8*)g + 0x1c); } else { g = *(void**)((u8*)g + 0x1c); }

    f32 lim = *(f32*)((u8*)g + 4);
    f32 v = self->m3d4 + 25.0f;
    { void* ptr = self->m430;
    if (v > lim)
        func_004CF478(ptr, 1, 0);
    else
        func_004CF478(ptr, 0, 0); }
}
