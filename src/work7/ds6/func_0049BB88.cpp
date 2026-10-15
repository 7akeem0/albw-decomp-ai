#include "ds6.h"

void func_0049BB88(u32* out, u32 a, u32 b, u32 c, u32 d) {
    if ((a | b | c | d) != 0) {
        out[0] = a;
        out[1] = b;
        out[2] = c;
        out[3] = d;
    } else {
        out[0] = 1;
        out[1] = 0x6c078967;
        out[2] = 0x714acb41;
        out[3] = 0x48077044;
    }
}
