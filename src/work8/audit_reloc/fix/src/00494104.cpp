

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern u32 data_00715300;
extern "C" void func_0049417C();
extern "C" void func_00494180();
extern "C" void func_0011F054(void*, void*);
extern "C" void* func_0011EDA4(u32);
extern "C" s32 func_0011EACC();
extern "C" void func_0011F168(void*);
struct Obj { char pad0[4];
    void* m4;
    s32 m8;
    s32 f(u32 a1, u32 a2);
};
s32 Obj::f(u32 a1, u32 a2) {
    data_00715300 = a2;
    func_0011F054((void*)func_00494180, (void*)func_0049417C);
    m4 = func_0011EDA4(a1);
    s32 s = func_0011EACC();
    void* z = 0;
    if (s >= 0) {
        m8 = s;
    } else {
        func_0011F168(m4);
        m4=(void*)0;m8=(s32)z;
    }
    func_0011F054(0, 0);
    data_00715300 = 0;
    return (s >> 31) + 1;
}
