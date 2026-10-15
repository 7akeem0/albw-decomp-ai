// 0x127284: tick; chase an angle, optional reset, gravity.
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned char u8;

extern "C" void func_0051D2F4(s32*, s32, f32, s32, s32);
extern "C" s32  func_0058A8F0(void*);
extern "C" void func_004FABDC(void*, s32, s32, s32);
extern "C" void func_00656794(void*, s32);
extern "C" f32  func_004F898C();
extern "C" void func_004F8964(f32*, s32, f32);

void f(void* self) {
    func_0051D2F4((s32*)((u8*)self + 0x3e8), *(s32*)((u8*)self + 0x8e0),
                  0.1f, 0x2d82d82, 0x7fffffff);
    if (func_0058A8F0(self))
        func_004FABDC(self, 0, -1, 0);
    if (*(u32*)((u8*)self + 0x8bc) == *(u32*)((u8*)self + 0x8e8))
        func_00656794((u8*)self + 0x8bc, 1);
    func_004F8964((f32*)((u8*)self + 0x3e0), 1, func_004F898C());
}
