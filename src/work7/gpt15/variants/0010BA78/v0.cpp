#include "../../range.h"
struct Receiver{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void target(void*,s32);};extern void*data_00715210;extern Receiver*func_0010DB90(void*);void func_0010BA78(void*arg){Receiver*p=func_0010DB90(data_00715210);if(p)p->target(arg,4);}
