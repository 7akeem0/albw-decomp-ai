#include "ladder_types.h"
struct O4ED6{char pad[0x80];f32 value,other;u8 dirty;};
void f_004ED600(O4ED6* p,f32 x){p->value=x;p->dirty=p->other!=x;}
