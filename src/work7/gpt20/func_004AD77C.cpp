#include "ladder_types.h"
extern Global4AD7* data_00709DF8;
struct Entry4AD7{char bytes[0x16c];};
struct O4AD7{char pad[0x44];Entry4AD7 entries[4];};
extern void func_001BC07C(Entry4AD7*,s32);
void f_004AD77C(O4AD7* p){Global4AD7* g=data_00709DF8;Entry4AD7* a=p->entries;s32 i=g->kind;func_001BC07C(&a[i],i);}
