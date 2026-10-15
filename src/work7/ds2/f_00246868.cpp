typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
extern void* data_00706E20;
extern u32 ro_00693274;
void* func_005841A8(void* base, s32 id, u32 from);   // 0x5841A8
struct Res0 { char pad0[0x20]; u32 m20; u32 m24; u32 m28; };
struct Res { volatile Res0* m0; };
void func_004CF478(void* p, s32 a, s32 b);   // 0x4CF478
struct C {
    char pad0[0x410];
    void* m410;
    char pad1[0x438 - 0x414];
    u16 m438;
    char pad2[0x43c - 0x43a];
    u32 m43c, m440, m444;
    void f();
};
void C::f() {
    void* base = data_00706E20;
    s32 id = (s32)ro_00693274;
    u32 from = *(u32*)((char*)base + 0x3dbc0);
    Res* r = (Res*)func_005841A8(base, id, from);
    if (r->m0) {
        m43c = r->m0->m20;
        m440 = r->m0->m24;
        m444 = r->m0->m28;
    }
    func_004CF478(m410, 1, 0);
    m438 = 0;
}
