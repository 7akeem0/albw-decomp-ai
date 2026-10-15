

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern u32 data_00715330;
extern "C" void func_00490A00();
extern "C" void func_00490A04();
extern "C" void func_0011F054(void*, void*);
extern "C" void* func_0011EE2C(u32);
extern "C" s32 func_0011EC80();
extern "C" void func_0011E674(void*);
struct Obj { char pad0[4];
    void* m4;
    s32 m8;
    s32 f(u32 a1, u32 a2);
};
s32 Obj::f(u32 a1, u32 a2) {
    data_00715330 = a2;
    func_0011F054((void*)func_00490A04, (void*)func_00490A00);
    m4 = func_0011EE2C(a1);
    s32 s = func_0011EC80();
    void* z = 0;
    if (s >= 0) {
        m8 = s;
    } else {
        func_0011E674(m4);
        m4=(void*)0;m8=(s32)z;
    }
    func_0011F054(0, 0);
    data_00715330 = 0;
    return (s >> 31) + 1;
}
