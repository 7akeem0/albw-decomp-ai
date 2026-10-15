#include "ds2.h"

extern void func_00409BC8(void*, void*);
extern void* func_0056A1C0(void*);
extern void func_002589F8(void*, void*, int);
extern void func_00409B8C(void*);

void func_00257F48(void* self) {
    s8 v = *(s8*)((char*)self + 0x18);
    if (v == 2 || v == 3) {
        void* tmp;
        func_00409BC8(&tmp, (char*)self + 0xc);
        if (tmp != 0) {
            func_002589F8(self, func_0056A1C0(tmp), 0);
        }
        func_00409B8C(&tmp);
    }
}
