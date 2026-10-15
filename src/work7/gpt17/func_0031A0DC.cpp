#include "range.h"
struct Obj {u8 pad[0x458];Vec3 loc;u8 p464[0x19c];u8 sub[0x30];Vec3 other;};
extern void func_0030A200(void*,const Vec3&,s32,const Vec3&);
void f_0031A0DC(Obj* p){func_0030A200(p->sub,p->loc,0,p->other);}
