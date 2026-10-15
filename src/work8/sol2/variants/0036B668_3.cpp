

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_0070FB60;
extern u32 data_00706E20;
extern "C" void func_00361658(u32);
extern "C" void func_0052FD7C(u32, u32, s32);
extern "C" void func_00120D00();

extern "C" void func_0036B668(char* self) {
    if (*(u8*)(self + 0xfb) != 0) {
        u32 g = data_0070FB60;
        if (g != 0) func_00361658(g);
        *(u8*)(self + 0xfb) = 0;
    }
    if (*(u8*)(self + 0xfc) == 0) {
        u32 p = *(u32*)(self + 4);
        if (p != 0) {
            s32 id=(s32)*(s16*)(p+0x58);u32 h=data_00706E20;func_0052FD7C(h+0x3dbbc,(u32)func_00120D00,id);
            *(u8*)(self + 0xfc) = 0;
        }
    }
    *(u32*)(self + 0xec) = 6;
}
