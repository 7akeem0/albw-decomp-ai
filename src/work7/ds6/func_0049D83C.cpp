#include "ds6.h"

struct Sub20_49D83C { char _pad[0x20]; void* m20; };
struct Obj49D83C { char _pad[0x20]; Sub20_49D83C* m20; };

u32 func_003CD8E0(void* p);
void func_0049D774(Obj49D83C* self, u32 a);
void func_0010EEE0(void* p);

void func_0049D83C(Obj49D83C* self, u32 a) {
    if (func_003CD8E0((char*)self->m20->m20 + 4) == 0) return;
    func_0049D774(self, a);
    func_0010EEE0((char*)self->m20->m20 + 4);
}
