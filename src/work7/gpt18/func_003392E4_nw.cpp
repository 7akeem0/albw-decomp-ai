#include "range.h"
struct Info{u8 code;s8 kind;};struct Q{char pad[0x2c];Info*info;};struct O;extern void func_00665CC4(void*,s32);bool f(O*p,const Q*q){if(q->info&&(q->info->kind==15||q->info->kind==12||q->info->kind==1))func_00665CC4((char*)p+0x40c,1);return false;}
