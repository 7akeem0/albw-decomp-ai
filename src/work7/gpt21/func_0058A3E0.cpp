#include "range.h"
struct S{char pad[0x24];s8 mode;u8 flag;};bool f(S*p){if(p->mode==1)return true;return p->mode==3 && p->flag==1;}
