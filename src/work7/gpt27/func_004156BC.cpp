#include "range.h"
extern "C" void func_003DD088();
struct Obj4156 {u8 pad[0x1f4];u8 active;u8 pad1f5[2];u8 notified;};
void func_004156BC(Obj4156*p){if(p->active){p->notified=1;func_003DD088();p->active=0;}}
