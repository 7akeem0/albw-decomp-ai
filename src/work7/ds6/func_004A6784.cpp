#include "ds6.h"

struct Obj4A6784 {
    char _pad[0x24];
    void* m24;
    s32 m28;
};

void func_004A6354(void* e, Obj4A6784* self);
void func_004A67CC(Obj4A6784* self);

void func_004A6784(Obj4A6784* self) {
    for (s32 i = 0; i < self->m28; i++) {
        func_004A6354((char*)self->m24 + i * 12, self);
    }
    func_004A67CC(self);
}

