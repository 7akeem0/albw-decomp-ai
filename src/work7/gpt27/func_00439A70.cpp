#include "range.h"
struct Array439{void*items[2];void*at(u32 i){void**p=items;if(i<2)p=&items[i];return *p;}};
struct Owner439{u8 pad[0x198];Array439 children;u8 index;};
extern "C" void*data_0070B850;
extern "C" void func_00166C00(void*,s32);
extern "C" void func_0012C790(void*);
void func_00439A70(Owner439*p){func_00166C00(data_0070B850,0);func_0012C790(p->children.at(p->index));}
