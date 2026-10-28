

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;

template<class T0> inline void hlp1(T0 self) { *(u8*)(self + 0x21) = 0x1f;
    *(u8*)(self + 0x22) = 0xff;
    *(u8*)(self + 0x23) = 0; }
extern "C" void func_0034CA24(char* self) {
    *(u32*)(self + 4) = 0;
    *(float*)(self + 8) = 0.0f;
    *(float*)(self + 0xc) = 0.0f;
    *(float*)(self + 0x10) = 0.0f;
    *(float*)(self + 0x14) = 0.0f;
    *(float*)(self + 0x18) = 0.0f;
    *(float*)(self + 0x1c) = 0.0f;

    *(u8*)(self + 0x20) = 0; hlp1(self); 
    *(float*)(self + 0x24) = 0.0f;
    *(float*)(self + 0x28) = 0.0f;
    *(float*)(self + 0x2c) = 0.0f;
    *(u16*)(self + 0x30) = 0;
    *(u16*)(self + 0x32) = 0xffff;
    *(float*)(self + 0x34) = 1.0f;
    *(u32*)self = 0;
    *(u32*)(self + 0x38) = 0;
    *(float*)(self + 0x3c) = 0.0f;
    *(float*)(self + 0x40) = 0.0f;
    *(float*)(self + 0x44) = 0.0f;
}
