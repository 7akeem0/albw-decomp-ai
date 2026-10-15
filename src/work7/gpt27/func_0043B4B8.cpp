#include "range.h"
struct Owner43B{u8 pad[0x71];u8 registered;};
extern "C" void*data_0070B850;
extern "C" void func_001B6D40(Owner43B*);
extern "C" void func_00166620(void*,Owner43B*);
void func_0043B4B8(Owner43B*p){func_001B6D40(p);if(p->registered){func_00166620(data_0070B850,p);p->registered=0;}}
