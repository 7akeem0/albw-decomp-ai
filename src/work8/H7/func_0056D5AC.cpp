#include "h7.h"

struct Out0056D5AC { u8 m0; char _1[3]; u32 m4; u32 m8; u32 mc; };
struct Self0056D5AC {
    char _0[0x51];
    u8 m51;
    char _52[0x84 - 0x52];
    u32 m84;
    u8 m88;
    char _89[0x8c - 0x89];
    u32 m8c;
    char _90[0x98 - 0x90];
    u32 m98;
};

void* func_00414FF0();
void func_0010C0C0(void* p);
void func_0010C160(void* p);

u32 func_0056D5AC(Self0056D5AC* self, Out0056D5AC* out) {
    func_0010C0C0((char*)func_00414FF0() + 0x1c4);
    if (self->m51 == 0) {
        func_0010C160((char*)func_00414FF0() + 0x1c4);
        return 0;
    }
    out->m0 = self->m88;
    out->m4 = self->m84;
    out->m8 = self->m8c;
    out->mc = self->m98;
    func_0010C160((char*)func_00414FF0() + 0x1c4);
    return 1;
}
