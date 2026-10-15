#include "range17.h"
struct Sub17 {u8 pad[0x14];void* child;};
extern void func_0030C78C(void*);
extern "C" void g_2CB118(Sub17* s){void* c=s->child;if(c)func_0030C78C(c);}
