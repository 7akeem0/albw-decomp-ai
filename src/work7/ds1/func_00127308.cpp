// 0x127308: physics tick (damping, gravity, query).
typedef unsigned int u32;
typedef float f32;
typedef unsigned char u8;
typedef int s32;

extern "C" void func_0014FAFC(void*, u32);
extern "C" s32  func_0058A8F0(void*);
extern "C" void func_004FABDC(void*, u32, int, u32);
extern "C" void func_00656794(void*, u32);
extern "C" f32  func_004F898C();
extern "C" void func_004F8964(f32*, u32, f32);
extern "C" s32  func_00521018(void*);

void f(void* self) {
    *(f32*)((u8*)self + 0x8e4) *= 0.95f;
    func_0014FAFC(self, *(u32*)((u8*)self + 0x3e8));
    if (func_0058A8F0(self))
        func_004FABDC(self, 0, -1, 0);
    if (*(u32*)((u8*)self + 0x8bc) == 0x3c)
        func_00656794((u8*)self + 0x8bc, 0);
    func_004F8964((f32*)((u8*)self + 0x3e0), 1, func_004F898C());
    if (func_00521018(self))
        *(u8*)((u8*)self + 0x8ed) = 1;
}
