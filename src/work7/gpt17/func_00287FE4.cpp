#include "range.h"
struct Part {u32 opaque;};struct Obj {u32 reserved;Part part;u8 pad8[0x2d7-8];u8 flag;};extern void*data_0070FB60;extern bool func_00556B94(void*);extern void func_003615E8(void*);extern void func_00547514(Part*);
void f_00287FE4(Obj*p){if(!func_00556B94(data_0070FB60)){func_003615E8(data_0070FB60);func_00547514(&p->part);p->flag=1;}}
