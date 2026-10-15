#include "range.h"
struct Obj {u8 pad[0xc0];u8 flag;};
extern bool func_004B083C();
void f_0028F7C8(Obj* p){if(func_004B083C())p->flag=0;}
