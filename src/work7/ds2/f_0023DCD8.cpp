typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct Inner { char pad0[4]; s32 m4; };
struct Obj { char pad0[0x20]; Inner* m20; };
u32* func_00584CA8(Obj* p, s32 i, s32 j);            // 0x584CA8
void func_004CF5DC(Obj* p, s32 i, s32 j, const u32& key);   // 0x4CF5DC
struct C {
    char pad0[0x7c4];
    Obj* m7c4;
    char pad1[0x7d1 - 0x7c8];
    u8 m7d1;
    void f();
};
void C::f() {
    if (!m7d1)
        return;
    Obj* p = m7c4;
    u32 key = (u32)-1;
    s32 n = p->m20->m4;
    for (s32 i = 0; i < n; i++) {
        key = *func_00584CA8(p, i, 3);
        ((u8*)&key)[3] = 0;
        func_004CF5DC(p, i, 3, key);
    }
    m7d1 = 0;
}

