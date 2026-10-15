#include "range.h"
struct Obj {u8 pad[0x70];u32 handle;};extern bool func_0053FD30(Obj*,bool);extern void*data_0070B728;extern void func_004CDDEC(void*,u32,bool);
void f_00292530(Obj*p){if(func_0053FD30(p,false))func_004CDDEC(data_0070B728,p->handle,false);}
