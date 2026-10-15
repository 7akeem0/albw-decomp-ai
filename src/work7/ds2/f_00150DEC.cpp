#include "ds2.h"

extern void func_0010A464(void*);
extern u32 func_00150A84(void*, void*, void*);
extern void func_0025B644(void*);
extern void func_0025B84C(void*);

u32 func_00150DEC(void* self, void* name, void* arg2) {
    char tmp[0x60];
    func_0010A464(tmp);
    if (arg2 == 0) arg2 = tmp;
    u32 r = func_00150A84(self, name, arg2);
    if (r != 0) func_0025B644(arg2);
    func_0025B84C(tmp);
    return r;
}
