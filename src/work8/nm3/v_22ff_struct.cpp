#include "ds2.h"
extern void func_00166150(void*);
extern void func_0065EB40(void*, int);
struct Fl22FF { char pad[0x74]; s8 m274; u8 m275; };
void func_0022FF2C(void* self) {
    func_00166150(self);
    Fl22FF* f = (Fl22FF*)((char*)self + 0x200);
    if (f->m275 != 0) func_0065EB40((char*)self + 0x250, 6);
    else if (f->m274 != 0) func_0065EB40((char*)self + 0x250, 1);
    else func_0065EB40((char*)self + 0x250, 4);
    *(u8*)((char*)self + 0x275) = 0;
    *(u8*)((char*)self + 0xf8) = 0;
    *(u8*)((char*)self + 0xf9) = 0;
    *(u8*)((char*)self + 0xfa) = 0;
}
