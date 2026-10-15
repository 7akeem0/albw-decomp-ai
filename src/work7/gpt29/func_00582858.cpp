#include "range.h"
struct Owner582858 { void* valid; u32 reserved; void* table; s32 count; };
extern void* func_0011EB40(void*,s32);
void* f_00582858(Owner582858* p,s32 index) {
    if(!p->valid)return 0;
    if(index<0||index>=p->count)return 0;
    if((u32)index<(u32)p->count)return func_0011EB40(p->table,index);
    return 0;
}
