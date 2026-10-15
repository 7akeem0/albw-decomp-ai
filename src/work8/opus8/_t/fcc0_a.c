typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
typedef struct Obj { char pad[0x2ec]; s32 m2ec; s32 m2f0; u8 b2f4; char pad2f5[0x301 - 0x2f5]; u8 b301; } Obj;
typedef struct Mgr { char pad[0x12c]; s32 m12c; } Mgr;
extern Mgr* G_007142C8;
s32 func_002E213C(s32 a);
void func_0032FC14(Obj* o, s32 n);
s32 func_00520EAC(s32 a);
s32 func_0054F4E0(s32 a);

s32 func_0032FCC0(Obj* o, s32 unused, s32 mode)
{
    switch (mode) {
    case 0:
    {
        if (o->b2f4 == 1 && func_0054F4E0(o->m2f0) != 0) {
            if (o->b301 != 0) {
                func_0032FC14(o, 2);
                return 0;
            }
            func_0032FC14(o, 3);
            return 1;
        }
        return -1;
    }
    case 1:
    if (o->b2f4 == 2) {
        s32 r;
        if (func_00520EAC(G_007142C8->m12c) == 0) return -1;
        r = func_002E213C(o->m2ec);
        switch (r) {
        case 0:
        case 1:
            return r;
        case 2:
            func_0032FC14(o, 3);
            return 2;
        }
    }
    }
    return 0;
}
