#include "ds2.h"

extern void* g_711F50;
extern void func_005380E0(void*);
extern void func_00297448(void*, int);
extern void func_005381B4(void*);
extern void func_004EC074(void*, int);
extern void func_00297474(void*, int, f32);

void func_00259304(void* self) {
    func_005380E0(self);
    func_00297448(g_711F50, 0);
    func_005381B4(self);
    func_004EC074(g_711F50, 0);
    func_00297474(g_711F50, 0, 0.0f);
}
