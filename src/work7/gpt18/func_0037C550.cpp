#include "range.h"
struct OC550 {u32 a;s32 id;};
extern "C" s32 func_00588BE4(void*);
extern "C" bool func_0037C550(OC550*p,void*q){return func_00588BE4(q)==p->id;}
