#include "ds6.h"

struct Obj48ECF4 {
    char _pad[4];
    char m4[0x164];
    u8 m168;
};

u32 func_00408458();
void func_0010C0B8(void* p);
void func_0040BE08(void* p);
void func_0010EEE0(void* p);

void func_0048ECF4(Obj48ECF4* self) {
    if (func_00408458() == 0) return;
    if (self->m168 != 0) {
        void* p = (char*)self + 0x14c;
        func_0010C0B8(p);
        func_0040BE08((char*)self + 4);
        func_0010EEE0(p);
    } else {
        func_0040BE08((char*)self + 4);
    }
}

