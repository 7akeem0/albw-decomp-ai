#include "range17.h"
struct Sub17 {u8 pad[0x14];void* child;};
struct Obj17 {u8 pad[0x64];Sub17* sub;};
extern void func_0030C78C(void*);
extern "C" void g_2CB118(Sub17* s);
void f_002CB110(Obj17* p){ g_2CB118(p->sub); }
