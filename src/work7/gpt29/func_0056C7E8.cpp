#include "range.h"
struct Owner56C7 { u32 pad0; s32 kind; void* resource; };
extern u32* func_0056AC10(void*,s32);
u32 f_0056C7E8(Owner56C7* p) { if(!p->kind)return 0;return *func_0056AC10(p->resource,p->kind); }
