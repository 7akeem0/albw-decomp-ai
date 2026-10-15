#include "range.h"
struct Owner547 { char pad0[0x56]; s16 id; };
extern void* data_0070C8E0;
extern void* func_00581AD8(void*,s32);
void* f_005474CC(Owner547* p) { if(p->id<0)return 0;return func_00581AD8(data_0070C8E0,p->id); }
