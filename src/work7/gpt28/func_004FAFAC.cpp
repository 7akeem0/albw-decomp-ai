#include "range.h"
struct Object4FAF { char pad0[0x87f]; u8 first, second, third; void set(u32,u32,u32); };
void Object4FAF::set(u32 a,u32 b,u32 c) {
    if(!a) a=10;
    first=a;
    if(b) second=b; else second=15;
    if(c) third=c; else third=5;
}
