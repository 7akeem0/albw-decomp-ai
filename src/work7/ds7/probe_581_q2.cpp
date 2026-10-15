#include "range.h"
struct X { char pad[0x38]; s32 m38; };
extern s16 table_15B40[];
u8* f(X* p){ s32 i=p->m38; if (!i) return 0; u32 v=(u32)*(s16*)((char*)table_15B40 + i); if ((s32)v<0) return 0; return (u8*)i + v*0x143*4 + 0x183C; }
