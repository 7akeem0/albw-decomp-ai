#include "ds6.h"

void func_00169A80(void* p);
void func_00168E9C(void* a, void* b, u32 c);

struct Obj4FACD4 {
    char _pad[0x40c];
    void* m40c;
    char _pad2[0x418 - 0x410];
    void* m418;
};

void func_004FACD4(Obj4FACD4* self, u32 a) {
    if (!self->m418) return;
    func_00169A80(self->m418);
    func_00168E9C(self->m418, self->m40c, a);
}
