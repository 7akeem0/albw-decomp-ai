typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef float f32;

struct Vec3 { f32 x, y, z; };

struct Entry { u8 pad[0x4c]; s32 m4c; };

struct M7c0 {
    u8 pad0[4];
    u8 m4;
    u8 pad5[0x20 - 5];
    u32 m20;
    u32 m24;
    Entry** m28;
};

struct Npc {
    u8 pad0[0x3d0];
    Vec3 m3d0;
    u8 pad3dc[0x3e8 - 0x3dc];
    s32 m3e8;
    u8 pad3ec[0x7c0 - 0x3ec];
    M7c0* m7c0;
    u8 pad7c4[0x834 - 0x7c4];
    f32 m834;
    u8 pad838[0x848 - 0x838];
    u16 m848;
    u16 m84a;
    u8 pad84c[0x857 - 0x84c];
    u8 m857;
    u8 pad858[0x85b - 0x858];
    s8 m85b;
    u8 pad85c[0x914 - 0x85c];
    s8 m914;
    u8 pad915[0x984 - 0x915];
    u32 m984;
};

extern "C" s32 func_004BFE7C(Npc*, Vec3*, s32*, s8*, f32, M7c0*);
extern "C" s32 func_004C1388(Npc*);
extern "C" __attribute__((weak)) bool func_0068C794(f32*, f32, f32, f32, f32);
extern "C" void func_004C0350(Npc*);
extern "C" __attribute__((weak)) void func_00614BFC(Npc*, s32, s32);

#define FLT_MAX 3.402823466e38f

void target(Npc* p) {
    if (p->m7c0 == 0) return;
    if (p->m914 != 0) {
        u16 t = p->m848;
        if (t != 0) p->m848 = (u16)(t - 1);
    }
    s8 idx = p->m85b;
    s32 s = func_004BFE7C(p, &p->m3d0, &p->m3e8, &p->m85b, p->m834, p->m7c0);
    if (s == 2 || s == 4) {
        if (p->m7c0->m28 != 0 && p->m7c0->m20 > (u32)idx) {
            Entry* e = p->m7c0->m28[idx];
            if (e != 0) {
                s32 v = e->m4c;
                if (v > 0) {
                    p->m848 = 0;
                    p->m84a = (u16)v;
                    goto needChase;
                } else if (v == -1) {
                    p->m834 = 0.0f;
                    p->m848 = 0;
                    p->m857 = 0;
                    goto needChase;
                } else {
                    goto tickCheck;
                }
            }
        }
    }
tickCheck:
    if (p->m848 != 0 && func_004C1388(p) == 0) goto enterState;
needChase:
    if (func_0068C794(&p->m834, 0.0f, 0.1f, 0.001f, FLT_MAX)) goto callState;
    return;
enterState:
    if (p->m914 != 0 && p->m7c0->m4 == 0) {
        if (s == 4) goto callState;
        if (s == 3) goto chase3;
    }
    func_004C0350(p);
    return;
callState:
    func_00614BFC(p, (s32)p->m984, 0);
    return;
chase3:
    func_0068C794(&p->m834, 0.01f, 0.1f, 0.001f, FLT_MAX);
}
