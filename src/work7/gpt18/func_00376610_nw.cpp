#include "range.h"
struct S661 {u8 pad[0x32];};struct O661 {u8 pad[0x38];S661 state;u16 value;};
extern "C" void func_001B6C04(O661*);
extern "C"  void func_00667638(S661*,s32);
extern "C" void func_00376610(O661*p){func_001B6C04(p);func_00667638(&p->state,0);p->value=0;}
