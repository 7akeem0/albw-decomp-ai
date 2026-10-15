#include "ds3.h"
extern "C" void func_0068C794(f32*, f32, f32, f32, f32);
extern "C" void func_002EC1B8(void*, int);
extern "C" void  func_006640EC(void*, int);
struct Pair { u32 cur, max; };
void func_002EA76C(char* self) {
    func_0068C794((f32*)(self + 0xd4c), 4.0f, 0.1f, 0.0f, 0.1f);
    func_002EC1B8(self, 1);
    Pair p = *(Pair*)(self + 0xb0c);
    if (p.cur < p.max) {
        *(u32*)(self + 0xb0c) = p.cur + 1;
    } else {
        func_006640EC(self + 0x8c8, *(u8*)(self + 0xd48) == 2 ? 0x11 : 0xe);
    }
}
