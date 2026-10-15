#include "ds6.h"

struct Obj4C1088 {
    char _pad[0x3e8];
    u32 m3e8;
};

void* func_00520FC0();
void func_004C10C4(Obj4C1088* self, void* playerPos, u32 a, u32 v, f32 x, f32 y);

void func_004C1088(Obj4C1088* self, u32 a, f32 x, f32 y) {
    func_004C10C4(self, func_00520FC0(), a, self->m3e8, x, y);
}
