#include "range.h"
struct Obj48A1 {u8 pad[0x10];void*child;};
extern "C" bool func_00489F74(void*,u32*,Obj48A1*,void*,s32);
bool func_0048A1EC(Obj48A1*p,u32*transferred,void*buffer,s32 size){if(p->child)return func_00489F74(p->child,transferred,p,buffer,size);return false;}
