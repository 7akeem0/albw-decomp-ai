#include "ds6.h"
extern char ro_006EB32C[];
extern void* data_0070B850;
extern void* data_0070B800;
struct Obj4B9AA0 { void* m0; char _pad[0x38 - 4]; void* m38; };
void func_00166620(void* p, void* q);
void func_0012ED38(void* p, void* q);
void* func_004A1520(void* p);
Obj4B9AA0* func_004B9AA0(Obj4B9AA0* self) {
    char* base = ro_006EB32C;
    self->m0 = base;
    self->m38 = base + 0x54;
    func_00166620(data_0070B850, self);
    func_0012ED38(data_0070B800, self);
    return (Obj4B9AA0*)((char*)func_004A1520((char*)self + 0x38) - 0x38);
}
