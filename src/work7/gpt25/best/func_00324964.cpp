#include "../range_types.h"
struct Obj324964{char pad[0x410];char sub[0x64];u8 flag;};
extern void*data_00709D28;
extern "C" void func_004A8BFC(void*,void*,s32);
extern "C" void f_00324964(Obj324964*p){if(p->flag)return;p->flag=1;func_004A8BFC(data_00709D28,p->sub,13);}
