

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_0070FB60;
extern "C" u32 func_002925A0(u32, u32, u32);
extern "C" void func_004CF478(u32, u32, u32);
extern "C" void func_00151148(u32, u32);

extern "C" void func_0037CD38(char* self) {
    if (*(u8*)(self + 0x42b) != 1) return;
    if (func_002925A0(data_0070FB60, *(u32*)(self + 0x480), *(u32*)(0x2cc + self)) == 0) return;
    u32 a = *(u32*)(self + 0x40c); __schedule_barrier();
    u32 b = *(u32*)(self + 0x410);
    *(u8*)(self + 0x42b) = 2;
    if (a == 0 || b == 0) return;
    func_004CF478(a, 0, 0);
    func_00151148(b, 0);
}
