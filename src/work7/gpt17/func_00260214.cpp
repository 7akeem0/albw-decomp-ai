#include "range.h"
struct Obj {virtual s32 v0();virtual s32 v1();virtual s32 v2();virtual s32 v3();u8 pad[0x34-4];s32 old;};
s32 query(Obj*p){return p->v3();}
bool f_00260214(Obj*p){s32 v=query(p);if(v==-1||p->old==-1){p->old=v;return false;}return p->old!=v;}
