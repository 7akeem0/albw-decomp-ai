#include "ladder_types.h"
struct O4E90 {
virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual u32 dispatch(void*);
char pad4[0x2d3];u8 flag;
};
extern "C" void func_00588C14(O4E90*,u32,bool);
extern "C" u32 func_004E90F4(O4E90*p,void*message){func_00588C14(p,0,true);p->flag=1;return p->dispatch(message);}
