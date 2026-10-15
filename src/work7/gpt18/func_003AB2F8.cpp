#include "range.h"
struct OB2F {u8 pad[0x34];void* model;u8 flag;u8 gap[7];s32 node;};
extern "C" void func_004CEA18(void*,bool,s32);
extern "C" void func_003AB2F8(OB2F*p){func_004CEA18(p->model,false,p->node);p->flag=1;}
