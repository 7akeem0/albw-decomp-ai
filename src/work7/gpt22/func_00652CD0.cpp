#include "range.h"
struct S{u8 pad[0x9cc];u16 a,b;};extern "C" s32 func_005568D4(void*);extern void*data_0070FB60;bool target(S*p,bool b){u16 n=b?p->b:p->a;return func_005568D4(data_0070FB60)>=n;}
