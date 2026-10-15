#include "range.h"
struct Entry56C9{u32 value,a,b;};
struct Table56C9{char pad0[0xc];Entry56C9 entries[1];};
struct Owner56C9{u32 pad0;Table56C9*data;u32 pad8;u8 valid;};
u32 f_0056C9FC(Owner56C9*p,u32 i){if(!p->valid)return 0;return p->data->entries[i].value;}
