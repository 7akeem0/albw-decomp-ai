typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

extern const u8 ro_006BF8B6[];
struct Out10 { u32 a; u32 b; u16 c; };

void func_0056BB80(void* a, void* b, Out10* out, f32 f) {
    s32 idx = (s32)((2.0f - f) * f * 121.0f);
    if (idx > 121) idx = 121;
    else if (idx < 0) idx = 0;
    const u8* e = ro_006BF8B6 + idx * 10;
    out->a = *(const u32*)(e);
    out->b = *(const u32*)(e + 4);
    out->c = *(const u16*)(e + 8);
}
