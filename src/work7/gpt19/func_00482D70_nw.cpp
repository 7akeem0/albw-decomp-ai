#include "range.h"
struct S {u8 data[0x9C];};
extern "C" bool func_00483084(S*);
extern "C" bool func_00532BA0(void*);
extern "C"  void func_0066EEEC(void*,s32);
extern "C" void f_00482D70(S* s){if(func_00483084(s)&&func_00532BA0(s->data+0x98))func_0066EEEC(s->data+0x74,2);}
