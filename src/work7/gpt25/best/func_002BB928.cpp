#include "../range_types.h"
struct Obj2BB9 {char pad[0x4e4];u32 value;char gap[0x40c];u32 cached;char gap2[8];Timer25 timer;};
extern "C" void f_002BB928(Obj2BB9*p){p->timer.start(10);p->cached=p->value;}
