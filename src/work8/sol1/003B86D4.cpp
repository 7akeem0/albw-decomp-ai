

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" void func_003B0F7C(void*);
extern "C" u32 func_00542D5C();
extern "C" void func_003842C0(void*, u32, u32, u32);
extern "C" float sqrtf(float);
inline void issue5(char*p,u32 kind5,u32 frames5,u32 on5){func_003842C0(p+0x8c0,kind5,frames5,on5);}


extern "C" void func_003B86D4(char* self) {
    func_003B0F7C(self);
    char* p = *(char**)(self + 0x48);
    float a = *(float*)(p + 0x3dc);
    float b = *(float*)(p + 0x3e4);
    float d = a * a + b * b;
    float s = sqrtf(d);
    if (func_00542D5C() == 0) return;
    if (0.001f > s) return;
    issue5(*(char**)(self+0x48),15,10,1);
}
