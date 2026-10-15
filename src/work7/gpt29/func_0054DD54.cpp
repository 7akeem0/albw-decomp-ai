#include "range.h"
struct Entry54DD { u16 header; u8 enabled; char pad3[0x19]; };
struct Owner54DD { char pad0[0x60]; Entry54DD entries[4]; };
bool f_0054DD54(Owner54DD* p,u32 index) { if(index>=4)return false;return p->entries[index].enabled!=0; }
