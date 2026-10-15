#include "ds3.h"
struct ObjF0 { u32 m0; u32 m4; };
struct S30C474 { char pad[0xd7]; u8 bD7; u8 bD8; char pad2[0xf0-0xd9]; ObjF0* mF0; };
extern "C" void* data_0070FB60;
extern "C" u32 func_00556B94(void*);
extern "C" u32 func_0036174C(void*, u32, int);
void func_0030C474(S30C474* self) {
    if (self->bD7 != 0) {
        if (func_00556B94(data_0070FB60) == 0) {
            if (func_0036174C(data_0070FB60, self->mF0->m4, 0) != 0) {
                self->bD7 = 0;
                self->bD8 = 1;
            }
        }
    }
}
