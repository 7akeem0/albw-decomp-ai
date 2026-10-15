#include "range.h"
extern "C" void func_00440CE4(void*);
struct Global45F {u8 pad[0x33e];BitFlag16 flags;};extern Global45F*data_007142C8;
void func_0045F134(void*p){func_00440CE4(p);Global45F*g=data_007142C8;BitFlag16*f=&g->flags;f->set(2);}
