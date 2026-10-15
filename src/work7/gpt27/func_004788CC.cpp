#include "range.h"
extern "C" void func_0047A9DC(void*,bool);
struct Global45F {u8 pad[0x33e];BitFlag16 flags;};extern Global45F*data_007142C8;
void func_004788CC(void*p){func_0047A9DC(p,false);Global45F*g=data_007142C8;BitFlag16*f=&g->flags;f->reset(0x218);}
