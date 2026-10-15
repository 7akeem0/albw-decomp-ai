#include "range.h"
extern u32 func_0056ADE8(void*);extern void func_0010DEB0(void*);
struct Obj408 {u32 pad0;void* owner;u8 pad8[0x10c-8];u32 value;u32 member;};
void func_004088FC(Obj408* p,void* q){p->owner=q;p->value=func_0056ADE8(p->owner);func_0010DEB0(&p->member);}
