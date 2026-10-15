#include "range.h"
struct Obj {u8 pad[0x4b0];Vec3 pos;};
extern void* data_0070FB60;
extern void func_003413DC(void*,const Vec3*,s32*);
bool f_002E01C4(Obj*p){s32 value=0;func_003413DC(data_0070FB60,&p->pos,&value);return false;}
