#include "range.h"
struct O{char pad[0xc5];u8 flag;};extern void*data_00714248;extern void func_00440EF8(void*);extern void func_002DF94C(void*);extern void func_002DF710(void*);void f(O*p){func_00440EF8(data_00714248);if(p->flag)func_002DF94C(data_00714248);else func_002DF710(data_00714248);}
