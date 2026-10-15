#include "range.h"
struct Object492D {
    u32 value, first, second;
    u8 a,b,c,d; u16 half; u8 mode;
    Object492D(u32);
};
Object492D::Object492D(u32 input) {
    first=0;
    mode=16;
    second=0;
    a=0; b=0; c=0; d=0;
    half=0;
    value=input;
}
