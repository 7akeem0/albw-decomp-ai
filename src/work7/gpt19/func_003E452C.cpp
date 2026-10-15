#include "range.h"
struct Sub {u32 a;u8 pad[0x3c];u32 b;void set(u32 x,u32 y){a=x;b=y;}};
struct Global {u8 pad[0x14];Sub s;};
extern Global data_00714888;
void f_003E452C(u32 a,u32 b){data_00714888.s.set(a,b);}
