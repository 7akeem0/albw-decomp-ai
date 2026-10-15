#include "range.h"
struct Owner5472{char pad0[0x32];u16 valid;char pad34[0x39c];Vec3 position;};extern void*data_0070C8E0;extern s32 func_00581D48(void*,const Vec3*);
s16 f_0054729C(Owner5472*p){if(!p->valid)return -1;return func_00581D48(data_0070C8E0,&p->position);}
