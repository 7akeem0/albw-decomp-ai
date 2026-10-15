#include "ladder_types.h"
struct Value4FB4{char pad[0x10];f32 value;};
struct Child4FB4{char pad[0xc];s32 count;u32 unused;Value4FB4* data;Value4FB4& operator[](s32 i){if((u32)i<(u32)count)return data[i];return data[0];}};
struct Owner4FB4{char pad[0x418];Child4FB4* child;};
void f_004FB4C4(Owner4FB4* p,f32 x){if(p->child)(*p->child)[0].value=x;}
