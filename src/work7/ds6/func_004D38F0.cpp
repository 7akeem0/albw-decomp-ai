#include "ds6.h"

void func_00169A80(void* p);
void func_00168E9C(void* a, void* b, u32 c);
void func_004CEAF0(void* p);

struct Obj4D38F0 {
    char _pad[0x530];
    void* m530;
    void* m534;
};

void func_004D38F0(Obj4D38F0* self) {
    if (self->m534) {
        func_00169A80(self->m534);
        func_00168E9C(self->m534, self->m530, 0);
    }
    func_004CEAF0(self->m530);
}
