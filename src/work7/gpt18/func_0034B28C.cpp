#include "range.h"
struct O{char pad[0x8e];u8 flag;};extern void*data_00712588;extern void func_002DF504(void*,O*);extern void func_001080D4(void*);void f(O*p){func_002DF504(data_00712588,p);func_001080D4((char*)p+0xa8);p->flag=0;}
