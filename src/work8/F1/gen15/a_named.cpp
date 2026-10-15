typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_003A3568(void*, u32);
extern "C" void func_003842C0(void*, u32, u32, u32);

extern "C" void func_003BD4C8(char* self) {
    *(u8*)(self + 0x63) = 0;
    char* p = *(char**)(self + 0x48);
    float* q = (float*)(p + 0xa2c);
    q[0] = 0.0f;
    q[1] = 0.0f;
    q[2] = 0.0f;
    *(u8*)(*(char**)(self + 0x48) + 0xb3f) = 1;
    func_003A3568(*(char**)(self + 0x48) + 0xbc8, 0);
    char* d = *(char**)(self + 0x48);
    func_003842C0(d + 0x8c0, 0x25, 0xa, 1);
}
