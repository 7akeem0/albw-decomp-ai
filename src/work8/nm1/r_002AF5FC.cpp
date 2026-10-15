#include "range.h"
struct Sub {u8 pad[0x18c];u16 id;u8 flag;};
void f_002AF604(Sub* s,u32 id,s32 flag){s->id=id;if(flag>=0)s->flag=flag;}
