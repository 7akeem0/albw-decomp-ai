#include "ladder_types.h"
struct Arg4D5E{char pad[0x20];u16 kind;};
struct O4D5E{char pad[0x111];u8 a,b;};
bool f_004D5EE8(O4D5E* p,const Arg4D5E* a){u32 n=a->kind&0x7e0;if(n==0x80)p->a=1;else if(n==0x140)p->b=1;return true;}
