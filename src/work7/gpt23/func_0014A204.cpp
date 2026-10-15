#include "range.h"
struct Child{virtual~Child();virtual void v2();virtual void v3();virtual void update(s32);char pad4[0x1e9-4];u8 active;};
struct Array{Child*a[15];Child*at(u32);};inline Child*Array::at(u32 i){Child**p=a;return p[i];}
struct Owner{char pad0[16];Array children;};
extern "C" void func_0014A204(Owner*p,s32 value){for(u32 i=0;i<15;++i)if(p->children.a[i]->active)p->children.at(i)->update(value);}
