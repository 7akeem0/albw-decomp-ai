typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Loc { u32 a; u8 b; };

u32 func_00560FDC(void* s, Loc* out);

bool func_00560EB0(void* s, u8* out) {
    Loc loc;
    if (func_00560FDC(s, &loc) == 0) return false;
    if (loc.b != 0xd0) return false;
    *out = loc.a != 0;
    return true;
}
