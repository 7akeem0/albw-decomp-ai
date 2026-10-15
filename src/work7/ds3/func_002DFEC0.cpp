#include "ds3.h"
extern "C" void func_002317C0(void*, f32);
struct V11 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void call(); };
void func_002DFEC0(char* self) {
    func_002317C0(*(char**)(self + 0x14) + 0x80, 1.0f);
    char* r5 = *(char**)(self + 0x2c);
    func_002317C0(r5 + 0x74, 1.0f);
    func_002317C0(r5 + 0x80, 1.0f);
    char* o = *(char**)(self + 0x18);
    *(u8*)(o + 0xe) = 3;
    if (*(u32*)(o + 0x80) == 0) {
        *(u32*)(o + 0x80) = 1;
        ((V11*)o)->call();
    }
}
