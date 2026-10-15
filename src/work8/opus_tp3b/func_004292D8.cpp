typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_003A3568(void*, u32);
extern "C" void func_003842C0(void*, u32, u32, u32);

extern "C" void func_004292D8(char* self) {
    char* a0 = *(char**)(self + 0x48);
    *(u16*)(a0 + 0xaf4) = 2;
    float* r = (float*)(*(char**)(self + 0x48) + 0x3dc);
    for (int i = 0; i < 3; i++) r[i] = 0.0f;
    char* p = *(char**)(self + 0x48);
    float* q = (float*)(p + 0xa2c);
    q[0] = 0.0f;
    q[1] = 0.0f;
    q[2] = 0.0f;
    *(u8*)(*(char**)(self + 0x48) + 0xb3f) = 1;
    func_003A3568(*(char**)(self + 0x48) + 0xbc8, 0);
    char* d = *(char**)(self + 0x48);
    func_003842C0(d + 0x8c0, 0x2a, 0xa, 1);
}
