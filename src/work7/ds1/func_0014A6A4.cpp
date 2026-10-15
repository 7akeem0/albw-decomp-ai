// 0x14A6A4: init helper; stores 3 params, calls a chain, tail-returns.
typedef unsigned int u32;
typedef unsigned char u8;

struct T {
    char  pad[0x14];
    void* m14;   // +0x14
    void* m18;   // +0x18
    void* m1c;   // +0x1c
};

extern "C" void func_00297AD8(void*);
extern "C" void func_0019AB64(u32);
extern "C" void func_0019ACC8(void*, u32);
extern "C" void func_0014A728(void*, void*);
extern "C" u32  func_004C3914(u32);
extern u32  bss_0079E048;
extern void* data_007124F0;

u32 f(T* self, void* a1, void* a2, void* a3) {
    self->m14 = a1;
    self->m18 = a2;
    self->m1c = a3;
    func_00297AD8((u8*)self + 0x2c);
    func_0019AB64(0);
    u32  g = bss_0079E048;
    u32* p = (u32*)((u8*)a1 + 0x44);
    u32  v = (g > 1) ? p[1] : p[0];
    func_0019ACC8(data_007124F0, v);
    func_0014A728(self, a1);
    return func_004C3914(0);
}
