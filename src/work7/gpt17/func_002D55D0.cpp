#include "range.h"
struct Obj {u32 unknown;s16 state;u16 pad;u32 value;};
void* f_002D55D0(Obj* p,s32 n){if(n!=-2 && n!=-1){p->state=n;return &p->value;}return 0;}
