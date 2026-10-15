#include "range.h"
struct Child{char pad[0x24];void*value;};struct G{char pad[0x12c];Child*child;};extern G*data_007142C8;struct O{char pad[0x210];s32 count;};extern __attribute__((weak))void func_00668E44(void*,s32);void f(O*p){if(p->count<=60)return;if(!data_007142C8->child->value)return;func_00668E44(&p->count,2);}
