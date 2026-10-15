#include "ds3.h"
struct Arg2659 { char pad[0x21]; s8 b21; u8 b22; u8 b23; };
struct S265978 { char pad[0x90e]; u8 b90E; char pad2[0x91c-0x90f]; s8 b91C; };
float func_00265978(S265978* self, Arg2659* arg) {
    s8 k = *(s8*)((char*)self + 0x91c);
    if (k == 1 || k == 2) {
        if (self->b90E == 0) { self->b90E = 0x14; }
        else {
            s8 t = arg->b21;
            if (t == 1) return 0.0f;
            if (t == 3 && arg->b23 == 1) return 0.0f;
        }
    }
    return 1.0f;
}
