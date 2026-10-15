#include "range.h"
struct Copy6E84 {u32 unknown;u32*items;u32 count;};
extern "C" void sub_0010E3C4(void*,const void*,u32);
extern "C" u32* f_003F6E84(Copy6E84*s,u32*out){if(s->items&&s->count){sub_0010E3C4(out,s->items,s->count*4);out+=s->count;}return out;}
