#include "range.h"
struct C7DA {u8 pad[0x936];u8 mode;};struct O7DA {u8 pad[0x48];C7DA*child;};
extern "C" void func_003B147C(O7DA*,u32,bool);
extern "C" void func_003B7DAC(O7DA*p){if(p->child->mode==2)func_003B147C(p,10,false);}
