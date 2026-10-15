#include "range.h"
struct E{u16 kind,pad;u32 value,reserved;};
struct O{char pad[0x14];E e[2];};
E*lookup(O*p){if(p->e[0].kind==0x6800)return &p->e[0];if(p->e[1].kind==0x6800)return &p->e[1];return 0;}void*f(O*p){return(char*)p+lookup(p)->value;}
