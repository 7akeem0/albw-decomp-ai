#include "ladder_types.h"
struct O4BC1{char pad[0x44a];u8 flag;};
extern bool func_00521080(O4BC1*,const u32*);
extern bool func_00520FD4(O4BC1*);
void f_004BC12C(O4BC1*p,const u32*ref){if(func_00521080(p,ref)&&!func_00520FD4(p))p->flag=1;}
