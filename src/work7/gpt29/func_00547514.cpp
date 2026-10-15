#include "range.h"
struct Owner547 { char pad0[0x56]; s16 id; };
extern void* data_0070C8E0;
extern void func_004AB6A8(void*,s32,bool);
void f_00547514(Owner547* p) { if(p->id>=0)func_004AB6A8(data_0070C8E0,p->id,true); }
