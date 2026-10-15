// 0x122FC8: state gate with two tail calls.
typedef unsigned int u32;
typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef short s16;

extern "C" void func_004FA124(void*, s32, u32);
extern "C" void func_004FABDC(void*, u32, s32, u32);

void f(void* self, u32 a1, void* a2) {
    if (*(u8*)((u8*)a2 + 0x27) == 0)
        func_004FA124(self, (s32)*(s8*)((u8*)a2 + 0x24), 0);
    u32 k = a1 & 0xff;
    if (k != 0x1e && (k - 0xe) > 3)
        return;
    s16 v = *(s16*)((u8*)self + 0x508);
    if (v <= 0)
        return;
    if (*(u8*)((u8*)a2 + 0x27) != 0)
        func_004FABDC(self, 3, -1, 0);
    else
        func_004FABDC(self, 2, 0, 0);
}
