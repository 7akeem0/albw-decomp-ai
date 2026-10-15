#include "ds6.h"

void func_004FC798(void* self, u32 a1, void* flags);

struct Obj4FC1CC {
    char _pad[0x5a8];
    char tail;
};

void func_004FC1CC(Obj4FC1CC* self, u32 a1, u32 flags, f32 v) {
    u8 f = (u8)flags;
    if (v < 0.0f) f |= 4;
    func_004FC798((char*)self + 0x5a8, a1, &f);
}
