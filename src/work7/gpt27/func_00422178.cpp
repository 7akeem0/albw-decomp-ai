#include "range.h"
extern "C" void func_001B6D40(void*);extern "C" void func_00231340(void*);
struct Obj422 {u8 pad[0x2c];Ctrl231 ctrl;u8 pad38[0xe2-0x38];u8 active;};
void func_00422178(Obj422*p){func_001B6D40(p);if(p->active){func_00231340(&p->ctrl);p->active=0;}}
