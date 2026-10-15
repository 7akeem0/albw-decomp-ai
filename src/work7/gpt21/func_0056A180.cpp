#include "range.h"
struct S{char pad[0x98];u8 flag;char pad99[0x165-0x99];s8 value;};
s8 f_56A180(const S*p){if(!p->flag)return 0;return p->value;}
