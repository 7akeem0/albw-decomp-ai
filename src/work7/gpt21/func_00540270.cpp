#include "range.h"
struct S { char pad[0x34]; s8 mode; };
extern u32 func_00560AB8(S*,bool);
u32 f_540270(S* p,bool b) { if(p->mode < -1)return 1;return func_00560AB8(p,b); }
