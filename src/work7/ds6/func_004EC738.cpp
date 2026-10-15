#include "ds6.h"

struct Obj4EC738 {
    char _pad[0x34];
    void* m34;
    void* m38;
    char _pad2[0x4c - 0x3c];
    void* m4c;
    char _pad3[0x7a - 0x50];
    u8 m7a;
};

void func_002973E8(void* p);
void func_002569EC(void* p, u32 a, f32 v);
void func_00297610(void* p, u32 a, f32 v);

void func_004EC738(Obj4EC738* self) {
    func_002973E8(self->m4c);
    func_002569EC(self->m34, 0, 0.0f);
    func_00297610(self->m38, 0, 0.0f);
    self->m7a = 1;
}

