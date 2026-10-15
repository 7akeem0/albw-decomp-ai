typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32;
extern u32 data_00709D28;
extern "C" void func_004A3700(void*);
extern "C" void func_004A9120(u32, void*);
struct Eff { char pad[0x1c]; u32 id; char p20[0x3c-0x20]; u32 m3c; };
struct Handle { Eff* obj; u32 id; bool isValid() const { return obj->id == id; } };
struct Obj386 {
    u8 p0[0x34]; u8 m34; u8 p35[5]; u8 m3a; u8 p3b[0xb4-0x3b]; u8 mb4[0x30]; u16 me4; u8 pe6[0x1c4-0xe6]; Handle m1c4;
    void f();
};
void Obj386::f() {
    me4 >>= 2;
    m3a = 0xff;
    __schedule_barrier();
    const Handle* h = &m1c4;
    Eff* e = h->obj;
    if (e != 0 && e->id == h->id) {
        e->m3c = (e->m3c & ~0x44u) | 8u;
        func_004A3700(e);
    }
    if (m34) {
        m34 = 0;
        func_004A9120(data_00709D28, mb4);
    }
}
