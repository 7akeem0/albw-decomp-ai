typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef unsigned char u8;

extern u8 ro_006C011C[];
struct Out56C524 {
    u32 a;
    u32 b;
    u16 c;
};

extern "C" void func_0056C524(u32 unused0, u32 unused1, float t, Out56C524* out) {
    float v = (2.0f - t) * t * 92.0f;
    s32 i = (s32)v;
    if (i > 0x5c) i = 0x5c;
    else if (i < 0) i = 0;
    u8* e = ro_006C011C + i * 10;
    out->a = *(u32*)e;
    out->b = *(u32*)(e + 4);
    out->c = *(u16*)(e + 8);
}
