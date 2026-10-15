#include "ds6.h"

struct Obj51BFCC {
    char _pad[0x20];
    u32 m20;
    char _pad2[0x80 - 0x24];
    void* m80;
    char _pad3[0x33d - 0x84];
    u8 m33d;
};

extern void* data_0070B850;
u32 func_005228A4(void* p, u32 a);
void func_00166620(void* p, u32 a);
void func_0043DBB0(void* p);

void func_0051BFCC(Obj51BFCC* self) {
    if (func_005228A4(data_0070B850, self->m20) != 0) {
        func_00166620(data_0070B850, self->m20);
        self->m33d = 1;
    }
    if (self->m80) func_0043DBB0(self->m80);
}
