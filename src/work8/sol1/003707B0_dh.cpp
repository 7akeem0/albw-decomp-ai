typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Obj { u8 pad0[0xc]; u8 m0c; u8 m0d; u8 m0e; u8 m0f; };

u32 func_003707B0(Obj* o, u8 key) {
    u8 k=(u8)key;
    switch (key) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x17:
    case 0x18:
    case 0x19:
        if (o->m0f == 0xd) {
            o->m0f = k;
            o->m0d = 1;
            return 1;
        }
        if (o->m0e == 0xd) {
            o->m0c = 1;
            o->m0e = k;
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
