#include "ds3.h"
extern "C" int func_00408458();
extern "C" void func_004E9A08(void*);
extern "C" void func_0048ECF4(void*);
extern "C" void func_0025BF64(void*);
extern void* data_00711F50;
struct V3 { virtual void v0(); virtual void v1(); virtual void call(); };
void func_00320F20(char* self) {
    if (!func_00408458()) return;
    void** it = *(void***)(self + 0x174);
    void** end = it + *(u32*)(self + 0x16c);
    for (; it != end; it++) {
        ((V3*)*it)->call();
    }
    func_004E9A08(data_00711F50);
    func_0048ECF4(self);
    func_0025BF64(data_00711F50);
}
