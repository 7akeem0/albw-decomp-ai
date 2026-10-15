#include "range.h"
struct Owner55A360 { char pad[0x3b]; u8 kind; char gap3c[0xe4-0x3c]; u16 value; };
u32 f_0055A360(Owner55A360* p){u32 kind=p->kind;if(kind==3)return 2;if(kind==4)return 4;if(kind==5)return 6;if(kind==6)return 8;return p->value;}
