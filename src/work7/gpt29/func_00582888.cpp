#include "range.h"
struct Owner5828 { u32 pad0; char table[8]; s32 count; };
extern void* func_0057E9F4(void*,s32);
void* f_00582888(Owner5828* p,s32 index) { if(index<0 || p->count<=index)return 0;return func_0057E9F4(p->table,index); }
