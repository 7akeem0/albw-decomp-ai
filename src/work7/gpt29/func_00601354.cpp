#include "range.h"
struct End601 { char* pointer; };
struct Owner601 { char pad0[0x487c]; End601 end[1];char* current; };
extern u32 func_00601378(u32);
u32 f_00601354(Owner601* p) { End601* e=p->end;return func_00601378((u32)(e->pointer-p->current)&~3u); }
